#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin>>n;
    
    if (n==1) {
    	cout<<1;
    	return 0;
	}
    
    int vector[n];
    int count = 0;
    int sub = 0;
    int previousSub = 0;
    
    for(int i = 0; i < n; i++){
        cin>>vector[i];
    }
    
    for(int i = 0; i < n-1; i++){
        if(i == 0){
            count++;
            sub = vector[i+1] - vector[i];
            continue;
        }
        previousSub = sub;
        sub = vector[i+1] - vector[i];
       
        if(sub != previousSub){
            count++;
        }
        
    }
    
    cout<<count<<endl;
    
    return 0;
}