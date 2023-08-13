#include <stdio.h>

int main(void){
	
	int i;	
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	
	i = 0;
	
	while(i<26)
	{
		putchar(alphabet[i]);
		i++;
	}

	putchar('\n');

	return(0);	
}
