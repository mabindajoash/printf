#include "main.h"
#include <limits.h>
int main(void)
{
	int num = 176;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	printf("%d\n", num);
	_printf("%o\n", ui);
	_printf("%x\n", num);
	_printf("%X\n", num);
	return (0);
}
