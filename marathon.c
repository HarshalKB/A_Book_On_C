#include <stdio.h>
/* The distance of a marathon in kilometers. */

int main(void)
{
    int miles, yards; // Declaration of variables and their types.
    float kilometers;

    miles = 26;
    yards = 385;
    kilometers = 1.609 * (miles + yards / 1760.0);

    printf("A marathon is %.2f kilometers.\n", kilometers);
    return 0;
}