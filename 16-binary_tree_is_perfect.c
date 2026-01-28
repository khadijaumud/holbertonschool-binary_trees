#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return ((l > r ? l : r) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
	{
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		{
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
		}
	}
	return (0);
}
