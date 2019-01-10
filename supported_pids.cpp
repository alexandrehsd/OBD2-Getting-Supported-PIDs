// supported_pids.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Car {
	string name;
	string vin;
	string details;
	int year;
	vector<uint32_t> cmds;
	vector<uint32_t> mode5;
	vector<uint32_t> mode9;
};

int main(){
	Car cars[2];

	//sandero
	cars[0].name = "sandero";
	cars[0].vin = "93YBSR7RHEJ298116";
	cars[0].details = "Tech Run 1.0";
	cars[0].year = 2014;
	cars[0].cmds = { 0xBE3EB811, 0x80018001, 0x80000000 };
	cars[0].mode5 = { 0x7f };
	cars[0].mode9 = { 0x54000000 };

	//onix
	cars[1].name = "onix";
	cars[1].vin = "";
	cars[1].details = "LTZ 1.4";
	cars[1].year = 2015;
	cars[1].cmds = { 0xBE3FB813, 0x8007A011, 0xFED0C000 };
	cars[1].mode5 = { };
	cars[1].mode9 = { 0x55400000 };

	//char a = '0x0D';
	//int b = (int)a - 55;
	//cout << b;

	int v1[3] = { 0x0A, 0xB, 0xC };
	int v2[3] = { 10, 11, 12 };
	for (int i = 0; i < 3; i++) {
		if (v1[i] == v2[i]) {
			cout << v1[i] << endl;
		}
	}

	return 0;


}

