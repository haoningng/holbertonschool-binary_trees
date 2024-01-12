#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or null on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_left;
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = value;
	parent_left = parent->left;
	if (parent_left == NULL)
	{
		new->left = NULL;
	}
	else
	{
		new->left = parent_left;
		parent_left->parent = new;
	}
	new->right = NULL;
	new->parent = parent;
	parent->left = new;

	return (new);
}
