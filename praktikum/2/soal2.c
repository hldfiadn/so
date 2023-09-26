#include<stdio.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h>

int main() {
    pid_t pid, pid1;

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork Failed");
        return 1;
    } else if (pid == 0) {
        pid1 = getpid();
        printf(" A %d\n", pid);
        printf(" B %d\n", pid1);
    } else {
        pid1 = getpid();
        printf(" C %d\n", pid);
        printf(" D %d\n", pid1);
        wait(NULL);
    }
}