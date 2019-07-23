#include "binary_trees.h"

/**
 * depth - depth of a node in the tree
 * @tree: tree to get the depth of a node from
 *
 * Return: depth of the left most node
 */
int depth(const binary_tree_t *tree)
{
	const binary_tree_t *ptr = tree;
	int d = 0;

	while (ptr != NULL)
	{
		ptr = ptr->left;
		d++;
	}
	return (d);
}
/**
 * binary_tree_is_perfect_driver - check if binary tree is perfect (workhorse)
 * @tree: tree to check
 * @d: depth of the left-most node in tree
 *
 * Return: 1 for perfect, 0 for imperfect
 */
int binary_tree_is_perfect_driver(const binary_tree_t *tree, int d)
{
	const binary_tree_t *ptr;
	int level;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		ptr = tree;
		level = 0;
		while (ptr->parent != NULL)
		{
			ptr = ptr->parent;
			level++;
		}
		if (d == level + 1)
		{
			return (1);
		}
		return (0);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_perfect_driver(tree->left, d) &&
			binary_tree_is_perfect_driver(tree->right, d));
	}
	return (0);

}

/**
 * binary_tree_is_perfect - check if tree is peferct or not (not-workhorse)
 * @tree: tree to check
 *
 * Return: 1 if perfect, 0 if not;
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = 0;

	d = depth(tree);
	return (binary_tree_is_perfect_driver(tree, d));
}
