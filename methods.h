#pragma once
#include <vector>

using namespace std;

vector<uint32_t> available_pids(uint32_t number, uint32_t start = 0);
vector<uint32_t> get_available(vector<uint32_t> binarized);
vector<uint32_t> fill_pids1(vector<uint32_t> arr);
uint32_t dec2hex(uint32_t dec);
