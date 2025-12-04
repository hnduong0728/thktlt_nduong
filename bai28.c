#include <stdio.h>
//ucln
long long ucln(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
//bcnn
long long bcnn(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return a / ucln(a, b) * b;
}
//
int main() {
    int n;
    scanf("%d", &n);
    long long a[10005];
    int i;

    for ( i = 0 ; i < n ; i++ ) {
        double x;
        while (1) {
            scanf( "%lf", &x);
            if ( x < 0 ) {
                printf("Nhap lai so: %lf\n", x);
                continue;
            }
            a[i] = x;
            break;
        }
    }

    long long ketqua = a[0];
    long long ketqua1 = a[0];

    for (int i = 1; i < n; i++) {
        ketqua = ucln(ketqua, a[i]);
        ketqua1 = bcnn(ketqua1, a[i]);
    }

    printf("%lld %lld", ketqua, ketqua1);

    return 0;
}
