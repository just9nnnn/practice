#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int arr[] = { 77, 125666, 1, 855, 93, 6, 10000, 18, 777, 1000 };
    int m = 0;
    int n = 1;
    int max = arr[m];
    while (m <= 9 && n <= 9)
    {
        if (arr[m] > arr[n])
        {
            n++;
        }
        else
        {
            max = arr[n];
            m = n;
            n = m + 1;
        }
    }
    printf("最大的数是:>%d", max);
    return 0;
}