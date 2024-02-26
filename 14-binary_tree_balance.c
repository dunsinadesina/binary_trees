#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 *
 * Return: 1 or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height, balance_factor;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_balance(tree->left);
	r_height = binary_tree_balance(tree->right);
	balance_factor = l_height - r_height;

	return (balance_factor);
}
