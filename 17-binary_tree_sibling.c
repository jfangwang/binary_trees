#include "binary_trees.h"
/**
 * binary_tree_sibling - a
 * @node: parent
 * Return: A pointer to the new node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
