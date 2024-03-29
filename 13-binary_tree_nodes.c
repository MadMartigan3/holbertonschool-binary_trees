#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: node
 * Return: If tree is NULL return 0 otherwise size
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (count);
}
