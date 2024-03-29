#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 *
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: pointer to the delete node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
