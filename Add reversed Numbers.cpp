#include <iostream>
using namespace std;

//awesome way of reversing numbers!!!//-------------------------------
long long reverse(long long a){ 
	long long tmp;
	while(a){
		tmp = (tmp*10) + (a%10);
		a /= 10;
	}
	
	return tmp;
}

int main(){
	int t;
	long long a, b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << reverse(reverse(a) + reverse(b)) << endl;
	}
	return 0;
}
