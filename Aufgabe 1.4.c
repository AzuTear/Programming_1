#include <stdio.h>

int main (void)
{
	printf("A\tB\tA||B\n");
	printf("true\tfalse\t%s\n",1||0?"true":"false");
	printf("false\ttrue\t%s\n",0||1?"true":"false");
	printf("true\ttrue\t%s\n",1||1?"true":"false");
	printf("false\tfalse\t%s",0||0?"true":"false");
	return 0;
}


