/*
- classes are user defined types that contain data and functions
- each element of a class is called a member
- methods are member functions
	they create an explicit connection among a class, its data members, and some code
	add a function to a class definition to define a method
*/

/*struct ClockOfTheLongNow {
	void add_year() { //method declaration
		year++; //increment the member year within the method
	}
	int year; //member
};
*/

//using the class to keep track of a year

#include <cstdio>

struct ClockOfTheLongNow {
	void add_year() {
		year++;
	}
	int year;
};

int main() {
	ClockOfTheLongNow clock; //declaring the instance clock
	clock.year = 2017; //setting the year to 2017
	clock.add_year(); //calling the add_year method on clock
	printf("Year: %d\n", clock.year); //printing the value of clock.year
	clock.add_year();
	printf("Year: %d\n", clock.year);
}

//a program using the ClockOfTheLongNow struct