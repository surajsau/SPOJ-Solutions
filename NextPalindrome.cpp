#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t, mid, l, r;
	cin >> t;
	
	long long s;
	while(t--){
		cin >> s;
		vector<int> a;
		
		int i=0;
		
		while(s!=0){
			a[i] = s%10;
			s = s/10;
			i++;
		}	
		
		
	}
	return 0;
}
