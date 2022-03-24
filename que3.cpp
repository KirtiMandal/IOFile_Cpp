#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fp;
	int count=0;
	string str;

	fp.open("que3_start_e.txt", ios::in|ios::out);
	fp << "C++ is a cross-platform language that can be used to create high-performance applications. C++ was developed by Bjarne Stroustrup, as an extension to the C language. C++ gives programmers a high level of control over system resources and memory."<<endl;
	fp.seekg(0);

	while(fp >> str){
		if(str[0] == 'e')
			count++;
		else
			continue;
	}

	cout << count <<" words start with 'e' "<< endl;
	return 0;
}
