#include "binary_trees.h"
/**
 * binary_tree_height - function that print the height
 * of a tree
 * @tree: pointer to the node
 *
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
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

/**
 * binary_tree_is_perfect - function that check if binary
 * tree is perfect
 * @tree: pointer to the node
 * Return: 1 always success or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}

		if (tree->left && tree->right && binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
