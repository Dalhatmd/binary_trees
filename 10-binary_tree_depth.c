#include "binary_trees.h"
/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 *
 * @tree: pointer to the node to be checked
 *
 * Return: Number representing depth or 0 if NULL is passed
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
