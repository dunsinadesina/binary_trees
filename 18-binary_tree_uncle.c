#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node:  a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	grandparent = node->parent->parent;
	if (grandparent->left == node->parent)
		return (grandparent->right);
	if (grandparent->right == node->parent)
		return (grandparent->left);
	return (NULL);
}
