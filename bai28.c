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
            if ( x < 0 || x != (long long)x ) {
                printf("Nhap lai so: %lf\n", x);
                continue;
            }
            a[i] = (long long)x;
            break;
        }
    }

    int all_zero = 1;
    for ( i = 0 ; i < n ; i++ ) {
        if (a[i] != 0) {
            all_zero = 0;
            break;
        }
    }

    if ( all_zero ) {
        printf("1 ");
        printf("Khong ton tai bcnn");
        return 0;
    }

    long long ketqua = a[0];
    long long ketqua1 = a[0];

    for ( i = 1; i < n; i++) {
        ketqua = ucln(ketqua, a[i]);
        ketqua1 = bcnn(ketqua1, a[i]);
    }

    printf("%lld %lld", ketqua, ketqua1);

    return 0;
}
