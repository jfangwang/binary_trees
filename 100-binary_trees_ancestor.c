#include "binary_trees.h"
/**
 * binary_trees_ancestor - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *left;
	binary_tree_t *right;
	binary_tree_t *temp;
	left = first;
	right = second;
	temp = right;

	while (left->parent != NULL)
	{
		right = temp;
		while (right->parent != NULL)
		{
			if (right->n == left->n)
				return (right);
			right = right->parent;
		}
	}
	return (left);
}
/*
			A
		*B		C
	D	E			*G
*/
