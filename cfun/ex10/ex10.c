#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
        	
	// go through each strign in argv
	/// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	// let's make our own array of strings
	char *provinces[] = {
		"Alberta", "Ontario",
		"Quebec", "Yukon"
	};
	int num_states = 4;
	
	for(i = 0; i < num_states; i++) {
		printf("province %d: %s\n", i, provinces[i]);
	}

	return 0;
}
