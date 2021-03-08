#include "binary_trees.h"
/**
 * binary_tree_node - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (1);
}
