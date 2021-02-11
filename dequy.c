#include<stdio.h>
int Factorial(int n){
	if(n ==0)
		return 1;
	return n*Factorial(n - 1);
}
int power(int a, int n){
	int s = 1;
	int i;
	for(i = 0; i < n; i++){
		s*=a;
	}
	return s;	
}
int Fib(int n){
	if(n ==0 )
		return 0;
	if(n == 1)
		return 1;
	return Fib(n - 1) + Fib(n - 2);
}
int checkFib(int n){
	int i, count = 0;
	for(i = 0; i <= n;i++ ){
		if(n = Fib(i)){
			count++;
		}
	}
	if(count == 1){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n = 144;
	printf("%d",Fib(n));
	if(checkFib(n) == 1){
		printf("%d", n);
	}else{
		printf("no");
	}
	printf("\n");
	/*printf("%d",Factorial(n));
	int a = 2;
	printf("\n");
	printf("%d",power(a,n));*/
	
	return 0;
}