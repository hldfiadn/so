#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void foo(int sig) {
    printf("got signal %d\n", sig); // print signum
    signal(SIGINT, SIG_DFL);        // back to default
}

int main()
{
    pid_t child = fork();
    if (child == 0) {
        while (1) {
            puts("halo bangg");
            sleep(1);
        }
    } else {
        sleep(4);
        kill(child, SIGSTOP);  
        sleep(3);
        kill(child, SIGCONT);
        sleep(2);
        kill(child, SIGKILL);
    }
    return 0;
}