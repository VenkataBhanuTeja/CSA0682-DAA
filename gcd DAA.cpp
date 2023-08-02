#include <stdio.h>  
#include <conio.h>  
int main()  
{     
 
    int num1 = 50, num2 = 60;  
      
    while (num1 != num2)   
    {  
  
        if (num1 > num2)  
            {  
            num1 = num1 - num2;   
            }  

        else  
            {  
                num2 = num2 - num1;  
                }     
                  
    }   
  
    printf( " GCD of two numbers 50 and 60 is %d.", num2);  
}  
