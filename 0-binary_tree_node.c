#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: parent of the node
 * @value: value to be stored at node
 *
 * Return: address of new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
