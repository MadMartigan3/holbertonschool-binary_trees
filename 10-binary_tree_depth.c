#include "binary_trees.h"

/**
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
    {
        return (0);
    }

    left_height = binary_tree_depth(tree->left);
    right_height = binary_tree_depth(tree->right);

    if (left_height >= right_height)
    {
        return left_height + 1;
    }
    else
        return right_height + 1;
}