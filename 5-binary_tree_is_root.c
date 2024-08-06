#include "binary_trees.h"
/**
 * binary_tree_is_root - checking if node is root
 * @node: node to check
 *
 * Return: 0 if node is NULL/not root, 1 if node is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
