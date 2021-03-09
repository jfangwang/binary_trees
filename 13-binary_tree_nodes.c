#include "binary_trees.h"
/**
 * binary_tree_nodes - goes through tree
 * @tree: a node
 * Return: 1 if a node is a leaf, 0 if not
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (!(tree->left) && !(tree->right)))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
