#include "binary_trees.h"

/**
 * binary_tree_postorder - travers tre pstrder
 * @tree: pntr t tre
 * @func: pntr t print funct
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
