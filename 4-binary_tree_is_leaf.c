#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks whether a node in a binary tree is a leaf
 *
 * @node: node to check
 *
 * Return: 1 if leaf and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left || node->right)
		return (0);
	else
		return (1);
}
