#include <stdio.h>
#include <math.h>
// ucln
long long ucln( long long a , long long b ){
    if ( a == b ) return a;
    if ( a > b ) return ucln( a-b , b );
    else return ucln (a , b-a );
}
// bcnn
long long bcnn( long long a , long long b ){
    return a*b/ucln(a,b);
}
//
int main(){
    long long n;
    scanf ("%lld", &n );
    long long a[100005];
    long long i;

    for ( i = 0 ; i < n ; i++ ) scanf ("%d", &a[i] );
    long long ketqua=a[0] , ketqua1=a[0];
    for ( i = 1 ; i < n ; i++ ){
        ketqua = ucln( ketqua , a[i] );
        ketqua1 = bcnn( ketqua1 , a[i] );
    }
    printf ("%lld %lld", ketqua, ketqua1);
    return 0;
}

