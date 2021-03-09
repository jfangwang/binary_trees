#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through tree 
 * @node: a node
 * Return: 1 if a node is a leaf, 0 if not
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
