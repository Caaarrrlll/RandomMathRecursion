//function for sterling numbers of the second kind
int Sterling(int n, int r){
	if(r == 1)
		return 1;
	else if(r == n)
		return 1;
	else	
		return(Sterling(n - 1, r - 1) + (r * Sterling(n - 1, r)));
}