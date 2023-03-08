#include "main.h"
/**
 * root_finder - Helper function that recursively finds
 *		the natural square root of an inputted number.
 *
 * @root: current root to check.
 * @n: a number.
 *
 * Return: The root of number if it has one otherwise -1.
 */
int root_finder(int root, int n)
{
	if (root * root == n)
		return (root);
	else if (root >= n / 2)
		return (-1);
	return (root_finder(root + 1, n));
}
/**
* _sqrt_recursion - a function that returns the natural
*			square root of a number.
*
* @n: a number.
*
* Return: returns the natural square root of a number.
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (root_finder(root, n));
}
