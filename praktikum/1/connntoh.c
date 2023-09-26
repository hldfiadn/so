// system.c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
puts("Running command");
char *args[] = {"ps", "-A" , NULL};
execvp(args[0], args);

puts("Done");
return 0;
}
