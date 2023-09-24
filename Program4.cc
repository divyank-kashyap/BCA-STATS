// Write a program to calculate the Geometric Mean for Discrete Series 

#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n;
    cout << "Enter the number of data points : ";
    cin >> n;

    double product = 1.0;
    double totalFrequency = 0.0;

    cout << "Enter data points and their frequencies : " << endl;
    for (int i = 0; i<n; i++ ) {
        double dataPoint, frequency;
        cout << "Data point " << (i+1) << " : ";
        cin >> dataPoint;
        cout << "Frequency " << (i+1) << " : ";
        cin >> frequency;
        product *= pow(dataPoint, frequency);
        totalFrequency += frequency;
    }

    double geometricMean = pow(product, 1.0/totalFrequency);
    cout << "Geometric Mean : " << geometricMean << endl;

}
