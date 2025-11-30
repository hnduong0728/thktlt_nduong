#include <stdio.h>
#include <math.h>
// tinh ban kinh r
void bankinhnoitiep( double a , double b ){
    double c = sqrt( a*a - b*b );
    double r = b*c/(a+b+c);
    printf ("Ban kinh noi tiep tam giac vuong la: %.2lf", r);
}
//
int main(){
    double a , b;
    printf ("Nhap canh huyen tam giac: ");
    scanf ("%lf", &a);
    printf ("Nhap canh goc vuong tam giac: ");
    scanf ("%lf", &b);
    if ( a < b ) printf ("Khong ton tai tam giac thoa de");
    else bankinhnoitiep( a , b );
    return 0;
}
