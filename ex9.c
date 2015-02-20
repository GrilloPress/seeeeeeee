#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int numbers[4] = {0};
	char name[4] = {'a'};
	
	printf("numbers: %d %d %d %d\n",numbers[0], numbers[1], numbers[2], numbers[3]);
	// prints 0 0 0 0 because the array has the length of 4 but all are assigned 0
	
	printf("name equals %c %c %c %c \n", name[0], name[1], name[2], name[3] );
	// this will print a a a a because the array has the length of 4, but only a assigned to those slots

	printf("name: %s \n", name);
	// this only prints a which is the first in the array
	
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	// this overites the numbers in the array, meaning anything after this point. Not like JS where they shoot up
	
	name[0] = 'A';
	name[1] = 'N';
	name[2] = 'D';
	name[3] = '\0';
	// this prints out A N D and then stops because \0 is a nul byte which makes a program stop
	
	printf("numbers: %d %d %d %d\n",numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name equals %c %c %c %c \n", name[0], name[1], name[2], name[3] );
	
	printf("name: %s \n", name);
	// this now spells out AND as the nul byte indicates where to stop rather than the program using the first char as the place to stop
	
	char *another = "Andrew";
	
	printf("another equals %s \n", another);
	
	printf("First and sixth letters are: %c %c \n", another[0], another[5]);
	
	return 0;
}