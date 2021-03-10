#include "binary_trees.h"
/**
 * binary_trees_ancestor - a
 * @first: parent
 * @second: parent
 * Return: A pointer to the new node or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_1, depth_2;

	if (!(first) || !(second))
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	depth_1 = binary_tree_depth(first);
	depth_2 = binary_tree_depth(second);
	if (depth_1 > depth_2)
		return (binary_trees_ancestor(first->parent, second));
	if (depth_2 > depth_1)
		return (binary_trees_ancestor(first, second->parent));
	return (binary_trees_ancestor(first->parent, second->parent));
}
/**
 * binary_tree_depth - goes through tree
 * @tree: tree node
 * Return: 1 if a node is a leaf, 0 if not
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
