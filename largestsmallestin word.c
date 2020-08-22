#include<stdio.h>
#include<string.h>
int main()  
{     
    char str[] ={0};  
    char substr[100][100]={0}, small[100], large[100];  
    int i = 0, j = 0, k, length;  
      scanf("%[^\n]s",str);
    //Split the str into substr such that each row of array substr represents a word  
    for(k=0; str[k]!='\0'; k++){  
          
        //Here, i represents row and j represents column of two-dimensional array substr   
        if(str[k] != ' ' && str[k] != '\0'){  
            substr[i][j++] = str[k];  
        }  
        else{  
            substr[i][j] = '\0';  
            //Increment row count to store new word  
            i++;  
            //Set column count to 0  
            j = 0;  
        }  
    }  
      
    //Store row count in variable length  
    length = i + 1;  
      
    //Initialize small and large with first word in the str  
    strcpy(small, substr[0]);  
    strcpy(large, substr[0]);  
      
    //Determine smallest and largest word in the str  
    for(k = 0; k < length; k++){  
          
        //If length of small is greater than any word present in the str  
        //Store value of word into small  
        if(strlen(small) > strlen(substr[k])){  
            strcpy(small, substr[k]);  
        }  
        //If length of large is less than any word present in the str  
        //Store value of word into large  
        if(strlen(large) < strlen(substr[k]))  
            strcpy(large, substr[k]);  
    }  
      
    printf("Smallest word: %s\n", small);  
    printf("Largest word: %s", large);  
      
    return 0;  
}  
