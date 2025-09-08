#include <stdio.h>

int main() {
	char name[50];
	int age;

	printf("Enter your name: ");
	scanf("%s", name);   // reads single word name

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("\n--- User Information ---\n");
	printf("Name:\t%s\n", name);
	printf("Age:\t%d years\n", age);

	return 0;
}
