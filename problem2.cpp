#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

bool isPrime(int n){
	if (n <= 1) {  
            return false;  
        }  
        for (int i = 2; i <= sqrt(n); i++){  
            if (n % i == 0) {  
                return false;  
            }  
        }  
        return true;  
    }

int main()
{
	int x = 0;
	int y = 0;
	int a = 0;
	int b = 0;
	int prime = 0;
	int n;
	cin>>n;
	
	for (int i = 0; i < n; i++){
		prime = 0;
		a = 0;
		b = 0;
		cin>>x;
		cin>>y;
		
		for (int i = x; i <= y; i++){
			if(isPrime(i)){
				prime++;
				if (a == 0){
					a = i;
				}
				else{
					b = i;
				}
			}
		}
		if(prime==0){
            cout<<"-1"<<endl;
		}
        else if(x==y || prime==1){
            cout<<"0"<<endl;
		}
        else{
            cout<<abs(a-b)<<endl;
        }
	}
}