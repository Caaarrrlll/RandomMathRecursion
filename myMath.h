int Ackermann(int m, int n){
	if(m == 0){
		return n + 1;
	}
	else if(m > 0 && n == 0){
		return Ackermann(m - 1, 1);
	}
	else{
		Ackermann(m - 1, Ackermann(m, n - 1));
	}
}

int Fibonacci(int x){
	if(x == 0)
		return 0;
	else if (x == 1)
		return 1;
	else return Fibonacci(x-1) + Fibonacci(x-2);
}

//function for sterling numbers of the second kind
int Sterling(int n, int r){
	if(r == 1)
		return 1;
	else if(r == n)
		return 1;
	else	
		return(Sterling(n - 1, r - 1) + (r * Sterling(n - 1, r)));
}

//Tower of hanoi
int ToH(int n){
	if(n < 2){
		return 1;
	}
	else{
		return (2*ToH(n - 1) + 1);
	}
}

//Tower of hanoi with adjacency requirement
int ToHA(int n){
	if(n < 2){
		return 2;
	}
	else{
		return (3*ToHA(n - 1) + 2);
	}
}