#include "binary_trees.h"
/**
 * binary_trees_ancestor - Returns the lowest common ancestors of 2 nodes in
 * a binary tree
 *
 * @first: first node
 * @second: second node
 *
 * Return: pointer to the lowest common ancestor or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp1 = first;
	const binary_tree_t *temp2 = second;

	while (temp1 != NULL)
	{
		temp2 = second;
		while (temp2 != NULL)
		{
			if (temp1 == temp2)
				return ((binary_tree_t *)temp1);
			temp2 = temp2->parent;
		}
		temp1 = temp1->parent;
	}
	return (NULL);
}
