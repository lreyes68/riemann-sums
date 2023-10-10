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
int main() {
   
    rightRiemann();

}