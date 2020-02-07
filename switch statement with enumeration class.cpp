//using a switch statement with an enumeration class

#include <cstdio>

enum class Race { //declares enumeration type Race
	Dinan,
	Teklan,
	Ivyn,
	Moiran,
	Camite,
	Julian,
	Aidan
};

int main() {
	Race race = Race::Dinan; //uses enumeration type above to initialize race to Dinan (hard coded)

	switch (race) {
	case Race::Dinan: {
		printf("You work hard.");
	}	break; //terminates the switch statement
	case Race::Teklan: {
		printf("You are very strong.");
	}	break;
	case Race::Ivyn: {
		printf("You are a great leader.");
	}	break;
	case Race::Moiran: {
		printf("My, how versatile you are!");
	}	break;
	case Race::Camite: {
		printf("You're incredibly helpful.");
	}	break;
	case Race::Julian: {
		printf("Anything you want!");
	} 	break;
	case Race::Aidan: {
		printf("What an enigma.");
	}	break;
	default: {
		printf("Error: Unknown Race.");
	}
	}
}