#include "main.h"

/**
 * main - Determine if a number is positive/negative/zero.
(* 0 : is the number to be checked
 * Return: Always 0 (Success)
 */
void postitive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
return;
}
