#include <stdio.h>//header file
#include<stdlib.h>
#include<time.h>


int decimal(char base) {
    if ('0' <= base && base<= '9')//decimal no 0 to 9
     {
        return base - '0';
    } else if ('A' <= base && base <= 'Z')
     {
        return base - 'A' + 10;             //uppercase and lowercase are from A-Z
    } else if ('a' <= base && base <= 'z') 
    {
        return base - 'a' + 10;
    } else {
                                      //  return the default value,not a valid  character
        return -1;
    }
}

int high_base(const char *alph) 
{
    int max_decimal = 0;
    for (int i = 0; alph[i] != '\0'; i++)  //loop for converting character into decimal
    {
        int decimalvalue = decimal(alph[i]);
        if (decimalvalue > max_decimal) 
        {
            max_decimal = decimalvalue;
        }
    }
     
     return max_decimal + 1;
}

int main() // compilelation stating point
 {
    

    int word;//variable declare
     
     
        srand(time(NULL));//for random value and current time
        word =rand()%9;//used rand func where max is 9 and min is 0
        printf("randamly generated character is %d\n",word);
     


    const char *alph= "67B89D";
    int base_value = high_base(alph); //calling of function
    printf("Highest base of a 67B89D is  : %d\n", base_value);
    return 0;
}
