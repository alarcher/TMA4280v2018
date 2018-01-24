
#include <stdio.h>

int main(int argc, char**argv)
{
	char   i0;
	printf("sizeof(i0) : %u\n", sizeof(i0));
	short  i1;
	printf("sizeof(i1) : %u\n", sizeof(i1));
	int    i2;
	printf("sizeof(i2) : %u\n", sizeof(i2));
        long   i3;
	printf("sizeof(i3) : %u\n", sizeof(i3));
        float  r0;
	printf("sizeof(r0) : %u\n", sizeof(r0));
        double r1;
	printf("sizeof(r1) : %u\n", sizeof(r1));

	return 0;
}
