#include <stdio.h>
#include <math.h>
//phan tich nhan tu
int nhantu( long long n ){
    int dem2=0 , dem5=0 , i=2;
    for ( i = 2 ; i <= sqrt(n) ; i++ ){
        while ( n%i == 0 ){
            if ( i == 2 ) dem2++;
            if ( i == 5 ) dem5++;
            n /= i;
        }
    }
    if ( dem2 >= dem5 ) return dem5;
    else return dem2;
}
//
int main(){
    long long n;
    scanf ("%lld", &n);
    long long tich=1 , ketqua;

    while ( n-- ){
        long long x;
        scanf ("%lld", &x);
        tich *= x;
        ketqua = nhantu( tich );
    }
    printf ("%lld", ketqua );
    return 0;
}
