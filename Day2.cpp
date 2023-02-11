#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double h,w,x,y,k;
	    cin>>h>>w>>x>>y>>k;
	    double first=(pow((h-y),2));
	     double second=(pow((w-x),2));
	     double total=sqrt(first+second);
	     
	    if(total<k) std::cout << 1 << std::endl;
	    else std::cout << 0 << std::endl;
	}
	return 0;
}
