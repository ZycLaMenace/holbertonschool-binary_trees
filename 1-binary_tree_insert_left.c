#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Step 1: Check if parent is NULL */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Step 2: Create the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Step 3: Handle the case where parent already has a left-child */
	if (parent->left != NULL)
	{
		new_node->left = parent->left; /* new node devient le parent */
		parent->left->parent = new_node; /* left child parent devient le nv noeud */
	}

	/* Step 4: Link the new node to the parent */
	parent->left = new_node;

	return (new_node);
}
