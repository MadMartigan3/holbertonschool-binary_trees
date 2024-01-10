#include "binary_trees.h"
/**
 * 
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
    return 0;

    if (tree->left && tree->right)
    {
        if ((tree->left->left) == NULL || (tree->right->right) == NULL)
        return 1;

        else
        return 0;
    }

    
    else 
    return 0;

    
}
