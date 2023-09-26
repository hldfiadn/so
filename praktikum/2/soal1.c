#include<stdio.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h>

int value = 5;

int main() {
    //int value = 5;
    pid_t pid;
    pid = fork();

    if (pid = 0) {
        value += 15;
        return 0;
    } else if (pid >0) {
        wait(NULL);
        printf("%d", value);
        return 0;
    }
}