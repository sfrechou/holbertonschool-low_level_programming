# 0x1A. C - Hash tables
## Resources
Read or watch:
* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
* [Hash function](https://en.wikipedia.org/wiki/Hash_function)
* [Hash table](https://en.wikipedia.org/wiki/Hash_table)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Requirements
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don’t forget to push your header file
* All your header files should be include guarded

## More Info
### Data Structures
Please use these data structures for this project:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
## Tasks
0. >>> ht = {} mandatory
Write a function that creates a hash table.

* Prototype: hash_table_t *hash_table_create(unsigned long int size);
    - where size is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return NULL
```
julien@ubuntu:~/0x1A. Hash tables$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-hash_table_create.c -o a
julien@ubuntu:~/0x1A. Hash tables$ ./a 
0x238a010
julien@ubuntu:~/0x1A. Hash tables$ valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x1A. Hash tables$
```