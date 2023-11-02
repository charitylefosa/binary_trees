#include "binary_trees.h"

/**
*array_to_bst - builds Binary Search Tree from an array.
*@array: pointer to first element of array to be converted.
*@size: number of element in array.
*Return: pointer to root node of the created BST
*	NULL on failure.
*/

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree;
	size_t index;

	if (array == NULL)
		return (NULL);
	tree = NULL;
	for (index = 0; index < size; index++)
	{
		bst_insert(&tree, array[index]);
	}
	return (tree);
}
