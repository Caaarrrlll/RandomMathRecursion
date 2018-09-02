#include <iostream>
#include "myMath.h"

using namespace std;

int main(){
	cout << "Enter the distinct partitions and the number of sets you want seperated by spaces: ";
	int n, r;
	cin >> n >> r;

	cout << Sterling(n,r) << endl;

	return 0;
}