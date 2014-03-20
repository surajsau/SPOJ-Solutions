#include <iostream>
#include <cstring>
#include <string>
using namespace std;


bool isSubString(string a, string b){
	int lA = a.length();
	int lB = b.length();
	
	if(lB > lA)
		return false;
	else if(lB == lA){
		for(int i=0; i<lA; i++){
			if(a[i]!=b[i])
				return false;
		}
		return true;
	}
	else{
		if(a.find(b)!=a.npos)
			return true;
		else return false;
	}
}

int main(){
	int t=24;
	while(t--){
		string a, b;
		cin >> a >> b;
		
		if(isSubString(a,b))
			cout << 1 << endl;
		else 
			cout << 0 << endl;
	}
	return 0;
}
