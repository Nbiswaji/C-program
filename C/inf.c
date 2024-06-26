#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    int x = 10; // Declare and initialize the shared variable x

    pid_t child_pid = fork(); // Create a child process using fork()

    if (child_pid == -1) {
        // Error: Fork failed
        printf("Process creation unsuccessful.\n");
        exit(EXIT_FAILURE); // Terminate the process
    } else if (child_pid == 0) {
        // Child process
        printf("Child process\n");
        printf("Child process ID: %d\n", getpid());
        printf("Parent process ID: %d\n", getppid());
        printf("Value of x: %d\n", x);
    } else {
        // Parent process
        printf("Parent process\n");
        printf("Parent process ID: %d\n", getpid());
        printf("Child process ID: %d\n", child_pid);
        printf("Value of x: %d\n", x);
    }

    return 0;
}
