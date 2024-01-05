#include "binary_trees.h"

/**
 * binary_tree_nodes - pointer to the node
 * of the tree to count the number of nodes
 * @tree: pointer to the node
 *
 * Return: return leave, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	count = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (count);
}
