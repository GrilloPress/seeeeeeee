#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 99;
	float power = 2.5456f;
	double super_power = 5949585.5893;
	char initial = 'A';
	char first_name[] = "Andrew";
	char last_name[] = "Duckworth";
	
	printf("And i would walk %d miles...\n", distance);
	printf("wowzers, the wattage is %f !\n", power);
	printf("i have now written %f semi-colons \n", super_power);
	printf("the alphabet starts with %c \n", initial);
	printf("hell is other robots called %s \n", first_name);
	printf("sheeeeeeeit %s \n", last_name);
	printf("some things I need to say: %s %d %s \n", first_name, distance, last_name);
	
	return 0;
}