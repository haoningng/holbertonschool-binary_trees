#include "binary_trees.h"

bool is_children(const binary_tree_t *ancestor, const binary_tree_t *target);

/**
 * binary_trees_ancestor - finds the lowest common ancestor of a node
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node,
 * or NULL if parent is NULL or no ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (first == NULL || second == NULL || first->parent == NULL
			|| second->parent == NULL)
		return (NULL);
	while (first != NULL)
	{
		if (is_children(first, second))
		{
			return ((binary_tree_t *)first);
		}
		first = first->parent;
	}
	return (NULL);
}

/**
 * is_children - check if the target node is a children of the ancestor node
 * @ancestor: ancestor node
 * @target: target node to be checked
 *
 * Return: true if target is a children of ancestor, false otherwise
 */
bool is_children(const binary_tree_t *ancestor, const binary_tree_t *target)
{
	const binary_tree_t *cur;

	cur = target;
	if (target->parent == ancestor)
		return true;
	while (cur != NULL)
	{
		if (cur->parent == ancestor)
			return (true);
		cur = cur->parent;
	}
	return (false);
}

