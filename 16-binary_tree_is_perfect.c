#include "binary_trees.h"
/**
 * binary_tree_is_perfect - goes through tree
 * @tree: a tree node
 * Return: 1 if a node is a leaf, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->left))
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}


/**
 * binary_tree_height - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (1 + binary_tree_height(tree->left));
	return (1 + binary_tree_height(tree->right));
}
