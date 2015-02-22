#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int i = 0;
	
	if (argc == 1){
		
		printf("You only supplied one argument! \n To get a different result, you should write something like: ./ex12 hello there! \n");
		
	} else if (argc > 1 && argc < 4 ){
		printf("Here's your arguments: \n");
		
		for(i = 0; i <argc; i++){
			printf("\t %s ", argv[i]);
		}
		printf("\n");
		
		
	} else {
		printf("Way too many arguments, try under 4! \n");
	}
	
	return 0;
}

// This is a classic if, else if else loop which sets parameteres of below, within or other - implicit - a number of values.