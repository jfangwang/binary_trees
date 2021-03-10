#include "binary_trees.h"
/**
 * binary_tree_height - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int sum = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return sum;
	if (tree->right)
		sum = 1 + binary_tree_height(tree->right);
	if (tree->left)
		sum = 1 + binary_tree_height(tree->left);
	return sum;
}
