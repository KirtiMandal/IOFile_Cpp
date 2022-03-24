#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fp;
	int count=0;
	string str;

	fp.open("que2_a_Count.txt", ios::in|ios::out);
	fp << "C++ is a cross-platform language that can be used to create high-performance applications. C++ was developed by Bjarne Stroustrup, as an extension to the C language. C++ gives programmers a high level of control over system resources and memory."<<endl;
	fp.seekg(0);

	while(fp >> str){
	for(int i=0;i<str.length();i++){
		if(str[i] == 'a')
			count++;
		else
			continue;}
	}

	cout << count <<" words have letter 'a' in them "<< endl;
	return 0;
}
