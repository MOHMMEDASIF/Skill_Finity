#include <stdio.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

typedef struct
{
    char  name[35];
    int age;

}student_t;

int main(int argc, char *argv[])
{
    int shmid = shmget(23213, sizeof(student_t), IPC_CREAT | 0644); 
        while(1)
        {
   // if(shmid != -1)
    //{
//        printf("ALLOCATED %d bytes of memory with shmid[%d]\n", sizeof(student_t), shmid);
        
        student_t *l_ptr = (student_t *)shmat(shmid, NULL, 0);
        
        if((void *)-1 != (void *)l_ptr)
        {
  //          strcpy(l_ptr -> name, "skillfinity");
    //        l_ptr -> age = 30;
            printf("name[%s] age[%d]\n", l_ptr -> name, l_ptr -> age);
        }

        sleep(1);
    }
    //}
//    else
  //  {
    //    perror("ERROR");
   // }

    return 0;
}
