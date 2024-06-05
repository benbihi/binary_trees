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

        if (parent == NULL)
        {
                return (NULL);
        }

        newNode = binary_tree_node(parent, value);
        if (parent->right != NULL)
        {
                newNode->right = parent->right;
                parent->right->parent = newNode;
        }
        parent->right = newNode;
        return (newNode);
}
