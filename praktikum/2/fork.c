#include<stdio.h> 
#include<unistd.h> 
#include<sys/types.h> 

int main() {
    pid_t pid; char *msg; int n; //processid 
    
    pid = fork();
    if (pid==0) {
        msg = "child";
        n = 4; 
    }else {
        msg = "parent";
        n = 8;
    }

    while(n--) {puts(msg); sleep(1);}
    return 0; 
}