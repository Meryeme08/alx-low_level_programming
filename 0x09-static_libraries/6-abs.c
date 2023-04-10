#ifndef MAIN_H
#define MAIN_H

int _abs(int n);

#endif /* MAIN_H */


/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}
