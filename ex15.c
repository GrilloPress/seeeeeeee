#include <stdio.h>

int main(int argc, char *argv[])
{
	
	// an array. Loops through ages and names.
	int ages[] = {3, 25, 28};
	char *names[] = {"Alfred", "Lydia", "Andrew"};
	
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	for(i = 0; i < count; i++){
		printf("%s, %d \n", names[i], ages[i]);
	}
	
	return 0;
}