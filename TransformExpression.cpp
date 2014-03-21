#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	stack<char>operations;
	stack<char>others;
	
	while(t--){
		string s;
		cin >> s;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^' || s[i]=='%')
				operations.push(s[i]);
			else if(s[i]==')'){
				cout << operations.top();
				operations.pop();
			}else if(s[i]=='(')
				others.push(s[i]);
			else
				cout << s[i];
		}	
		cout << endl;
	}
	return 0;
}
