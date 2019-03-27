#include <iostream>
#include <string>

using namespace std;

int main(){
	int bcount=0;
	string str;
	cout << "Type a line: ";
	getline(cin, str);
	
	for (int i=0; i < str.size(); i++){
		if (str[i] == 'b'){
			bcount++;
			if(bcount%2 == 1){
				cout << "SIT";
			}else{
				cout << "STAND";
			}
		}else {
			cout << str[i];
		}
	}
	return 0;
}