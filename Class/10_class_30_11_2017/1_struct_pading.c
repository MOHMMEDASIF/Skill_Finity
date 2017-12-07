#include <stdio.h>

int main()
{


//to push the present alignment in the stack
//#pragma pack(push)
    //#pragma pack(1)
    struct test
    {
        int x;
        char y;
        char z;
        short A;
    };


//to pop the stored alignment in the stack
//#pragma pack(pop)

    struct __attribute((__packed__)) test1
    {
        char u;
        int v;
        char w;
    };
       typedef int CHAR;
       typedef struct test name;
       typedef struct test1 name1;

       name a;
       name1 b;

       printf("Size of test %zu\n", sizeof(a));
       printf("Size of test %zu\n", sizeof(CHAR));
       printf("Size of test %zu\n", sizeof(b));
       printf("address of test1.x:%p\n",&a.x );
       printf("address of test1.y:%p\n",&a.y );
       printf("address of test1.z:%p\n",&a.z );
       printf("address of test1.A:%p\n",&a.A );

    return 0;
}
