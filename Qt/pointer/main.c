#include <stdio.h>

typedef struct divrem_str1
{
    int quotient;
    int remainder;
}divrem_str;

int sum(int *value1, int *value2)
{
    return *value1 + *value2;
}

void sum1(int *value1, int *value2)
{
    *value1 = *value1 + *value2;
}
divrem_str divide(int f_divident, int f_divisor)
{
    divrem_str l_ret_st = {0,0};
    l_ret_st.quotient = f_divident / f_divisor;
    l_ret_st.remainder = f_divident % f_divisor;
    return l_ret_st;
}

int main()
{
    divrem_str l_divrem;
    int l_value = 10, l_value2 = 20;
    int l_sum = sum(&l_value, &l_value2);

    sum1(&l_value, &l_value2);

    l_divrem = divide(100, 3);


    printf("sum: %d \t l_value: %d\n", l_sum, l_value);
    printf("Quotient %d, Remainder %d\n", l_divrem.quotient, l_divrem.remainder);



    return 0;
}
