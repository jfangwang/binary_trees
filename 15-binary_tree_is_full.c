#include "binary_trees.h"
/**
 * binary_tree_node - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
size_t binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || (!(tree->left) && !(tree->right)))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
