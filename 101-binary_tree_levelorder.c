#include "binary_trees.h"
/**
 * binary_tree_levelorder - a
 * @tree: parent
 * @func: parent
 * Return: A pointer to the new node or NULL
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0;
	size_t height = 0;

	if (tree == NULL)
		return;

	func(tree->n);
	/* Will get the height of tree */
	height = binary_tree_height(tree);

	for (level = 0; level <= height; level++)
	{
		go_through_tree(tree, level);
	}

}

/**
 * go_through_tree - go through the tree and print if height is the same
 * @tree: parent
 * @height: height
 * Return: A pointer to the new node or NULL
 */
void go_through_tree(const binary_tree_t *tree, size_t height)
{
	size_t h = binary_tree_depth(tree);

	if (tree == NULL)
		return;
	if (h == height)
		printf("%d\n", tree->n);
	if (tree->left)
		go_through_tree(tree->left, height);
	if (tree->right)
		go_through_tree(tree->right, height);
}
/**
 * binary_tree_height - a
 * @tree: parent
 * Return: A pointer to the new node or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_sum = 0;
	int left_sum = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		right_sum = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left_sum = 1 + binary_tree_height(tree->left);
	if (left_sum > right_sum)
		return (left_sum);
	return (right_sum);
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
