#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to node to be checked
 *
 * Return: 1 if perfect. 0 otherwise or if NULL is passed
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));

}
