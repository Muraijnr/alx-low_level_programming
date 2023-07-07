#include "main.h"
#include "stdio.h"
#include "ctype.h"
#include "string.h"
/**
 * _atoi - converst char to int
 * @s: string
 * Return: c
 */
int _atoi(char *s)
{
int a, b, c, len, d, digit;

a = 0;
b = 0;
c = 0;
len = 0;
d = 0;
digit = 0;

while (s[len] != '\0')
len++;
while (a < len && d == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (b % 2)
digit = -digit;
c = c * 10 + digit;
d = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
d = 0;
}
a++;
}
if (d == 0)
return (0);
return (c);
}

/**
 * check_num - checks if there are digits in the string
 * @str: string
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints sum of numbers in the arguments
 * @argc: arguement count
 * @argv: string
 * Return: 0 or error
 */
int main(int argc, char *argv[])
{
	int count;
	int toint;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			toint = _atoi(argv[count]);
			sum = sum + toint;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
