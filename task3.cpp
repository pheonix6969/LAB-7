#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
bool testmoveMim(){
	vector<int> test;
	int i, temp;
	for (i = 0; i < 100; i++){
		test.push_back(rand() % 20);
	}
	for (i = 0; i < test.size() - 2; i++){
		if (test[i] > test[i + 1]){
			temp = test[i];
			test[i] = test[i + 1];
			test[i + 1] = temp;
			i = -1;
		}
	}
	test.push_back(rand() % 20);
	for (i = 0; i < test.size(); i++){
		cout << test[i] << " ";
	}
	return true;
}
bool moveMin(vector<int> &in, vector<int> &out){
	int temp, i, j;
	for (i = 0; i < in.size() - 2; i++){
		if (in[i] > in[i + 1]){
			temp = in[i];
			in[i] = in[i + 1];
			in[i + 1] = temp;
			i = -1;
		}
	}
	for (i = 0; i < in.size(); i++){
		out.push_back(in.at(i));
	}
	cout << "The sorted array is." << endl;
	for (i = 0; i < out.size(); i++){
		cout << out[i] <<  " " ;
	}
	return true;
}
int main(){
	vector<int> in, out;
	cout << "Enter how elements should be in the array: ";
	int n;
	int i, j, temp = 0;
	cin >> n;
	cout << endl;
	int valtemp = 0;
	for (i = 0; i < n; i++){
		cout << "Enter: ";
		cin >> valtemp;
		in.push_back(valtemp);
	}
	//moveMin(in, out);
	testmoveMim();
	_getch();
	return 0;
}