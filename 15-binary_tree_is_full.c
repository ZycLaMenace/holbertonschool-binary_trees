#include "binary_trees.h"
/**
 * binary_tree_is_full - tree is full is node got 2 child or 0
 * @tree: pointer to root of the tree
 *
 * Return: 0 tree NULL or not full, 1 tree full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
