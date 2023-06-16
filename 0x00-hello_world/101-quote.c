#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main- print "and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen(58));
	return (1);
}
