#include <iostream>
#include<math.h>
using namespace std;
//BMI
int main()
{
    float a, b, BMI;
    cout << "Weight in Kilograms: ";
    cin >> a;
    cout << "Height in Metres^2: ";
    cin >> b;
    if (a > 0 && b > 0) {
        BMI = a / (b * b) * 10000;
        if (BMI < 18.5)
            cout << "You're Underweight!" << endl;
        if (BMI >= 18.5 && BMI <= 24.9)
            cout << "You're Normal!" << endl;
        if (BMI >= 24.9 && BMI <= 29.9)
            cout << "You're Overweight!" << endl;
        if (BMI >= 30 && BMI <= 34.9)
            cout << "You're Obese!" << endl;
        if (BMI >= 35)
            cout << "You're Extremelyobese!" << endl;
    }
    return 0;
}