#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of the node
 * @node: node to use
 *
 * Return: Sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
