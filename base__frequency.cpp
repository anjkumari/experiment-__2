#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>//these function for ASCII value
//
int decimal_value(char base) {
    if ('0' <= base && base <= '9') {
        return base - '0';
    } else if ('A' <= base && base <= 'Z') {
        return base - 'A' + 10;
    } else if ('a' <= base && base <= 'z') {
        return base - 'a' + 10;
    } else {
        return -1;
    }
}
//generating random string
char *Random(int length) {
     char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *randomString = (char *)malloc(length + 1);

    for (int i = 0; i < length; i++) {
        randomString[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    randomString[length] = '\0';
    return randomString;
}

int Highest_Base(const char *str) {
    int highestBase = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        int base = decimal_value(str[i]);
        if (base > highestBase) {
            highestBase = base;
        }
    }

    return highestBase;
}

int main() {
    srand(time(NULL)); // random number generator

    int numStrings = 50; //  desired number of random strings

    for (int i = 0; i < numStrings; i++) {
        int length = rand() % 10 + 3; // Generate a random string length between 3 and 10
        char *randomStr = Random(length);
        int highestBase = Highest_Base(randomStr);
        printf("there are alphanumeric : %s, having Highest Base of : %d\n", randomStr, highestBase);
        free(randomStr);
    }

    return 0;
}
