#include <stdio.h>

int reverse(int no);
int main()
{
    int no = 15;
    reverse(no);

    return 0;
}

int reverse(int no)
{
    if(no != 0)
    {
           printf("%X, ", no--);
    }
    else
    {
        return 0;
    }

           reverse(--no);

}
