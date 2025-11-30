#include <stdio.h>
#include <math.h>
#define MAX 100
// nhap
void nhapmt( double arr[MAX][MAX] , int n ){
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            scanf ("%lf", &arr[i][j] );
        } 
    }
}
// in mang
void inmatran( double arr[MAX][MAX] , int n ){
    for ( int i = 0 ; i < n ; i++ ){
        printf ("\n");
        for ( int j = 0 ; j < n ; j++ ){
            printf ("%.2lf ", arr[i][j] );
        }
    }
}
// tong tren duong cheo phu 
void tong( double arr[MAX][MAX] , int n ){
    double tong=0;
    for ( int i = 0 ; i < n ; i++ ){
        tong += arr[i][n-1-i];
    }
    printf ("%.2lf", tong );
}
//di chuyen phan tu
void dichuyen( double arr[MAX][MAX] , double brr[MAX][MAX] , int n ){
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            brr[i][j] = arr[i][j];
        }
    }
    for ( int i = 0 ; i < n ; i++ ){
        double min = arr[i][0];
        int hang=0;
        for ( int j = 0 ; j < n ; j++ ){
            if ( arr[i][j] < min ){
                min = arr[i][j];
                hang = j;
            }
        }
        // doi phan tu be nhat
        int b_j = n - 1 - i;
        double temp = brr[i][b_j];
        brr[i][b_j] = brr[i][hang];
        brr[i][hang] = temp;
    }
    tong ( brr , n );
}
//
int main(){
    int n ;
    double a[MAX][MAX] , b[MAX][MAX];
    scanf ("%d", &n);

    nhapmt( a , n );
    inmatran ( a , n );
    printf ("\n");
    dichuyen( a , b , n );
    return 0;
}
