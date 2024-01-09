#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node->parent)
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
