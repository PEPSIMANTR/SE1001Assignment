#include <stdio.h>

int64_t factFor(int64_t x){
	if(x<0) return 0;
	else if(!x) return 1;

	for (size_t i = x-1; i; i--) {
		x*=i;
	} return x;
}

int64_t factWhile(int64_t x){
	if(x<0) return 0;
	else if(!x) return 1;
	
	int64_t c = x-1;
	while (c) {
		x*=c; c--;
	} return x;
}

int64_t factRecursive(int64_t x){
	if(x<2) return 1;
	return x*factRecursive(x-1);
}

int64_t fiboFor(int64_t x){
	int first=1,second=1,result=0;
	for (int i = 2; i<x; i++) {
		result=first+second;
		first=second; second=result;
	} return result;
}

int64_t fiboWhile(int64_t x){
	int first=1,second=1,result=0; x-=2;
	while(x) {
		result=first+second;
		first=second; second=result; x--;
	} return result;
}

int64_t fiboRecursive(int64_t x){
	if(x<3) return 1;
	return fiboRecursive(x-1)+fiboRecursive(x-2);
}

int main(int argc, const char * argv[]) {
	printf("%llu\n",fiboRecursive(7));
	
	return 0;
}
