#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree for balance
 * @tree: Pointer to the node to measure the height
 *
 * Return: The height. If tree is NULL, return 0
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_height_b(tree->left);
	r = binary_tree_height_b(tree->right);

	if (l > r)
		return (l + 1);
	return (r + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor. If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);

	/* Cast to int to allow for negative balance factors */
	left = (int)binary_tree_height_b(tree->left);
	right = (int)binary_tree_height_b(tree->right);

	return (left - right);
}
