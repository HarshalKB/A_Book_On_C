#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int c, i, sum, letters[26];
    FILE *ifp, *ofp;

    if (argc != 3)
    {
        printf("\n%s%s%s\n\n%s\n%s\n\n", "Usage: ", argv[0], " infile outfile", "The letters in infile will be counted.", "The results will be written in the outfile.");
        exit(1);
    }
    ifp = fopen(argv[1], "r");
    ofp = fopen(argv[2], "w");
    for (i = 0; i < 26; ++i)
    {
        letters[i] = 0;
    }
    while ((c = getc(ifp)) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            ++letters[c - 'a'];
        }
    }
    sum = 0;
    for (i = 0; i < 26; ++i)
    {
        if (i % 6 == 0)
        {
            putc('\n', ofp);
        }
        sum += letters[i];
        fprintf(ofp, "%c:%5d     ", 'a' + i, letters[i]);
    }
    printf("%d\n", sum);
    putc('\n', ofp);
    return 0;
}