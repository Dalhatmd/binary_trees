#include "binary_trees.h"
/**
 * binary_tree_postorder - traversese a binary tree using the postorder method
 *
 * @tree: pointer to root of tree
 * @func: function that all data will be passed to
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
