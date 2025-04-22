#include<iostream>
#include<vector>


int main() {
	std::vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

	// remove elem from vector that are divisible by 5

	v.erase(remove_if(v.begin(), v.end(), [](int x) {return x % 5 == 0; }), v.end());

	std::cout << v.size() << '\n';
	for (auto& x : v)
		std::cout << x << " ";
	std::cout << '\n';


	// find any number(n) present in vector

	int n = 71;
	auto it = std::find_if(v.begin(), v.end(), [=](int x) {return x == n; });
	if (it != v.end()) {
		std::cout << "number "<< n<<" present in vector";
	}
	else {
		std::cout << "number " << n << " not present in vector";
	}
}