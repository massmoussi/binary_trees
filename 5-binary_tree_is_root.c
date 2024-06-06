#include "binary_trees.h"

/**
 * binary_tree_is_root - chck if nod is a rt
 * @node: pntr t th nod t chck
 * Return: 1 if it Tru otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
