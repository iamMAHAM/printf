#include <stdio.h>
#include <stdlib.h>
#include "../main.h"


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    int a = _printf("%u", 0);
    _putchar('\n');
    int b = _printf("%S", "\n");
    _putchar('\n');
    int c = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
    int c1 = printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
    _putchar('\n');
    int d = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
    _putchar('\n');
    int e = _printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
    int f = _putchar('\n');
    printf("a = %d\nb = %d\nc = %d & r = %d\nd = %d\ne = %d\nf = %d\n", a, b, c, c1, d, e, f);
    return (0);
}
