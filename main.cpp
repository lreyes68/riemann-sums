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
        

        midpoint = (heightNum1 + heightNum2) / 2;

        height = pow(midpoint, 2);

        sum += height;
    }
    double area = sum * steps;
    cout << area << endl;

    return 0;
}

int trapezoidRiemann () {
    float upper, lower, stepNumber, steps;


    cin >> upper >> lower >> stepNumber;
    
    steps = (upper - lower) / stepNumber;

    double heightNum, height, sum1, sum2;
    for (int i = 0; i < stepNumber+1; i++) {
        if (i == 0 || i == 40) {
            heightNum = lower + (steps * i );
            height = pow(heightNum, 2);

            sum1 += height;

        }else {
            heightNum = lower + (steps * i);
            height = (pow(heightNum, 2)) * 2;

            sum2 += height;
            
        }
    }
    double sum, area;
    sum = sum1 + sum2;
    area = sum * (steps / 2);
    cout << area << endl;
    return 0;
}
int main() {
   
    trapezoidRiemann();

}