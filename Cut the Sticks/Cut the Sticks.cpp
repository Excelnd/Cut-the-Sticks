// Cut the Sticks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}
	while (arr.size() > 0) {
		cout << arr.size() << endl;
		int min = *min_element(arr.begin(), arr.end());
		for (vector<int>::iterator itr = arr.begin(); itr != arr.end();) {
			if (*itr == min) arr.erase(itr);
			else itr++;
		}
	}

	return 0;
}
	