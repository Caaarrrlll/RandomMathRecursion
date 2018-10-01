#include <iostream>
#include "myMath.h"

using namespace std;

int main(){
	int n, r;
	//Sterling Example
	cout << "Sterling numbers\n";
	cout << "Enter the distinct partitions and the number of sets you want seperated by spaces: ";
	cin >> n >> r;
	cout << Sterling(n,r) << endl << endl;

	//Ackermann Example
	cout << "Ackermann function (warning will probably not execute beyond 4 1)\n";
	cout << "Enter m n seperated by spaces: ";
	cin >> n >> r;
	cout << Ackermann(n,r) << endl << endl;

	//Fibonacci Example
	cout << "Fibonacci sequence\n";
	cout << "Enter the time sequence you want to have calculated (T0 = 0): ";
	cin >> n;
	cout << Fibonacci(n) << endl << endl;

	//Tower of hanoi
	cout << "Tower of hanoi\n";
	cout << "Enter the number of disks: ";
	cin >> n;
	cout << ToH(n) << endl << endl;

	//Tower of hanoi
	cout << "Tower of hanoi with adjacency requirement\n";
	cout << "Enter the number of disks: ";
	cin >> n;
	cout << ToHA(n) << endl;

	return 0;
}