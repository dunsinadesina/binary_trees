#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count, l_count, r_count;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count = 1;
	else
		count = 0;
	l_count = binary_tree_nodes(tree->left);
	r_count = binary_tree_nodes(tree->right);

	return (count + l_count + r_count);
}
