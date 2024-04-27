#include <stdio.h>

int main(void)
{
    char c1, c2, c3;
    int i;
    float f;
    double y;

    printf("\n%s\n%s\n", "Input three characters,", "an integer, a float and a double");
    scanf("%c%c%c%d%f%lf", &c1, &c2, &c3, &i, &f, &y);
    printf("\nHere is the data you typed in:\n");
    printf("%3c%3c%3c%5d%17e%17e\n\n", c1, c2, c3, i, f, y);
    return 0;
}

/* scanf() reads blankspace while reading a string but ignores it while reading numbers */