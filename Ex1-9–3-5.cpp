//operators
#include <stdio.h>
int main(){
    int x = 11, y = 21, z = 5, a = 5, b = 5, c = 5;
    x %= 3;
    y &= 7;
    z |= 3;
    a ^= 3;
    b >>= 3;
    c <<= 3;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}
