#include <iostream>
#include <cmath>
using namespace std;

int rightRiemann () {
    float upper, lower, stepNumber, steps;


    cin >> upper >> lower >> stepNumber;
    
    steps = (upper - lower) / stepNumber;
    double heightNum, height, newHeight, area, sum;

    for (int i = 1; i < stepNumber+1; i++) {
            
        heightNum = lower + (steps * i);

        height = pow(heightNum, 2);

        sum += height;
 
    }
    double rrSum;
    rrSum = sum * steps;

    cout << rrSum << endl;
    
    return 0;

}

int leftRiemann () {
    float upper, lower, stepNumber, steps;


    cin >> upper >> lower >> stepNumber;
    
    steps = (upper - lower) / stepNumber;
    double heightNum, height, newHeight, area, sum;

    for (int i = 0; i < stepNumber; i++) {
            
        heightNum = lower + (steps* (i) );
        height = pow(heightNum, 2);

        sum += height;
   
    }
    area = sum * steps;
    cout << area << endl;

    return 0;
   
}

int midpointRiemann () {
    float upper, lower, stepNumber, steps;


    cin >> upper >> lower >> stepNumber;
    
    steps = (upper - lower) / stepNumber;

    double heightNum1,heightNum2, midpoint, temp, height, sum;
    for (int i = 0; i <stepNumber; i++) {

        heightNum1 = lower + (steps * i);
        temp = heightNum1;
        heightNum2 = temp + steps;

        cout << "Height 1: "<< heightNum1 << endl;
        cout << "Height 2: " << heightNum2 << endl;

        midpoint = (heightNum1 + heightNum2) / 2;

        cout << "Midpoint: " << midpoint << endl;

        height = pow(midpoint, 2);

        sum += height;
    }
    double area = sum * steps;
    cout << area << endl;

    return 0;
}
int main() {
   
    midpointRiemann();

}