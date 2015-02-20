#include <stdio.h>

int main(int argc, char *argv[])
{
	
	// this loop will print out the extra arguments sent into the program when running it... so if I use ./ex10 Hello There it will print those out too
	int i = 0;
	for(i = 1; i < argc; i++){
		printf("arg %d: %s \n", i, argv[i] );
	}
	
	char *states[] = {
		"Happy", "Sad", "Mindful", "Distractfu..cake"
	};
	
	int num_states = 4;
	for (i = 0; i < num_states; i++){
		printf("states of Andrew %d: %s \n", i, states[i]);
	}
	
	return 0;

}