#include "binary_trees.h"

/**
 * binary_tree_leaves - pointer to the node
 * of the tree to count the number of leaves
 * @tree: pointer to the leaf node
 *
 * Return: return leave, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	count = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (count);
}
