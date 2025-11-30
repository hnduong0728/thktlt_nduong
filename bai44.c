#include <stdio.h>

int main(){
    int colors[] = {31,32,33,34,35,36,91,92,93};
    //31 do
    //32 xanh la 
    //33 vàng
    //34 xanh dương
    //35 tím
    //36 xanh ngoc
    //91 do nhat
    //92 xanh la nhat
    //93 vang nhat
    int colorsdem = sizeof(colors)/sizeof(colors[0]);
    int i , j;
    for ( i = 1 ; i <= 10 ; i++ ){
        printf ("|");
        for ( j = 2 ; j <= 10 ; j++ ){
            int to = colors[(j-2)%colorsdem];
            printf ("\033[%dm", to);
            printf ("%dx%-3d= %-4d |", j, i, i*j);
        }
            printf ("\n");
        }
    return 0;
}
