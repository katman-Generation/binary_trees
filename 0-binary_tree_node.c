#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent  node of thee node to be created
 * @value: value to put in the new node
 *
 * Return: pointer to the newly created note
 *      NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
