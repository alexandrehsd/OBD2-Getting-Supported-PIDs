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

vector<uint32_t> fill_pids1(vector<uint32_t> arr)
{
	return vector<uint32_t>();
}

//uint32_t dec2hex(uint32_t dec)
//{
	
//}
