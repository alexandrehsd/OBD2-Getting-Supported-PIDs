#pragma once
#include <vector>

using namespace std;

vector<uint32_t> available_pids(uint32_t number, int start = 0) {
	vector<uint32_t> pids;
	for (uint32_t p = 1; p < 32; p++) {
		if (number >> (32 - p) & 1) {
			pids.push_back(p + start);
		}
	}
	return pids;
}

uint32_t get_available(vector<uint32_t> binarized) {
	vector<vector<uint32_t> > arr;
	for (int i = 0; i < binarized.size(); i++) {
		arr[i].push_back(available_pids(binarized[i], 0x20 * i));
	}
	//if (arr.size() > 0) {
	//
	//}
}

