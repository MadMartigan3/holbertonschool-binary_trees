#include "binary_trees.h"
/**
 * binary_tree_is_full - unction that measures the balance
 * factor of a binary tree
 * @tree: node
 * Return: If tree is NULL, return 0 otherwise
 * return result
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->left && tree->right)
	{
		if ((tree->left->left) == NULL || (tree->right->right) == NULL)
		return (1);

		else
		return (0);
	}

	else
	return (0);

}
