#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char arr[1000001] = { 0 };
    char arr1[1000001] = { 0 };
    char arr2[1000001] = { 0 };
    char arr3[1000001] = { 0 };
    scanf("%s %s %s %s", arr, arr1, arr2, arr3);
    char* add = strcat(arr, arr1);
    char* add1 = strcat(arr2, arr3);
    //long long a =atoll(arr);
    //long long b =atoll(arr2);
    //atoll stall 먼차이냐
    printf("%lld", atoll(arr) + atoll(arr2));
    return 0;
}