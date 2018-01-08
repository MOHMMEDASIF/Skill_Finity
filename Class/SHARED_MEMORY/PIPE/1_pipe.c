/*
#   Name        : PIPE IPC
#   Date        : 8/1/2018
#   Author      : MOHMMED ASIF.S
#   Description : simple program that demonstrates the working of PIPE IPC
#
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    //variable to hold read and write file descriptor from the pipe
    int l_pipefd[2] = {0};

    //variable to validate the pipe creation operation 
    int pipe_return = pipe(l_pipefd);

    //variable to write the user data onto the write_end of pipe 
    char write_data_buffer[20];// = "my name is asif";

    // variable to read the data from the read_end of the pipe
    char read_data_buffer[20];
    
    //create child_process
    pid_t pid = fork();



    //child process
    if(pid == 0)
    {
        //validate the pipe creation
        if(0 == pipe_return)
        {
            //close write end of pipe
            close(l_pipefd[1]);

            //read data from the read_end of the pipe to "read_data_buffer" char array
            int read_count = read(l_pipefd[0], read_data_buffer, 20);
            printf("Pid of child %zu\n", getpid());

            if(-1 == read_count)
            {
                perror("ERROR");
            }
            else
            {
                printf("string %s,total bytes read: %d\n",read_data_buffer, read_count);
                close(l_pipefd[0]);
            }
        }
        else if(-1 == pipe_return)
        {
            perror("ERROR");
        }
    }
    else if(pid > 0)
    {
        //parent process
        if(0 == pipe_return)
        {
            printf("Pid of parent %zu\n", getpid());
            close(l_pipefd[0]);
            
            printf("Enter the DATA to share:");
            scanf("\n%[^\n]s", write_data_buffer);
 
            int write_count = write(l_pipefd[1], write_data_buffer, 20);

            //sleep(100);
            if(write_count == -1)
            {
                perror("ERROR");
            }
            else
            {
                printf("string %s,total bytes written: %d\n",write_data_buffer, write_count);
                close(l_pipefd[1]);
            }
            //sleep(5);

        }
        else if(-1 == pipe_return)
        {
            perror("ERROR");
        }
    }
    else
    {
        perror("ERROR");
    }

    return 0;
}
