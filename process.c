#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2]; // Creating a pipe for inter-process communication

    if (pipe(fd) < 0) {
        printf("Pipe creation failed");
        return -1;
    }

    int child_pid = fork(); // Create a child process

    if (child_pid < 0) {
        printf("Fork failed");
    }

    if (child_pid == 0) { // Child process
        // ... (Read from pipe, perform child tasks)
    } else { // Parent process
        // ... (Write to pipe, perform parent tasks)
    }

    return 0;
