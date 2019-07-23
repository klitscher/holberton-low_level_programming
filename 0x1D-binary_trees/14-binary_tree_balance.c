#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: tree to get the balance of
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL)
		return (-1);
	if (tree->right == NULL)
		return (1);

	balance = binary_tree_balance(tree->left->left) - binary_tree_balance(
		tree->right->right) + 1;
	return (balance);
}
