/* Two ways to declare arrays:
//int my_array[100];  This declares an array of 100 int objects

//int array[] = [1, 2, 3, 4}];  This is a shortcut for initializing an array with values, the length can be inferred from the number of elements

*/

#include <cstdio>

int main() {
	int arr[] = { 1, 2, 3, 4 };
	printf("The third element is %d./n", arr[2]);
	arr[2] = 100;
}

