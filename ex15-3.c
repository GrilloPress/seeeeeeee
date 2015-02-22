#include <stdio.h>

int main(int argc, char *argv[])
{
	
	// a pointer version
	int ages[] = {3, 25, 28};
	char *names[] = {"Alfred", "Lydia", "Andrew"};
	
	// define 
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	// defines the pointers
	int *cur_ages = ages;
	char **cur_names = names;
	
	for(i = 0; i < count; i++) {
		
		printf("%s: %d \n", cur_names[i], cur_ages[i]);
		
	}
	
	return 0;
}