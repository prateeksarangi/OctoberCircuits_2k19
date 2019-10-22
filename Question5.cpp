#include<iostream>
#include<math.h>
using namespace std;

int isprime(int x){
	int l=2, c=0;
	for(int i=l; i<=sqrt(x); i++){
		if(x%i == 0)
			c++;
	}
	if(c == 0)
		return 1;
	else
		return 0;
}

int main(int argc, char const *argv[])
{
	int t, n, i, count = 0;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		count = 0;
		for(i=0; i<n; i++)
			cin>>a[i];
		for(i=0; i<n; i++){
			if(isprime(a[i]))
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}