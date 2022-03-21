#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char s1[5] = "HZZZ";
	        char *ptr;
		
		    ptr = _strcpy(s1, "h\n");
		        printf("%s", s1);
			    printf("%s", ptr);
			        return (0);
}
