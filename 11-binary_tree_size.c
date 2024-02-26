#include "binary_trees.h"
/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the size
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
		return (0);
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (1 + l_size + r_size);
}
