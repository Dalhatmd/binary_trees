#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree
 *
 * @tree: root of the tree
 *
 * Return: size of binary tree or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_depth = 0;
	size_t right_depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_depth = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_depth = 1 + binary_tree_height(tree->right);

	if (left_depth > right_depth)
		return (left_depth);
	else
		return (right_depth);
}
