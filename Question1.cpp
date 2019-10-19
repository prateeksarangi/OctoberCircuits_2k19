#include<iostream>
using namespace std;

long long int factorial(long long int N){
	long long int f = 1;
	int i;
	for(i=1; i<=N; i++)
		f *= i;
	return f;
}

int main(int argc, char const *argv[]){
	long long int x;
	int N, T, f;
	cin>>T;
	while(T--){
		cin>>N;
		f = factorial(N);
		x = ((N-1)*N*f) / 2;
		cout<<x<<endl;
	}
	return 0;
}