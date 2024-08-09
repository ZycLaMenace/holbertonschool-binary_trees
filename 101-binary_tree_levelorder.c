#include "binary_trees.h"
#include <stdlib.h>

/**
 * enqueue - Adds a node to the queue.
 * @queue: The queue.
 * @rear: Rear pointer.
 * @node: The node to add.
 * Return: New rear pointer.
 */
binary_tree_t **enqueue(binary_tree_t **queue, int *rear, binary_tree_t *node)
{
	queue[*rear] = node;
	(*rear)++;
	return (queue);
}

/**
 * dequeue - Removes a node from the queue.
 * @front: Front pointer.
 * @queue: The queue.
 * Return: Node removed from the queue.
 */
binary_tree_t *dequeue(binary_tree_t **queue, int *front)
{
	(*front)++;
	return (queue[*front - 1]);
}

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **queue;
	int front = 0, rear = 0, size = 0;
	binary_tree_t *current;

	if (tree == NULL || func == NULL)
		return;

	size = binary_tree_size(tree);
	queue = malloc(sizeof(binary_tree_t *) * size);
	if (queue == NULL)
		return;

	enqueue(queue, &rear, (binary_tree_t *)tree);

	while (front < rear)
	{
		current = dequeue(queue, &front);
		func(current->n);

		if (current->left != NULL)
			enqueue(queue, &rear, current->left);
		if (current->right != NULL)
			enqueue(queue, &rear, current->right);
	}

	free(queue);
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
