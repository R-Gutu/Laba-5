#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string.h>
#include <sstream>
#include <vector>


using namespace std;

int main(void){
	setlocale(LC_ALL, "Russian");
	char str[256];
	cout << "������� ������ ���� ������ ";
	cin.getline(str, 256);
	string str1 = str;

	vector<string> vec;
	istringstream iss(str1); //���������� ������ � �����
	string word;

	while (iss >> word) {   //������ �� ������ ������, ��� ������ ��������� >> , ������������ ������ ������
		vec.push_back(word);
	}

	for (int i = 0; i < vec.size() - 1; i++) {
		for (int j = 0; j < vec.size() - 1; j++) {
			if (vec[j].length() > vec[j + 1].length())
				swap(vec[j], vec[j + 1]);
		}
	}

	for (int i = 0; i < vec.size(); i++){
		cout << vec[i] << " ";
	}

	return 0;

}