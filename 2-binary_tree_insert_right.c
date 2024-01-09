#include "binary_trees.h"

/**
 * 
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *rightnode = malloc(sizeof(*rightnode));

    if (parent == NULL)
    {
        return (NULL);
    }

    rightnode->n = value;
    rightnode->parent = parent;
    rightnode->left = NULL;
    rightnode->right = NULL;

    rightnode->right = parent->right;

    if (parent->right)
    {
        parent->right->parent = rightnode;
    }
    parent->right = rightnode;

    return (rightnode);
}