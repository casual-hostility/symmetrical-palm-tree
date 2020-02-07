#include <cstdio>

int sum(int x, int y) {
	int value = x + y;

	return value;
}

int main() {
	int my_num = 5;
	int my_num2 = 2;
	
	printf("My number is %d.\n", sum(my_num, my_num2));

	return 0;
}