#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: return +1 if node is a height, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t t_depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		t_depth++;
		tree = tree->parent;
	}
	return (t_depth);
}
