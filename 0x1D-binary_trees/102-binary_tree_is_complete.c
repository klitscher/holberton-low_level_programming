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
int binary_tree_levelprint(const binary_tree_t *tree, size_t level,
			   size_t height)
{
	int fl;
	int tr;

	if (tree == NULL)
		return (0);

	if (level == 1 /*height*/)
	{
		if(tree->parent != NULL)
		{
			if (tree->parent->left == NULL && tree->parent->right != NULL)
			{
				fl = 0;
			}
			else
			{
				fl = 1;
			}
			tr = 1;
		}
	}
	else if (level > 1)
	{
		binary_tree_levelprint(tree->left, (level - 1), height);
		binary_tree_levelprint(tree->right, (level - 1), height);
	}
	return (fl && tr);
}
/**
 * binary_tree_levelorder - calls function to prints tree based on tree height
 * @tree: tree to traverse and print
 * @func: function to print
 *
 * Return: void
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t height, level;
	int complete;

	height = binary_tree_height(tree) + 1;

	for (level = 0; level <= height; level++)
	{
		complete = binary_tree_levelprint(tree, level, height);
		printf("%d\n", complete);
	}
	if (complete == 1)
		return (1);
	else
		return (0);
}
