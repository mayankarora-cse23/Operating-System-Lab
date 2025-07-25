#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    pid_t pid = fork();
    
    if(pid==0){
        printf("Child Process\n");
    }
    else if(pid>=1){
        printf("Parent Processs\n");
    }
    else{
        printf("Nothing Created");
    }
    return 0;
}
