//Program to find gcd

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h> 
#include <stdlib.h> 

int gcd(int n1,int n2){
    int i,a;
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            a = i;
    }
    return a;
}


int main() {
    
    int  q1,q2,ans;
    int s1;
     // To read input
     printf("Enter first positive integer: ");
     char value1[1000] = ""; 

     // To store numeric value of input if a 
     // number (float or integer) 
     double temp1; 

     // To store integral value of input 
     int n1; 

     // To store string value of input 
     char str1[1000] = ""; 

     // Precision for integer checking 
     double val1 = 1e-12; 

     fgets(value1, 100, stdin); // Read input 

     // Check for integers. 
     if (sscanf(value1, "%lf", &temp1) == 1) 
     { 
          n1 = (int)temp1; // typecast to int. 
          if (fabs(temp1 - n1) / temp1 > val1) 
               s1=1;       //for float
          else
               s1=2;       //for int
     }    // Check for string 
     else if (sscanf(value1, "%s", str1) == 1)  
          s1=3;     //for string
     else // No match.    
          s1=4;      // for nothing
          
    int s2;
     // To read input
     printf("Enter second positive integer: ");
     char value2[1000] = ""; 

     // To store numeric value of input if a 
     // number (float or integer) 
     double temp2; 

     // To store integral value of input 
     int n2; 

     // To store string value of input 
     char str2[1000] = ""; 

     // Precision for integer checking 
     double val2 = 1e-12; 

     fgets(value2, 100, stdin); // Read input 

     // Check for integers. 
     if (sscanf(value2, "%lf", &temp2) == 1) 
     { 
          n2 = (int)temp2; // typecast to int. 
          if (fabs(temp2 - n2) / temp2 > val2) 
               s2=1;       //for float
          else
               s2=2;       //for int
     }    // Check for string 
     else if (sscanf(value2, "%s", str2) == 1)  
          s2=3;     //for string
     else // No match.    
          s2=4;      // for nothing
     
     //printf("%d",s);   
    q1=atoi(value1);
    q2=atoi(value2);
    if(s1==2&&q1>0&&s2==2&&q2>0){
            ans=gcd(q1,q2);
            printf("%d",ans);
    }
    else{
        printf("Error!!");
        return -1;
    }
    return 0;
}


