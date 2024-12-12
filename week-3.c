#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
	//int a = 5;
	//printf("%d ", a);
	//int b = a++;
	//printf("%d ", b);
	//int c = ++a;
	//printf("%d ", c);
	//for (int i = 0; i <= 10; i++) {
	//	printf("%d\n", i);
	//}
	int i = 0;
	while (i < 10) {
		if (i & 2 == 1) printf("%d\n", i);
		else break;
		i++;
	}
}