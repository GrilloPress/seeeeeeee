#include <stdio.h>

int main(int argc, char *argv[])
{
	char result[] = "";
	printf("Write your name \n");
	scanf("%s", result);
	printf("Hello, %s! \n", result);
	
	return 0;
}