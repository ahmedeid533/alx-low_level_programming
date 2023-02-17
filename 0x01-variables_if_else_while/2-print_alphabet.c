#include <stdio.h>

/*
 * main - this app print
 * characters from a to z 
 * by ascii code term
 *
 * Return: 0 mean success
 *
 */
int main (void) 
{
   char character;

   for(character = 'a' ; character <= 'z' ; character++) 
   {
      putchar(character);
   }
   return(0);
}
