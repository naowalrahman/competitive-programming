#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

#define PI 3.14159265358979323846
int getUpperIndex(vector<int> arr, int key, int start);
int getLowerIndex(vector<int> arr, int key, int start);

int main() {
	int n, desiredRadius;
	cin >> n >> desiredRadius;

	double tolerance;
	cin >> tolerance;

	// All radii given in input (this is is guaranteed to be correct)
	vector<int> r;
	for (int i = 0; i < n; i++) {
		int radius;
		cin >> radius;
		r.push_back(radius);
	}
	sort(r.begin(), r.end());

	// Answer to problem
	long long result = 0;

	for (int i = 0; i < r.size(); i++) {
		// Find largest radius that can fit within tolerance when combined to area of the ith radius
		int upperBound = (int) ceil(sqrt(tolerance / PI - desiredRadius * (long long) desiredRadius
			- r[i] * (long long) r[i]));

		// Find smallest radius sr that can fit within tolerance when combined to area of the ith radius
		int lowerBound = (int) sqrt(desiredRadius * (long long) desiredRadius
			- r[i] * (long) r[i] + tolerance / PI);


		// Get lowestIndex >= i in r that has radius greater than or equal to lowerBound
		int lowerIndex = getLowerIndex(r, lowerBound, i + 1);


		// Get highestIndex >= i in r that has radius less than or equal to upperBound
		int upperIndex = getUpperIndex(r, upperBound, i + 1);

		if (lowerIndex == -1 || upperIndex == -1)
		{
			continue;
		}
		result += upperIndex - lowerIndex + 1;
	}

	cout << result;
}

int getUpperIndex(vector<int> arr, int key, int start) {
	// TODO: Find highest index i >= start such that the ith value in arr is <= key. If no index exists, return -1.
	return -1;
}

int getLowerIndex(vector<int> arr, int key, int start) {
	// TODO: Find lowest index i >= start such that the ith value in arr is >= key. If no index exists, return -1.
	return -1;
}