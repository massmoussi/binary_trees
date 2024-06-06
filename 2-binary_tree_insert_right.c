#include "binary_trees.h"

/**
 * binary_tree_insert_right - insrt nod t the rght of a tree
 * @parent: pntr to th tree
 * @value:  data nod
 * Return: nw nod or NULL if fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
