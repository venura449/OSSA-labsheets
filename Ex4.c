#include <stdio.h>
#include <unistd.h>

int main(){

	printf("Parent Process Started\n");
	int ret;

	ret = fork();
	if(ret==0){
		printf("I am the child Process !\n");
		printf("My Id is : %d\n",getpid());
		printf("My Parent id is : %d\n",getppid());
		printf("Return value :%d\n",ret);
		
	}
	else{
		printf("I am the Parent process\n");
		printf("My id is : %d\n",getpid());
		printf("Return Vslue : %d\n",ret);
	}

	sleep(10);

	return 0;

}
