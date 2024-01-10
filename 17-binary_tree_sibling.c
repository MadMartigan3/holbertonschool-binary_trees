#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL); // Le nœud ou son parent n'existe pas
    }

    if (node->parent->left == node)
    {
        return (node->parent->right); // Le frère est à droite
    }
    else if (node->parent->right == node)
    {
        return (node->parent->left); // Le frère est à gauche
    }

    return (NULL); // Si le nœud n'a pas de frère
}
