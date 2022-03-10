#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  * op_add - function that add two integers.
  * @a: ...
  * @b:  ..
  * Return: ....
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - function that substrac two integers.
  * @a: ...
  * @b:  ..
  * Return: ....
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - function that multiply two integers.
  * @a: ...
  * @b:  ..
  * Return: ....
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - function that divide two integers.
  * @a: ...
  * @b:  ..
  * Return: ....
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - function that returns the module betwee two integers.
  * @a: ...
  * @b:  ..
  * Return: ....
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

