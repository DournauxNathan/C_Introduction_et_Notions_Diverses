#include <stdio.h>
void temp_test_color(){
    printf("\033[0;31m■■■"); 
    printf("\033[1;31m■■■");
    printf("\033[0;32m■■■");
    printf("\033[1;32m■■■");
    printf("\033[0;33m■■■");
    printf("\033[1;33m■■■");
    printf("\033[0;34m■■■");
    printf("\033[1;34m■■■");
    printf("\033[0;35m■■■");
    printf("\033[1;35m■■■");
    printf("\033[0;33m■■■");
    printf("\033[1;36m■■■");
}
void main(){
    temp_test_color();   
}