#include "holberton.h"
int palindrome(char *s, int first, int last);

/**
 * palindrome - Entry point
 * @s: d
 * @first: n
 * @last: n
 *
 * Return: Always 0 (Success)
 */
int palindrome(char *s, int first, int last)
{
if (s[first] != s[last])
{
return (0);
}
else if (s[first] == s[last] && first < last)
{
return (palindrome(s, (first + 1), (last - 1)));
}
return (1);
}

/**
 * is_palindrome - Entry point
 * @s: d
 *
 *
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
int last, first;
first = 0;

for (last = 0; s[last] != '\0'; last++)
{
}
return (palindrome(s, first, last - 1));
}
