#include <stdio.h>
int main()
{
	char s[] = "How big is it?";
	char *t = s;
	printf("%i\n", sizeof(s));
	printf("%i\n", sizeof(t));
	printf("%i\n", sizeof(s[0]));
	printf("%s\n", &s);
	printf("%p\n", &t);
	printf("%p\n", t);
	printf("%p\n", &s[0]);
	*s=t;
}