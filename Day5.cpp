#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,x;
	    long long total=0;
	    cin>>n>>x;
	    long long days[n];
	    for(long long i=0;i<n;i++){
	        cin>>days[i];
	    }
	  
	    for(long long i=0;i<n;i++){
	        if(days[i]==0){
	            total=total;
	        }else{
	            total=total+x;
	            
	        }
	        if(days[i-1]==1&&days[i]==0){
	            total=total+x;
	        }
	    }
	    std::cout << total<< std::endl;
	}
	return 0;
}
