#include <iostream>
#include <string>
using namespace std;
bool reportPositive(string V, string B){
	int len = B.length();
	int len2 = V.length();
	int i = 0;
    int j = 0;

    while (j < len && i < len2){
        if (B[j] == V[i]){
            j++;
		}
        i++;
    }
    return (j == len);
   }
int main()
{
	string V;
	string B;
	int N;
	cin>>V; //Getting Virus Composition
	cin>>N; //Number of samples
	for (int i = 0; i < N; i++){
		cin>>B;
		if(reportPositive(V, B)){
			cout<<"POSITIVE\n";
		}
		else{
			cout<<"NEGATIVE\n";
		}
	}


}