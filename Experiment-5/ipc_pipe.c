#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd[2];
    char write_msg[] = "Hello from Parent Process";
    char read_msg[100];

    if (pipe(fd) == -1)
    {
        printf("Pipe creation failed.\n");
        return 1;
    }

    if (fork() == 0)
    {
        // Child Process
        close(fd[1]); // Close write end
        read(fd[0], read_msg, sizeof(read_msg));
        printf("Child Process received: %s\n", read_msg);
        close(fd[0]);
    }
    else
    {
        // Parent Process
        close(fd[0]); // Close read end
        write(fd[1], write_msg, strlen(write_msg) + 1);
        printf("Parent Process sent: %s\n", write_msg);
        close(fd[1]);
    }

    return 0;
}
