#include "binary_trees.h"
/**
 * binary_tree_is_full - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	/* Base case for leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* return 1 if there are 2  child */
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
