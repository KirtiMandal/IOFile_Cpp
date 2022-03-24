#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fin;
	string str;
	int count=0;

	fin.open("que4_end_s.txt", ios::in|ios::out);

	fin << "C++ is a powerful general-purpose programming language. It can be used to develop operating systems, browsers, games, and so on. C++ supports different ways of programming like procedural, object-oriented, functional, and so on." << endl;
	fin << "C++ is a middle-level language rendering it the advantage of programming low-level (drivers, kernels) and even higher-level applications (games, GUI, desktop apps etc.). The basic syntax and code structure of both C and C++ are the same." << endl;

	fin.seekg(0);

	while(fin >> str){
		int len = str.length() - 1;

		if(str[len] == 's'){
			count++;
		}
		else if(str[len] == ','){
			if(str[len-1] == 's'){
				count++;
			}
			else
				continue;
		}
		else
			continue;
	}

	cout << count <<" words ends with 's'"<< endl;

	return 0;
}
