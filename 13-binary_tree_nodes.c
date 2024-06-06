#include "binary_trees.h"

/**
 * binary_tree_nodes - funct count nod wth at least 1 child
 * @tree: pntr t tre or bascas
 * Return: 0 or numbr of nods
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
