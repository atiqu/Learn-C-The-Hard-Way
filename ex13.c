#include <stdio.h>
#include <ctype.h>

char lower(char letter);

char lower(char letter){
	if(letter == 'A' || letter == 'E' || letter == 'I' ||
			letter == 'O' || letter == 'U' || letter == 'Y'){
		letter = 'a' + ((int)letter - 'A');
	}
	return letter;
}


int main(int argc, char *argv[])
{
	if(argc < 2){
		printf("ERROR: You need atleast one argument.\n");
		// this is how you abort a program
		return 1;
	}

	int i; int j;
	char letter;
	for(j = 1; j < argc; j++) {
		for(i = 0; letter = argv[j][i], letter != '\0'; i++){
			letter = lower(letter);
			switch(letter) {
				case 'a':
					printf("%d: 'A'\n", i);
					break;
				case 'e':
					printf("%d: 'E'\n", i);
					break;
				case 'i':
					printf("%d: 'I'\n", i);
					break;
				case 'o':
					printf("%d: 'O'\n", i);
					break;
				case 'u':
					printf("%d: 'U'\n", i);
					break;
				case 'y':
					if(i > 2) {
						// it's only sometimes Y
						printf("%d: 'Y'\n", i);
					}
					break;
				default:
					printf("%d: %c is not a vowel\n", i, letter);
			}
		}
	}
			return 0;
	}
