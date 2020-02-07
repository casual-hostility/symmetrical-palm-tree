#include <cstdio>

int absolute_value(int x) {
	int value = 0;
	if (x >= 0) {
		value = x;
	}
	else {
		value = (x *-1);
	}
	return value;
}

int main() {
	int my_num = -10;
	printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));

	return 0;

}