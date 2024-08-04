#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Hello, I am the Parent Process. My Process ID is: %d\n", getpid());
    fork();
    printf("Hello again, I am a Process. My Process ID is: %d\n and my Parent Process ID is: %d\n", getpid(), getppid());
    return 0;
}

