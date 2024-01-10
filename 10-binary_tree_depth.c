#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 *@tree: node
 * Return: if tree is NULL return 0 otherwise return depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)

{
	size_t left_depth = 1;

	if (tree->parent == NULL)
		return (0);

	left_depth += binary_tree_depth(tree->parent);

	return (left_depth);
}
