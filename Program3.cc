// Write a program to calculate the Arithmetic Mean in case of Continuos Series by Step-Deviation Method

#include <iostream>
#include <vector>
using namespace std;

double calculateMean(vector <double> midpoints, vector <int> frequency) {
    double sum = 0.00;
    int n = midpoints.size();

    for (int i = 0; i<n; i++) {
        sum += midpoints[i] * frequency[i];
    }

    double totalFrequency = 0;
    for (int i = 0; i<n; i++) {
        totalFrequency += frequency[i];
    }
    return sum/totalFrequency;
}

int main() {
    int n;
    cout << "Enter the number of class intervals : ";
    cin >> n;

    vector <double> midpoints(n);
    vector <int> frequency(n);

    cout << "Enter the class midpoints and frequencies : " << endl;

    for (int i = 0; i<n ;i++) {
        cout << "Midpoints " << (i+1) << " : ";
        cin >> midpoints[i];
        cout << "Frequency " << (i+1) << " : " ; 
        cin >> frequency[i];
    }

    double mean = calculateMean(midpoints, frequency);
    cout << "Arithmatic mean using step deviation method : " << mean << endl;
    
}
