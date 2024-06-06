#include "binary_trees.h"

/**
 * binary_tree_node - creat a rt or parent nod
 * @parent: pntr to rt
 * @value:  int (data) in th nod
 * Return: Nll if the memo allocatio fail, o nw nod if succss
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
