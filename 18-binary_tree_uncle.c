#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 *
 * @node: Pointer to the node to find the uncle
 * Description: Finds the uncle of a node in a binary tree
 * The parent of the node is known as the parent
 * of the uncle node
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL
 * or the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent->parent == NULL)
	{
		return (NULL);
	}
	if (parent->parent->left == parent)
	{
		return (parent->parent->right);
	}
	else
	{
		return (parent->parent->left);
	}
}
