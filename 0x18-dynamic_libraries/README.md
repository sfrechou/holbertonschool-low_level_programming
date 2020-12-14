0. A library is not a luxury but one of the necessities of life mandatory
Create the dynamic library libholberton.so containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your holberton.h file in your repository, containing at least all the prototypes of the above functions.

1. Without libraries what have we? We have no past and no future mandatory
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

2. Either write something worth reading or do something worth writing mandatory
Write a blog post describing the differences between static and dynamic libraries. It should cover:

Why using libraries in general
How do they work
How to create them (Linux only)
How to use them (Linux only)
What are the differences between static and dynamic libraries
What are the advantages and drawbacks of each of them
Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on LinkedIn.

When done, please add all urls below (blog post, LinkedIn post, etc.)

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings

3. Let's call C functions from Python #advanced
I know, you’re missing C when coding in Python. So let’s fix that!

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.

4. Code injection: Win the Giga Millions! #advanced

I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation: