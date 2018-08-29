#include <iostream>

using namespace std;

//function for sterling numbers of the second kind
int Sterling(int n, int r){
	if(r==1)
		return 1;
	else if(r == n)
		return 1;
	else	
		return(Sterling(n - 1, r - 1) + (r * Sterling(n - 1, r)));
}

int main(){
	cout << "Enter the distinct partitions and the number of sets you want seperated by spaces: ";
	int n, r;
	cin >> n >> r;

	cout << Sterling(n,r) << endl;

	return 0;
}