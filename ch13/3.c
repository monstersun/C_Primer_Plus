#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int main(void)
{
    FILE * fp;
    char words[MAX];
    if((fp = fopen("words", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"words\" file.");
        exit(1);
    }
    puts("Enter words to add to the file: press the enter");
    puts("key at the begining of a line to terminate.");
    while(gets(words) != NULL && words[0] != '\0')
        fprintf(fp, "%s", words);
    puts("File contents:");
    rewind(fp);
    while(fscanf(fp, "%s", words) == 1)
        puts(words);
    if(fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");
    return 0;
}