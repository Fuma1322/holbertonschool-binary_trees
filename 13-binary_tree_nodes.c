#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts tha nodes with at least 1 child
* @tree: pointer to the root of the tree
* Return: the number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
return (0);
if (tree->left != NULL || tree->right != NULL)
count += 1;
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) +
count);
}
