#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor. If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_h = 0, right_h = 0;

if (tree == NULL)
return (0);
if (tree->left)
left_h = (int)binary_tree_height(tree->left) + 1;
    
if (tree->right)
right_h = (int)binary_tree_height(tree->right) + 1;

return (left_h - right_h);
}
