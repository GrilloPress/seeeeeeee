#include <stdio.h>

int main (int argc, char *argv[])
{
	int areas[] = {10, 12, 14, 16, 18, 20};
	char name[] = "Andrew";
	char full_name[] = {
		'A', 'n', 'd', 'r', 'e', 'w',
		'R',
		'D', 'u', 'c', 'k', 'w', 'o', 'r', 't', 'h', '\0'
	};
	
	printf("The size of an int is %ld \n", sizeof(int));
	// this is asking what the size of an int is on your computer and varies to 32bit and 64bit architectures
	
	printf("The size of areas int([]) is %ld \n", sizeof(areas));
	
	printf("The size of areas devided by int size is %ld \n", sizeof(areas) / sizeof(int));
	
	printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
	
	printf("The size of a char: %ld\n", sizeof(char));
	
	printf("The size of name (char[]): %ld\n", sizeof(name));
	
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
	
	printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
	
	return 0;
}