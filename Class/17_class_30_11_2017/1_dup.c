#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void printbuffer(const char *ptr, int size)
{
    if (NULL != ptr)
    {
        for(int i = 0; i < size; i++)
        {
            printf("%c",*(ptr + i));
        }
        printf("\n");
    }

}


int main(int argc, char *argv[])
{
    int file_fd = open("readme.txt",O_CREAT | O_RDWR);
    int new_dup = dup(file_fd); 
    char buffer[10] = {0};
    char buffer1[10] = {0};
    
   // close(1);
    //close(0);

    if(-1 != file_fd)
    {
        printf("Successful fd[%d]is create dup[%d]\n", file_fd, new_dup);
        ssize_t bytes_read_from_read = read(file_fd,(void *)buffer,10);
        ssize_t bytes_read_from_read_2fd = read(new_dup,(void *)buffer1,10);

        printf("Successful fd[%d] dup[%d]\n", bytes_read_from_read, bytes_read_from_read_2fd);
        printbuffer(buffer, bytes_read_from_read);
        printbuffer(buffer1, bytes_read_from_read_2fd);

        close(file_fd);
        close(new_dup);
    }
    else
    {
        perror("ERROR");
    }

    return 0;
}
