#include<stdio.h>
/* 
read a character
while(character is not EOF)
	output the character just read
	read a character.
*/

main()
{
	int c;
	
	c=getchar();
	while(c != EOF) {
	putchar(c);
	c=getchar();

	}

}
