#include "binary_trees.h"


/**
 * binary_tree_node - function that creates a binary tree node
 * @node: node create
 * Return: return node
 * 
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(*node));
    if (node == NULL)
    {
        printf(stderr, "Erreur allocation de memoire");
        exit(EXIT_FAILURE);
    }

    node->n = value;
    node->left = NULL;
    node->right = NULL;
    node->parent = NULL;

    printf(" création de node %d", node->n);

    return(node);
}
