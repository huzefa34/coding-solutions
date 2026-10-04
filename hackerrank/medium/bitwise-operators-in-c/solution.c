#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
}

int main() {
    int n, k;
    int max_and = 0, max_or = 0, max_xor = 0;
    
    scanf("%d %d", &n, &k);
    
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++) 
        {
            int value_and = i & j;            
            int value_or = i | j;            
            int value_xor = i ^ j;
        
             if (value_and < k && value_and > max_and)                
                 max_and = value_and;            
             if (value_or < k && value_or > max_or)                
                 max_or = value_or;            
             if (value_xor < k && value_xor > max_xor)                
                 max_xor = value_xor;
         }
    }    
        
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);   
        
    return 0;
}
