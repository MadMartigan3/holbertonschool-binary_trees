#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 *  of another node
 * @parent: parent of node
 * @value: value of node
 * Return: return node insered
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
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
