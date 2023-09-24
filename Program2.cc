// Write a Program to calculate the Arithmetic Mean in case of Discrete Series

#include <iostream>
using namespace std;
int main () {
    int n;
    double sum = 0;
    int totalFrequency = 0;

    cout << "Enter number of data values: ";
    cin >> n;

    for (int i =0; i<n; ++i) {
        double dataValue;
        int frequencry;
        cout << "Enter data values " << (i+1) << " : ";
        cin >> dataValue;
        cout << "Enter frequncy for data value  " << dataValue << " : ";
        cin >> frequencry;
        sum += dataValue*frequencry;
        totalFrequency += frequencry;

    }

    double mean = sum/totalFrequency;
    cout << "Arithmatic mean is : " << mean << endl;
}
