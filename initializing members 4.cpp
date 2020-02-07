//a program that attempts to set the year to 2018, fails, sets year to 2019, increments the year then prints its final value

#include <cstdio>

struct ClockOfTheLongNow {
	void add_year() {
		year++;
	}
	bool set_year(int new_year) { //sets year
		if (new_year < 2019) return false; //won't allow year to be less than 2019
		year = new_year;
		return true;
	}
	int get_year() { //gets year
		return year;
	}
	
private: //access control label to prevent consumers from accessing year, can now only be accessed from within ClockOfTheLongNow method
	int year;
};

int main() {
	ClockOfTheLongNow clock; //declare clock
	if (!clock.set_year(2018)) { //will fail; 2018 < 2019
		clock.set_year(2019);
	}
	clock.add_year(); //increment the year once
	printf("Year: %d", clock.get_year()); //print value of year
}