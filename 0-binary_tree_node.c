#include "binary_trees.h"


/**
 * binary_tree_node - function that creates a binary tree node
 * @node: node create
 * Return: return node
 * 
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode = malloc(sizeof(*newnode));
    
    if (newnode == NULL)
    {
        fprintf(stderr, "Erreur allocation de memoire.\n");
        exit(EXIT_FAILURE);
    }

    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;

    printf("création de node %d", newnode->n);

    return newnode;
}
