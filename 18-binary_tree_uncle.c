#include "binary_trees.h"
/**
 * binary_tree_uncle - goes through tree
 * @node: a node
 * Return: 1 if a node is a leaf, 0 if not
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *gparent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	parent = node->parent;
	gparent = node->parent->parent;
	if (parent == gparent->left)
		return (gparent->right);
	return (gparent->left);
}
