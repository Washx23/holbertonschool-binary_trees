#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @value: is the value to store in the new node
 * @parent: is a pointer to the node to insert the left-child in
 * Return: always
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;

	}
	parent->right = newNode;

	return (newNode);
}
