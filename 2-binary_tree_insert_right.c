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

	binary_tree_t *rigth_node = malloc(sizeof(binary_tree_t));

	if (rigth_node == NULL)
	{
		return (NULL);
	}
	rigth_node->n = value;
	rigth_node->parent = parent;
	rigth_node->left = NULL;
	rigth_node->right = NULL;

	if (parent->right != NULL)
	{
		rigth_node->right = parent->right;
		parent->right->parent = rigth_node;
	}

	parent->right = rigth_node;

	return (rigth_node);
}
