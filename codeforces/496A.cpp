#include <iostream>
#include <vector>

int difficulty(std::vector<int> a) {
	int diff = 0;
	int maxDiff = 0;

	for (int i = 1; i < a.size(); ++i) {
		diff = a[i] - a[i - 1];
		if (diff > maxDiff) {
			maxDiff = diff;
		}
	}

	return maxDiff;
}


int main()
{
	int n;
	std::cin >> n;

	std::vector<int> a;
	std::vector<int> steps;

	for (int i = 0; i < n; ++i) {
		int temp;
		std::cin >> temp;
		a.push_back(temp);
	}

	int minDiff = 9999;
	for (int i = 1; i < n - 1; ++i) {
		std::vector<int> _a = a;
		_a.erase(_a.begin() + i);
		int diff = difficulty(_a);
		if (diff < minDiff) {
			minDiff = diff;
		}
	}

	std::cout << minDiff;

	return 0;
}

