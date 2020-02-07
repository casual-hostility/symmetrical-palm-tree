//structs are public by default

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