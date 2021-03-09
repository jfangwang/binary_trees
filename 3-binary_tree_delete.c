#include "binary_trees.h"
/**
 * binary_tree_delete - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
