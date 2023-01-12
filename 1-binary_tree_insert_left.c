#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @value: is the value to store in the new node
 * @parent: is a pointer to the node to insert the left-child in
 * Return: always
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode =  malloc(sizeof(binary_tree_t));
	if (!newNode)
	{
		return (NULL);
	}
	if (!parent)
	{
		free(newNode);
		return (NULL);
	}
	newNode->parent = parent;
	newNode->n = value;
	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (parent->left);
}
