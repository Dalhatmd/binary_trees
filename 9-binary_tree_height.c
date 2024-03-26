#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree
 *
 * @tree: root of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_depth = 0;
	int right_depth = 0;

	if (tree == NULL)
		return (-1);

	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	if (left_depth > right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);
}
