#include <stdio.h>
#include "tinystdio.h"



void my_printf(const char* msg,  ...)
{

	char buffer[100];
	va_list args;
	va_start (args, msg);

	tfp_vsprintf(buffer, msg, args);

	printf("%s", buffer);
	va_end (args);

}
int main(void)
{

	printf("%09.3f\n", 3.12);
	my_printf("%09.3f\n", 3.12);
	printf("%09.3f\n", 233.5123);
	my_printf("%09.3f\n", 233.5123);
	return 0;
}
