#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse postorderly
 *
 * @tree: the parent node
 * @func: the function used for each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
