#include<stdio.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h>

int main(){ 
    pid_t pid; char*msg; int n; 
    pid=fork(); 
    if(pid==0) {msg="child";n=8;} 
    else{wait(NULL); msg="parent";n=4;} 
            
    while(n--){puts(msg); sleep(1);} 
    
    if(pid>0) {//parentmenungguchildselesai 
        int status; 
        wait(&status); 
        printf("child status:%d\n",WEXITSTATUS(status)); 
    }
    
    return 0; }