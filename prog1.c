#include <stdio.h> // Necessary for printf()

// Necessary for RNG functions like rand() and srand()
#include <time.h> 
#include <stdlib.h>

// Initialize an integer myrand as 0 to prevent whoopsies like undefined behavior
int myrand = 0;

int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.

	// Generate a seed that will help give a psuedorandom number
	srand(time(NULL));

	// Generate a random number between 0 and 10
	myrand = (rand() % 11);

	// Begin print logic	
	if(myrand <= 4) { // Accounts for myrand between 0 and 4
		printf("Eat more beef, kick less cats\n");
	} else if(myrand <= 9) { // Accounts for myrand from 5 to 9
		printf("FRODO LIVES\n");
	} else if(myrand == 10) { // Accounts for when myrand is 10 
		printf("Larn is the best roguelike\n");
	} else { // Accounts for a failsafe case if the rand() doesn't work as intended
		printf("How did you manage to do that? he random number generator didn't work!\n");
	}

	// Tell the user what number was generated
	printf("Your lucky number is %d \n", myrand);
}
