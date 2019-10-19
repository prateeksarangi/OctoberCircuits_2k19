#include<iostream>
using namespace std;

int myXOR(int x, int y){ 
    int res = 0;
    for(int i = 31; i >= 0; i--){ 
       	bool b1 = x & (1 << i); 
       	bool b2 = y & (1 << i); 
    	bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);           
  
        res <<= 1; 
        res |= xoredBit; 
    } 
    return res; 
} 

int myXNOR(int a, int b){ 
    if (a < b) 
        swap(a, b);
    if (a == 0 && b == 0)  
        return 1;
    int a_rem = 0;
    int b_rem = 0;
    int count = 0;  
    int xnornum = 0;
    while (a){ 
        a_rem = a & 1;  
        b_rem = b & 1;  
        if (a_rem == b_rem)         
            xnornum |= (1 << count); 
        count++;  
        a = a >> 1; 
        b = b >> 1;  
    } 
    return xnornum;
} 
  
int main(){ 
	long long int a, b, N, xo, xn, x, y;
	int t, i;
	cin>>t;
	while(t--){
		cin>>a>>b>>N;
		xo = myXOR(a, b);
		if(N%3 == 0)
			x = xo;
		else if(N%3 == 1)
			x = a;
		else
			x = b;

		xn = myXNOR(a, b);
		if(N%3 == 0)
			y = xn;
		else if(N%3 == 1)
			y = a;
		else
			y = b;	
		cout<<((x > y)? x:y)<<endl;
	}
    return 0;  
} 