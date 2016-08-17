#include<stdio.h>

int main(int argc, char* argv[]) {
	
	char full_name[] = {'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w' };
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Zed";
	// char full_name[] = {'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0' };
	
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas: %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", (sizeof(areas) / sizeof(int)));
	printf("The first area is %d, the second area is %d\n", areas[10], areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name is: %ld\n", sizeof(name));
	printf("The number of chars in name: %ld\n", (sizeof(name) / sizeof(char)));

	printf("The size of full_name: %ld\n", sizeof(full_name));
	printf("The number of chars in full_name: %ld\n", (sizeof(full_name) / sizeof(char)));

	printf("Name=\"%s\", and full_name=\"%s\"\n", name, full_name);

	return 0;
}