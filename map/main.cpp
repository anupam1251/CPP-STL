#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

int main() {

	std::vector<int> arr{ 1, 3, 3, 2, 3, 4, 1, 3 }; // uniform initialization c++11

	std::map<int, int> freqMap;
	std::unordered_map<int, int> freqhashMap;

	for (const auto& val : arr) {
		freqMap[val]++;
	}

	for (const auto& val : arr) {
		freqhashMap[val]++;
	}

	freqMap.insert({ 5, 0 });
	freqMap.emplace( 6, 0 );

	for (const auto& [key, value] : freqMap) {
		std::cout << key << " " << value << '\n';
	}
	std::cout << std::endl;


	auto it = freqMap.find(3);
	if (it == freqMap.end()) {
		std::cout << "3 is not in map" << '\n';
	}
	else {
		std::cout << "frequncy of 3 is : " << it->second << '\n' << std::endl;;
	}

	for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
		std::cout << it->first << " " << it->second << '\n';
	}
	std::cout << std::endl;

	for (const auto& pair : freqMap) {
		std::cout << pair.first <<" " << pair.second << '\n';
	}
	std::cout << std::endl;

	//structure binding c++17
	for (const auto& [key, value] : freqhashMap) {
		std::cout << key << " " << value << '\n';
	}

	

	return 0;
}