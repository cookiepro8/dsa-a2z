#include<stdio.h>
int fun(int *p, int n){
    static int x = 1;
    if(n == 0) return x;

    x = x+*p;
    (*p)++;

    return fun(p, n-1) + x;
}

int main(){
    int a = 2;
    printf("%d", fun(&a, 2));
    return 0;
}

