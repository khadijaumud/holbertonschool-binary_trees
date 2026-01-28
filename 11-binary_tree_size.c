#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree. If tree is NULL, return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t right_size, left_size;

if (tree == NULL)
{
return (0);
}

right_size = binary_tree_size(tree->right);
left_size = binary_tree_size(tree->left);

return (1 + left_size + right_size);
}
