#include "binary_trees.h"

int binary_tree_is_ancestor(const binary_tree_t *ancestor, const binary_tree_t *node);

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 *         If no common ancestor was found, returns NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (!first || !second)
		return (NULL);

	temp = first;
	while (temp)
	{
		if (binary_tree_is_ancestor(temp, second))
			return ((binary_tree_t *)temp);
		temp = temp->parent;
	}

	return (NULL);
}

/**
 * binary_tree_is_ancestor - Checks if a node is an ancestor of another node
 * @ancestor: Pointer to the possible ancestor node
 * @node: Pointer to the node to check
 *
 * Return: 1 if ancestor is an ancestor of node, otherwise 0
 */
int binary_tree_is_ancestor(const binary_tree_t *ancestor,
							const binary_tree_t *node)
{
	while (node)
	{
		if (node == ancestor)
			return (1);
		node = node->parent;
	}
	return (0);
}