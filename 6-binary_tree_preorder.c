#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses a binary tree using binary tree preorder
 *
 * @tree: pointer to root of tree
 * @func: function that all values will be passed to
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
