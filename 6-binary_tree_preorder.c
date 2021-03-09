#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through tree
 * @tree: the tree
 * @func: function pointer
 * Return: 1 if a node is a leaf, 0 if not
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
