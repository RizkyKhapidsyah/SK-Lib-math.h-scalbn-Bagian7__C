#include <math.h>
#include <stdio.h>
#include <conio.h>

int main() {
	double x = 9.8, y;
	int p = 5;

	y = scalbn(x, p);
	printf("%2.1f times FLT_RADIX to the power of %d is %2.1f\n", x, p, y);

	_getch();
	return 0;
}