#include "binary_trees.h"
/**
 * binary_tree_height - function
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_sum = 0;
	int left_sum = 0;

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (tree->right)
		right_sum = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left_sum = 1 + binary_tree_height(tree->left);
	if (left_sum > right_sum)
		return (left_sum);
	return (right_sum);
}
/**
 * binary_tree_balance - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	
}
