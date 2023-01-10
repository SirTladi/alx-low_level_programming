#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name, without having to
 * compile it again
 * You should not remove the path before the name of the program
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(it argc, char *argv[])
{
        printf("%d\n", argv[0]);
        (void)argc;
        return (0);
}

