// supported_pids.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include "methods.h"

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

	vector<vector<uint32_t> > _PIDs;

	for (int i = 0; i < 2; i++) {
		_PIDs.push_back(decode_car_cmds(cars[i].cmds));
	}

	for (uint32_t i = 0; i < _PIDs.size(); i++) {
		for (uint32_t j = 0; j < _PIDs[i].size(); j++) {
			cout << _PIDs[i][j] << ", ";
		}
		cout << endl;
	}

	return 0;


}

