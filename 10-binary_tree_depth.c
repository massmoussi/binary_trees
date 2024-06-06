#include "binary_trees.h"

/**
 * binary_tree_depth - calucl th dpth of tre
 * @tree: pntr t tre
 * Return: 0 if fail otherwis incrment
 * Description: trverse t th tp from th base nod
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + binary_tree_depth(tree->parent));
	}
}
