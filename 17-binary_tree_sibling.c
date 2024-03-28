#include "binary_trees.h"
/**
 * binary_tree_sibling - returns thd sibling of a node
 *
 * @node: input node
 *
 * Return: Sibling of node if it exists or NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}
	else if (node->parent->right == node)
	{
		if (node->parent->left)
			return (node->parent->left);
		else
			return (NULL);
	}
	return (NULL);
}
