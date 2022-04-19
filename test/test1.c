#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

int main(void)
{
	int ab1, ab2;

	ab1 = printf("Salut %c tu as %d et %r percent %% tu t'appelle %s\n et", 'H', 29, "Souleymane");
	ab2 = _printf("Salut %c tu as %d et %r percent %% tu t'appelle %s\n et %b", 'H', 29, "Souleymane", 98);
	printf("standard printf : %d\n", ab1);
	printf("our printf : %d\n", ab2);
	return (0);
}
