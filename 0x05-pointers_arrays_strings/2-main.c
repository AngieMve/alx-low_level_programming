#include "main.h"
#include <stdio.h>
/**
 * main - check the code
  * _strcpy - Copy a string
  *
  * Return: the pointer to dest
  */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
