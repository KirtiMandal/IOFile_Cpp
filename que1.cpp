#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fp;
	int count=0;
	string str;

	fp.open("findThe.txt", ios::in|ios::out);

	cout << "Writing in 'findThe' file" << endl;
	fp << "C++ is a middle-level language rendering it the advantage of programming low-level (drivers, kernels) and even higher-level applications (games, GUI, desktop apps etc.). The basic syntax and code structure of both C and C++ are the same" << endl;

	fp.seekg(0);

	while(fp >> str){
		if(str == "the")
			count++;
		else
			continue;

	}

	cout << "'the' count in the file is : " << count << endl;

	return 0;
}
