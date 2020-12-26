#include "stdio.h"

int main(int argc, char * argv[])
{
	__asm__("xchg %bx, %bx");

	printf("id=1000\n");

	return 0;
}
