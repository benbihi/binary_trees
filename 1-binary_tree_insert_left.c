#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a new left node
 *
 * @parent: the parent node
 * @value: the node value
 * Return: pointer to the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNoded = binary_tree_node(parent, value);
	if (parent->left == NULL)
	{
		parent->left = newNode;
	}
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}
	return (newNode);
}
