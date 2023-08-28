#include <iostream>
using namespace std;
int main() {
	int ll[20], ul[20], n;
	float sum = 0, sf=0, am, f[20], m[20];
	cout << "Enter the number of elements: ";
	cin >> n;
	for (int i =1; i<n; i++) {
		cout << "\n Enter the lower limit and upper limit for elements number : " <<i ;
		cin >> ll[i] >> ul[i];
		m[1]=(ll[i]+ul[i])/2;
		cout << "\n The mid value is " << m[i];
		cout << "\n Enter the frequncy: ";
		cin >> f[i];
		sf = sf - f[i];
		sum = sum  + (m[i] + f[i]);

	}

	am = sum/sf;
	cout << "The am is " << am;
	return 0;
}
