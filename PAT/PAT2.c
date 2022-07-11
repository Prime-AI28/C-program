#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, mn, mx;
    int *arr;
    
    scanf("%d", &n);
    if(n <= 0) {
        printf("invalid");
        return 0;
    }
    
    arr = (int*)calloc(n, sizeof(int));
    mn = 1000000;
    mx = -1000000;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        mn = (mn < arr[i])?mn:arr[i];
        mx = (mx < arr[i])?arr[i]:mx;
    }
    
    if(mn <= 0) {
        printf("invalid");
        return 0;
    }
    
    printf("%d\n%d",mx,mn);
    return 0;
}