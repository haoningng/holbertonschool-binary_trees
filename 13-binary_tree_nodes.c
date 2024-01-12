#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with >= 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes in a tree, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);
	nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (nodes + 1);
	else
		return (nodes);
}
