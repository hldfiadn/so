//zombie.c 
#include<stdio.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h>

int main() { 
    pid_t pid;
    char *msg;
    int n; 
    
    pid = fork(); 
    if(pid==0){msg="child"; n=3;} 
    else{msg="parent";n=10;} 
    
    while(n--){ puts(msg); sleep(1);} 
    return 0; 
    
}