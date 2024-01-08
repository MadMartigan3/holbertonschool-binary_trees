#include "binary_trees.h"

/**
 * 
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *leftnode = malloc(sizeof(*leftnode));

    if (parent == NULL)
    {
        return (NULL);
    }

    leftnode->n = value;
    leftnode->parent = parent;
    leftnode->left = NULL;
    leftnode->right = NULL;

    leftnode->left = parent->left;

    if (parent->left)
    {
        parent->left->parent = leftnode;
    }
    parent->left = leftnode;

    return (leftnode);
}
