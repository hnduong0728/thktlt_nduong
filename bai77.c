#include <stdio.h>
#include <math.h>
#define MAX 100
void nhapmt( double arr[MAX][MAX] , int n ){
	int i , j;
	for ( i = 0 ; i < n ; i++ ){
		for ( j = 0 ; j < n ; j++ ){
			scanf ("%lf", &arr[i][j] );
		}
	}
}
//xuat ma tran
void xuatmt( double arr[MAX][MAX] , int n ){
	int i , j;
	for ( i = 0 ; i < n ; i++ ){
		for ( j = 0 ; j < n ; j++ ){
			printf ("%lf ", arr[i][j] );
		}
		printf ("\n");
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
//chuyen phan tu tren duong cheo phu
void chuyen1( double arr[MAX][MAX] , int n ){
	    int i , j;
	    for ( i = 0 ; i < n ; i++ ){
		    int cot=0;
		    for ( j = 0 ; j < n ; j++ ){
			    if ( arr[i][j] < arr[i][cot] ){
				    cot = j;
			    }
		    }
		    double temp = arr[i][n-1-i];
		    arr[i][n-1-i] = arr[i][cot];
		    arr[i][cot] = temp;
	    }
	    printf ("\nMa tran A sau khi doi:\n");
	    xuatmt ( arr , n );
        tong( arr , n );
}
//
int main(){
    int n ;
    double a[MAX][MAX];
    scanf ("%d", &n);

    nhapmt( a , n );
    xuatmt ( a , n );
    printf ("\n");
    chuyen1( a , n );
    return 0;
}
