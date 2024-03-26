#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node in a binary tree is a root
 *
 * @node: node to be checked
 *
 * Return: 1 if root and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (0);

	else
		return (1);
}
