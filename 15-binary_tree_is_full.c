#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, otherwise 0 or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int balance;
	int left_branch;
	int right_branch;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_branch = binary_tree_is_full(tree->left);
	right_branch = binary_tree_is_full(tree->right);

	balance = left_branch + right_branch;
	if (balance == 2)
		return (1);
	else
		return (0);
}
