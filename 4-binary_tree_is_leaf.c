#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a
 * @parent: parent
 * @value: Value
 * Return: A pointer to the new node or NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}