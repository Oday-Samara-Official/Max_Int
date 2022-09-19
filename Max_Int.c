#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a > b && a > c && a >d){//a
            printf("%d",a);
    }
        if (b > a && b > c && b >d){//b
            printf("%d",b);
    }
        if (c > b && c > a && c >d){//c
            printf("%d",c);
    }
        if (d > b && d > c && d >a){//d
            printf("%d",d);
    }


    return 0;
}
