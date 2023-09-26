#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// Berapa kali X dicetak, gambarkan pohon prosesnya!

int main()
{
    pid_t pid; char *msg; int n;

    pid = fork();
    if (pid == 0) { msg = "child";  n = 5;}
             else { msg = "parent"; n = 3;}

    while (n--) { puts(msg); sleep(1); }

    return 0;
}