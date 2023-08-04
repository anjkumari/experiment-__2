#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int number(int min,int max)   //function for random numeric value
{
    return rand()%(max-min+1)+min;
}
 char hexadecimal()
     {
    char hexadecimal[] ="abcdef0123456789";     //function for alphabet value
    int data =number(0,sizeof(hexadecimal))-2;
     
     return hexadecimal[data];
 }
 int main() //starting point for compiler
 {
    srand (time(NULL));
        char Arr[51][11];//declaration of areay for 50 alphanumeric
       
        for (int i = 0; i < 51; i++) 
        { 
            int length =number(3, 10); //starting and end range//function call
            for(int j=0;j<length;j++)
               {
                  Arr[i][j]=hexadecimal();//function call
              
               }
        
               
                 Arr[i][length]= '\0';//null  at the end 
        }

        printf(" fifty random alphanumeric are  =\n");
        for (int i=0;i<51;i++)
        {
            printf(" %s\n",Arr[i]);
        }
         return 0;

        

 }
