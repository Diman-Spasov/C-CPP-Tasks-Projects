#include <stdio.h>  
   
int main() {  
    int inputArray[100], countArray[100];  
    int elementCount, i, j, count;  
   
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers\n", elementCount);
     
    for(i = 0; i < elementCount; i++)
    {
        scanf("%d", &inputArray[i]);
        countArray[i] = -1;
    }
    for(i = 0; i < elementCount; i++) 
    {  
        count = 1;  
        for(j = i+1; j < elementCount; j++) 
        {  
            if(inputArray[i]==inputArray[j]) 
            {
                countArray[j] = 0;    
                count++;
            }  
        }  
        if(countArray[i]!=0) 
        {  
            countArray[i] = count;  
        }  
    }    
    for(i = 0; i<elementCount; i++) 
    {  
        if(countArray[i] != 0) 
        {  
            printf("Element %d : Count %d\n", inputArray[i], countArray[i]);  
        }  
    }   
    return 0;  
}
