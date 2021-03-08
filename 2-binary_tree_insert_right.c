#include "binary_trees.h"
/**
 * binary_tree_insert_right - a
 * @parent: parent
 * @value: Value
 * Return: A pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->n = parent->right->n;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
