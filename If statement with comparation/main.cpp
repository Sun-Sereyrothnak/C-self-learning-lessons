#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3)
{
    int result;
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }else if(num2 >= num1 && num2 >= num3){
        result = num2;
        }
    else {
        result = num3;
    }

    return result;
}

int main(){

    double num1,num2,num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "Highest number is " << getMax(num1,num2,num3);


return 0;
}
