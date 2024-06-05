#include "binary_trees.h"

/**
 * binary_tree_delete - delete a tree
 *
 * @tree: the parent node of the to be deleted tree
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
