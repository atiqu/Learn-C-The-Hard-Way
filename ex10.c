#include <stdio.h>

int main(int argc, char *argv[])
{

	int i = 0;
	int j = 0;
	// go through the string argv
	// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i , argv[i]);
	}

	// lets make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington","Texa"
	};

	int num_states = 4;

	for(i = 0, j = 127; i < num_states; i++, j+=10) { 
		printf("state %d: %s\n", i, states[i]);
		printf("the value of j is %d\n", j);
	}

	return 0;



}
