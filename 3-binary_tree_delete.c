#include "binary_trees.h"

/**
 * binary_tree_delete - freing tres
 * @tree: pntr to tre
 * Description: freeing Cod traverse the lst recursivly & freing mmory
 * until the tre becom NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
