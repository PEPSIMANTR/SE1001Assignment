#include <stdio.h>

int main() {
	int age = 0; printf("Enter your age: "); scanf("%d", &age);
	if (age >= 18) {
		printf("You are an adult\n");
	} else if (age < 16) {
		printf("You cannot take a moto license.\n");
	} else {
		printf("You are a minor\n");
	}
}