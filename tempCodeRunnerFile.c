#include <stdio.h>

int main() {
    int id ;
    float hrs ;
    float Salary ;
    
    printf( "Enter your Employee ID: =" ) ;
    scanf( "%d", &id ) ;
    printf( "Enter your working hrs: =" ) ;
    scanf( "%f", &hrs ) ;
    printf( "Enter your salary amount/hr: =" ) ;
    scanf( "%f", &Salary ) ;
    
    printf( "Expected output: \n" ) ;
    printf( "Employee ID = %d \n", id ) ;
    printf( "Salary = U$ %0.2f \n", hrs * Salary ) ;

    return 0 ;
}//end main function