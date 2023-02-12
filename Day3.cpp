#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    double p,total;
	    cin>>p>>x>>y>>z;
	    if(z==1){
	        double total=p+p*(0.01*y);
	        std::cout <<fixed<< setprecision(10)<<total << std::endl;
	        
	    }else {
	        double total1=p-p*(x*0.01);
	        std::cout <<fixed<< setprecision(10)<<total1 << std::endl;
	        
	        
	    }
	    
	}
	return 0;
}
