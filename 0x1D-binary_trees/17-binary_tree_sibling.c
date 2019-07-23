#include "binary_trees.h"

/**
 * binary_tree_sibling - finding the sibling of node
 * @node: pointer to node to find sibling
 * Return: Sibling node
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else if (node->parent->left == node)
		return (node->parent->right);
	else
		return (NULL);

}
