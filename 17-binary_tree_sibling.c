#include "binary_trees.h"

/**
 * binary_tree_sibling - Function thats finds the
 * sibling of a node
 * @node: is pointer to the node to find sibling
 * Return: NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if ((node->parent->right) != node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
