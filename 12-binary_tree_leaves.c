#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves in a tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (leaves + 1);
	else
		return (leaves);
}
