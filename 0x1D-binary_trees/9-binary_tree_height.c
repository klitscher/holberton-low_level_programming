#include "binary_trees.h"

/**
 * binary_tree_height - find the height of a tree
 * @tree: tree to find the height of
 *
 * Return: Height from end point
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int maxl;
	int maxr;

	/*Error checking if they pass us a NULL tree*/
	if (tree == NULL)
		return (0);

	/*Actual base case to check against*/
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	maxl = binary_tree_height(tree->left);
	maxr = binary_tree_height(tree->right);
	if (maxl > maxr)
		return (maxl + 1);
	else
		return (maxr + 1);
}
