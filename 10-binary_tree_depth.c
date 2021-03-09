#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through tree 
 * @node: a node
 * Return: 1 if a node is a leaf, 0 if not
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
