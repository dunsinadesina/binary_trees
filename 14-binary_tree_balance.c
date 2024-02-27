#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 *
 * Return: 1 or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height, r_height;

		l_height = 0, r_height = 0;
		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l_height > r_height) ? l_height : r_height);
	}
	return (0);
}
