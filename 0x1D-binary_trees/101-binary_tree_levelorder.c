#include "binary_trees.h"

/**
 * binary_tree_height - gets height of binary tree
 * @tree: tree to get height of
 *
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t maxl;
	size_t maxr;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	maxl = binary_tree_height(tree->left);
	maxr = binary_tree_height(tree->right);
	if (maxl > maxr)
		return (maxl + 1);
	else
		return (maxr + 1);
}

/**
 * binary_tree_levelprint - traverse tree using level order and prints (BFS)
 * @tree: tree to traverse
 * @func: function to print values
 * @level: level to be printed
 *
 *Return: void
 */
void binary_tree_levelprint(const binary_tree_t *tree,
			    void (*func)(int), int level)
{
	if (tree == NULL || func == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		binary_tree_levelprint(tree->left, func, (level - 1));
		binary_tree_levelprint(tree->right, func, (level - 1));
	}
}
/**
 * binary_tree_levelorder - calls function to prints tree based on tree height
 * @tree: tree to traverse and print
 * @func: function to print
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, level;

	height = binary_tree_height(tree) + 1;

	for (level = 0; level <= height; level++)
		binary_tree_levelprint(tree, func, level);
	(void)height;
}
