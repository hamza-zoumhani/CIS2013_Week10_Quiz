#include <iostream>
#include <string>

using namespace std;

int bcount =0;


int main(){
	char character = 'b';
	string str;
	cout << "Type a line: ";
	getline(cin, str);
	
	for (int i=0; i < str.size(); i++){
		if (str[i] == character){
			bcount++;
		}
	}
	
	
	
	
	return 0;
}