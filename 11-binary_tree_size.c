#include "binary_trees.h"
/**
 * binary_tree_node - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	}
}
