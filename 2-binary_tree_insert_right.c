#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
	{
		return (NULL);
	}
	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;
	right_node->right = NULL;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);
}
