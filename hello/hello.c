#include <stdio.h>

#define printf(MSG) {printf("sample: "); printf(MSG);}

int main(int argc, char* argv[])
{
	printf("Hello world!\n");
	return 0;
}
