#include "Reverse.h"

int Reverse::reverseDigit(int value) {
    int right_digit = 0,result = 0;
    do
    {
        right_digit = value%10;
        result = result*10 + right_digit;
        value/=10;
    }
    while(value!=0);
    return result;
}

string Reverse::reverseString(string letters) {
    reverse(letters.begin(),letters.end());
    return letters;
}


