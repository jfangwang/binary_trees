#include "binary_trees.h"
/**
 * binary_tree_node - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		return (1 + binary_tree_height(tree->left));
	if (tree->right != NULL)
		return (1 + binary_tree_height(tree->right));
	return (1);
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
	/*return (binary_tree_height(tree->right));*/
}
