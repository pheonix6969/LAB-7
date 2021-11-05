#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
bool testmoveMim(){
	vector<int> test;
	int i;
	for (i = 0; i < 100; i++){
		test.push_back(rand() % 20);
	}
	sort(test.begin(), test.end());
	test.push_back(rand() % 20);
	for (i = 0; i < test.size(); i++){
		cout << test[i] << " ";
	}
	return true;
}
bool moveMin(vector<int> &in, vector<int> &out){
	int temp, i, j;
	for (i = 0; i < in.size() - 2; i++){
		for (j = 0; j < in.size() - 2; j++){
			if (in[j + 1] < in[j]){
				temp = in[j + 1];
				in[j + 1] = in[j];
				in[j] = temp;
			}
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
	testmoveMim();
	_getch();
	return 0;
}