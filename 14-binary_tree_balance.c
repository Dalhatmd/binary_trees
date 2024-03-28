#include "binary_trees.h"
int binary_tree_heig(const binary_tree_t *tree);
/**
 * binary_tree_balance - computes the balance of a node in a binary tree
 *
 * @tree: input node
 *
 * Return: (0) if NULL is passed or balance of binary tree otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_heig(tree->left);
	right_height = binary_tree_heig(tree->right);

	return (left_height - right_height);
}
/**
 * binary_tree_heig - computes the height of binary tree
 *
 * @tree: input node
 *
 * Return: height if binary tree or (0) if NULL is passed
 */
int binary_tree_heig(const binary_tree_t *tree)
{
	int left_depth = 0;
	int right_depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_depth = 1 + binary_tree_heig(tree->left);
	if (tree->right)
		right_depth = 1 + binary_tree_heig(tree->right);

	if (left_depth > right_depth)
		return (left_depth);
	else
		return (right_depth);
}
