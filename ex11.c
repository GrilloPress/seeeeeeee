#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int i = 0;
	while(i < argc){
		printf("arg: %d wordage: %s \n", i, argv[i]);
		i++;
	}
	
	char *monsters[] = {
		"Firedude", "Waterdude", "bloodguy", "icegarbbler"
	};
	
	int num_monsters = 4;
	i = 0;
	while(i < num_monsters){
		printf("We have: %s \n", monsters[i]);
		i++;
	}
	
	return 0;
}