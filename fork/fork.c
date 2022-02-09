#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int ac, char **av){
	size_t pid ;
	for(int i = 0; i < 4; ++i){
		int ch = 65+i;
		if((pid = fork()) == 0){
			printf("pid = %u, print: %c\n", getpid(), ch);
			break;
		}
	}
	while(1){
		int ret = wait(0);
		if(ret == -1)break;
	}
		
	if(pid != 0)printf("parent process %u have killed all child processes\n", getpid());
	return 0;
}
