#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	long long int i, powfive;
	
	while(t--){
		long long sum = 0;
		powfive = 5;
		
		cin >> i;
		
		while(i/powfive!=0){
			sum = sum + (i/powfive);
			powfive = powfive * 5;
		}
		
		cout << sum << endl;
	}
	return 0;
}
