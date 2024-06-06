#include "binary_trees.h"


/**
 * binary_tree_is_full - chck if th tree is full
 * @tree: pntr t tree
 * Return: 1 if it full , 0 if not
 * Description: recusively trvrs bth lft & rght sbtree & chck thm both
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
