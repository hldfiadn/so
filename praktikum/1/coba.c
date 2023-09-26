// system.c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// system.c
int main()
{
    puts("Running command");

    char *args[] = {"ps", "--forest", NULL};
    execvp(args[0], args);

    puts("Done");
    return 0;
}