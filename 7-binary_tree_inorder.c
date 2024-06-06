#include "binary_trees.h"

/**
 * binary_tree_inorder - travers tre inrder
 * @tree: pntr t tre
 * @func: pntr t print funct
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
