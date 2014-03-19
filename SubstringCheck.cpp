#include <iostream>
#include <cstring>
using namespace std;


bool isSubString(String a, String b){
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
		
	}
}

int main(){
	int t=24;
	while(t--){
		String a, b;
		cin >> a >> b;
		
		if(isSubString(a,b))
			cout << 1 << endl;
		else 
			cout << 0 << endl;
	}
	return 0;
}
