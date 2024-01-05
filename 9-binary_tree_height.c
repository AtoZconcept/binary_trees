#include "binary_trees.h"

/**
 * binary_tree_height - pointer to the root node of the tree
 * to measure the height
 *
 * @tree: pointer to the node to check
 *
 * Return: return 1 if node is a height, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height > r_height)
		return (l_height + 1);
	return (r_height + 1);

}
