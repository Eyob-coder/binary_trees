#include "binary_trees.h"

/**
 * binary_tree node - creates a binary tree node.
 * @parent: a pointer to teh parent of tfeh node to create.
 * @value: the value to put in teh new node.
 * Return: if an error occurs -NULL.
 * 		Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new  = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n =value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
