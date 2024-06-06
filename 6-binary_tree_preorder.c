#include "binary_trees.h"

/**
 * binary_tree_preorder - travers tr prerder
 * @tree: pntr t tre
 * @func: pntr t printing funct
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
