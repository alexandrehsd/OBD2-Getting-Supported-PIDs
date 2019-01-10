#include "pch.h"
#include <vector>
#include "methods.h"

using namespace std;

vector<uint32_t> available_pids(uint32_t number, uint32_t start) {
	vector<uint32_t> pids;
	for (uint32_t p = 1; p <= 32; p++) {
		if ((number >> (32 - p) & 1) == 1) {
			pids.push_back(p + start);
		}
	}
	return pids;
}

vector<uint32_t> get_available(vector<uint32_t> binarized) {
	vector<vector<uint32_t> > arr;
	vector<uint32_t> appended_arr;

	for (uint32_t i = 0; i < binarized.size(); i++) {
		arr.push_back(available_pids(binarized[i], 0x20 * i));
	}

	if (arr.size() > 0) {
		for (uint32_t i = 0; i < arr.size(); i++) {
			for (uint32_t j = 0; j < arr[i].size(); j++) {
				appended_arr.push_back(arr[i][j]);
			}
		}
		return appended_arr;
	}
	else {
		return vector<uint32_t>();
	}
}

string dec2hex(uint32_t dec) {
	vector<char> hexaDeciNum; 
	// counter for hexadecimal number array 
	int i = 0;
	while (dec != 0) {
		// temporary variable to store remainder 
		int temp = 0;
		// storing remainder in temp variable. 
		temp = dec % 16;
		// check if temp < 10 
		if (temp < 10) {
			hexaDeciNum.push_back(temp + 48);
			i++;
		}
		else {
			hexaDeciNum.push_back(temp + 55);
			i++;
		}
		dec = dec / 16;
	}
	string hex("0x");

	if (hexaDeciNum.size() == 1) {
		hex.push_back('0');
	}

	for (int j = hexaDeciNum.size() - 1; j >= 0; j--) {
		hex.push_back(hexaDeciNum[j]);
	}

	return hex;
}

vector<uint32_t> fill_pids1(vector<uint32_t> arr){
	vector<string> supported_pids;
	vector<string> all_pids_str;
	vector<uint32_t> pids;

	for (uint32_t i = 0; i <= 135; i++) { // 0x0 <= i <= 0x87
		if (i < arr.size()) {
			supported_pids.push_back(dec2hex(arr[i]));
		}
		all_pids_str.push_back(dec2hex(i));
	} 
	all_pids_str.push_back("0xA0"); // 160
	all_pids_str.push_back("0xC0"); // 192


	for (int i = 0; i < supported_pids.size(); i++) {
		for (int j = 0; j < all_pids_str.size(); j++) {
			if (supported_pids[i] == all_pids_str[j]) {
				pids.push_back(all_pids_int[j]);
			}
		}
	}

	return pids;
}


