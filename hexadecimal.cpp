#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int number(int min,int max)
{
    return rand()%(max-min+1)+min;
}
 char hexadecimal()
 {
    char hexadecimal[] ="abcdef0123456789";
    int index =number(0,sizeof(hexadecimal))-2;
     
     return hexadecimal[index];
 }
 int main()
 {
    srand (time(NULL));
       char Arr[5][11];//declaration of areay
       
       for (int i = 0; i < 5; i++) 
        { 
            int length =number(3, 10); //starting and end range
            for(int j=0;j<length;j++)
               {
                    Arr[i][j]=hexadecimal();
               }
        
               
                 Arr[i][length]= '\0';//null  at the end 
        }

        printf("random alphanumeric =\n");
        for (int i=0;i<5;i++)
        {
            printf("%s\n",Arr[i]);
        }
         return 0;

        

 }
