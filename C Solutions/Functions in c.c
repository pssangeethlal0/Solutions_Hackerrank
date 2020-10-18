#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    if (a > b)
        b = a;
    if (b > c)
        c = b;
    if (c > d)
        d = c;
    return d;
}
