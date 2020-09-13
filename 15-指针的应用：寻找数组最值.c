#include <stdio.h>

void maxmin(int a[], int len, int *max, int *min);

int main(int argc, char const *argv[])
{
    int a[] = {23, 43, 56, 74, 34, 12, 15, 51, 98, 78, 96, 57};
    int min, max;
    maxmin(a, sizeof(a)/sizeof(a[0]), &max, &min);
    printf("max: %d, min: %d\n", max, min);

    return 0;
}

void maxmin(int a[], int len, int *max, int *min)
{
    int i;
    *max = *min = a[0];
    for(i=0; i<len; i++){
        if(a[i]>*max){
            *max = a[i];
        }
        else if(a[i]<*min){
            *min = a[i];
        }
    }
}