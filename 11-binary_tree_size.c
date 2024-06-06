#include "binary_trees.h"

/**
 * binary_tree_size - clcult th siz of tre
 * @tree: pntr t tre
 * Return: 0 if fail , otherwise the siz of th tre
 * Description: ths funct count nds rcursvly until ht the NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	}
}
