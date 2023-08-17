#include <stdio.h>
#include <stdlib.h>
int Soma(int x, int y);

int main()
{
	int x = 12, y = 12, Result;
	Result = Soma(x, y);
	printf("Result: %d \n", Result);
}

int Soma(int x, int y){
	int Result = x + y;
	return Result;
}

