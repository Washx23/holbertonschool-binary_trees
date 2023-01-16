#include "binary_trees.h"
/**
 * binary_tree_height -  function that checks
 * if a binary tree is perfect
 * @tree: is pointer to the root node of
 * the tree to measure the height.
 * Return: height of the tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left == right)
		return (1);
	return (0);
}

/**
 * binary_tree_height - Function
 * @tree: tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}
