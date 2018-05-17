#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lonelyinteger(int a_size, int* a) {
    // Complete this function
    // Any number XOR with itself equals 0 therefor we can
    // go ahead and XOR everything within the array to find the 
    // unique number.
    int i;
    int offset = 1;
    int unique = 0;
    for(i = 0; i<a_size; i++)
    {
        unique = unique ^ a[i];   
    }
    return unique;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%i",&a[a_i]);
    }
    int result = lonelyinteger(n, a);
    printf("%d\n", result);
    return 0;
}
