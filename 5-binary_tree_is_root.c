#include "binary_trees.h"

/**
 * binary_tree_is_root - It checks if a node is a root.
 * @node: Node to check
 * Return: 1 if it is and 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
