#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or null on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_right;
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
	parent_right = parent->right;
	if (parent_right == NULL)
	{
		new->right = NULL;
	}
	else
	{
		new->right = parent_right;
		parent_right->parent = new;
	}
	new->left = NULL;
	new->parent = parent;
	parent->right = new;

	return (new);
}
