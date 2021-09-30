#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4321;
	char initial = 'A'; 
	char first_name[] = "Zach";
	char last_name[] = "Caceres";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
  printf("You have %f super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at an imaginary rate of %f.\n", bugs, bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The universe has %ld bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n", part_of_universe);

  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("You should care %d%%.\n", care_percentage);

  return 0;
}

