#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


// Complete the oddNumbers function below.
vector<int> oddNumbers(int l, int r) {
    int n, i;
    n= ((r-l)/2) + 1;
    vector<int> a;
    if(l%2 == 0)
        a[0] = l;
    else
        a[0] = l+1;
    for(i=1; i<n; i++)
        a[i] = a[i-1] + 2;
    return a;

}

int main(){
	int l, r;
	cin>>l>>r;
	vector<int> v;
	v = oddNumbers(l, r);
	for (auto it = v.begin(); it != v.end(); it++) 
        cout << *it << " ";
}