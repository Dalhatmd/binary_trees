#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node at the left of a binary tree
 * below the parent
 *
 * Description: if there is a node at the left, The new node replaces it and
 *the old value becomes the left of the new node
 *
 * @parent: pointer to parent
 * @value: Value to be inserted
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->left)
	{
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
