#include <stdio.h>

int main( int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 5.2;
	
	printf("Your programs have this many bugs: %d, and a rate of %f bugs a min \n", bugs, bug_rate);
	
	long universe_of_bugs = 1L * 5000L * 2L;
	printf("We have like loads of bugs in the world and stuff, at least %ld many! \n", universe_of_bugs);
	
	double expected_bugs = bugs * bug_rate;
	printf("you will likely write %f many bugs today! \n", expected_bugs);
	
	double part_of_universe = expected_bugs / universe_of_bugs;
	printf("Your portion of the universe's bug quote is: %e \n", part_of_universe);
	
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("I give about %d%% effort or flucks \n", care_percentage);
	
	return 0;
}