#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if ((node->left && node->right) || node->left || node->right)
    {
        return (0);
    }
    else
    {
        return (1);
    }

    if (node == NULL)
    {
        return (0);
    }
}
