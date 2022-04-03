#include "main.h"
int main() {
    cout<<"Enter the number,string,numCrates,loadSize:";
    cin>>n;
    if(cin.fail()) {
        a = 1;
    }
    cin>>str;
    cin>>numCrates;
    if(cin.fail()) {
        b = 1;
    }
    cin>>loadSize;
    if(cin.fail()) {
        c = 1;
    }
    if (n >= 0&&a==0) {
        Reverse number;
        cout << number.reverseDigit(n) << ' ';
    } else {
        cout << "ERROR ";
    }
    Reverse STR;
    cout << STR.reverseString(str) << ' ';
    if (numCrates >= 2 && numCrates <= 10000 &&
    loadSize >= 1 && loadSize <= (numCrates - 1)&&b==0&&c==0) {
        Truckloads value;
        int i = 0;
        M_numCrates[i] = numCrates;
        M_loadSize[i] = loadSize;
        M_value[i] = value.numTrucks(numCrates, loadSize);
        cout << value.numTrucks(numCrates, loadSize) << ' ';
    } else {
        cout << "ERROR ";
    }
    if (numCrates >= 2 && numCrates <= 10000 &&
    loadSize >= 1 && loadSize <= (numCrates - 1)&&b==0&&c==0) {
        EfficientTruckloads Mvalue;
        cout << Mvalue.EfficientNumTrucks(numCrates, loadSize);
    } else {
        cout << "ERROR ";
    }
    return 0;
}