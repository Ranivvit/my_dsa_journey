#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    long sum=0;
	    long total;
	    long arr[7];
	    for (int i = 0; i < 7; i++) {
	        cin>>arr[i];
	    }
	    long price=arr[0]/2;
	   
	   if(arr[0]%2==0) total=price;
	   else total=price+1;
	   for (int i = 1; i < 7; i++) {
	       sum+=arr[i];
	   }
	   std::cout << sum*total << std::endl;
	}
	return 0;
}
