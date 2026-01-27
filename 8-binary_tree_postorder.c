#include "binary_trees.h"

/**
 * binary_tree_postorder - Preforms post-order traversal on a tree
 * @tree: Root node of the tree
 * @func: Function to call for each node's value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
