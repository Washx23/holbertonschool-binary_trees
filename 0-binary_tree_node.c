#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @value: is the value to put in the new node
 * @parent:  is a pointer to the parent node of the node to create
 * Return: newNode
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode =  malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
		return (NULL);
	}

	if (!value)
	{
		free(newNode);
		return (NULL);
	}
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
