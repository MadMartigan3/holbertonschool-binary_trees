#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: node
 * Return: If tree is NULL, return 0 otherwise
 *  return result
*/
int binary_tree_balance(const binary_tree_t *tree)
{

	size_t left_height, right_height;
	int result;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	result = ((left_height) + 1) - ((right_height) + 1);

	return (result);
}

/**
 * binary_tree_height - function that print the height
 * of a tree
 * @tree: pointer to the node
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
	{
		return (left_height + 1);
	}
	else
		return (right_height + 1);
}
