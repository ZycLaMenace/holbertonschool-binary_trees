#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Description: Measures the balance factor of a binary tree
 * The balance factor is the difference between the height of the left subtree
 * and the right subtree
 * A NULL pointer is not a node
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right);
	}
	return (left_height - right_height);

}