#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a new right node
 *
 * @parent: the parent node
 * @value: the node value
 * Return: pointer to the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
        if (newNode == NULL)
        {
                return (NULL);
        }
        newNode->n = value;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = parent;

	if (parent == NULL)
        {
                return (NULL);
        }
        if (parent->right != NULL)
        {
                newNode->right = parent->right;
                parent->right->parent = newNode;
        }
        parent->right = newNode;
        return (newNode);
}
