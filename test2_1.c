//Program to find whether given number is prime or not.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h> 
#include <stdlib.h> 

void check(int n){
    if (n%2 == 0)
            printf("%d is an even number.", n);
    else
            printf("%d is an odd number.", n);
    return;
}


int main() {
    
    int  i, flag = 0,q;
    int s;
     // To read input
     printf("Enter a positive integer: ");
     char value[1000] = ""; 

     // To store numeric value of input if a 
     // number (float or integer) 
     double temp; 

     // To store integral value of input 
     int n; 

     // To store string value of input 
     char str[1000] = ""; 

     // Precision for integer checking 
     double val = 1e-12; 

     fgets(value, 100, stdin); // Read input 

     // Check for integers. 
     if (sscanf(value, "%lf", &temp) == 1) 
     { 
          n = (int)temp; // typecast to int. 
          if (fabs(temp - n) / temp > val) 
               s=1;       //for float
          else
               s=2;       //for int
     }    // Check for string 
     else if (sscanf(value, "%s", str) == 1)  
          s=3;     //for string
     else // No match.    
          s=4;      // for nothing
     
     //printf("%d",s);   
    q=atoi(value);
    if(s==2&&q>0){
            check(q);
    }
    else{
        printf("Error!!");
        return -1;
    }
    return 0;
}


