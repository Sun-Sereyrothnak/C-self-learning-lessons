#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char op;
    cout << "Welcome to FyMo calculator!\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;
    int result;
    if(op == '+'){
        result = num1+num2;
         cout << num1 << op << num2 << "=" << result;
    }else if(op=='-'){
    result = num1-num2;
     cout << num1 << op << num2 << "=" << result;
    }else if(op=='/'){
    result = num1/num2;
     cout << num1 << op << num2 << "=" << result;
    }else if(op=='*'){
    result = num1*num2;
     cout << num1 << op << num2 << "=" << result;
    }else {
        cout << "Invalid Operator" << endl;
    }

    return 0;
}
