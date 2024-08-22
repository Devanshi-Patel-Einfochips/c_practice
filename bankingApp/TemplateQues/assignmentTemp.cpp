
// assignment 5
#include <iostream>
#include <vector>

template<typename T>
class PrettyPrinter {
	T *m_pData;
public:
	PrettyPrinter(T *data) : m_pData(data) {}

	void Print() {
		std::cout << "{" << *m_pData << "}" << std::endl;
	}

	T* GetData() {
		return m_pData;
	}
};

// Explicit specialization of the Print function for std::vector<int>
template<>
void PrettyPrinter<std::vector<int>>::Print() {
	std::cout << "{";
	for (const auto &x : *m_pData) {
		std::cout << x << " ";
	}
	std::cout << "}" << std::endl;
};

// Explicit specialization of the Print function for double std::vector<int>

// template<>
// class PrettyPrinter<std::vector<std::vector<int>>> {
// 	std::vector<std::vector<int>>* m_pData;
// public:
// 	PrettyPrinter(std::vector<std::vector<int>>* data) : m_pData(data) {}

// 	void Print() {
// std::cout << "{";
// 	for (const auto &x : *m_pData) {
//         std::cout << "{";

//         for(const auto &y: x ){
// 		std::cout << y << " ";
//         }
//                 	std::cout << "},";


// 	}

// 	std::cout << "}" << std::endl;	}

// 	std::vector<std::vector<int>>* GetData() {
// 		return m_pData;
// 	}
// };


template<>
void PrettyPrinter<std::vector<std::vector<int>>>::Print(){
std::cout << "{";
	for (const auto &x : *m_pData) {
        std::cout << "{";

        for(const auto &y: x ){
		std::cout << y << " ";
        }
                	std::cout << "},";


	}

	std::cout << "}" << std::endl;
};
// Specialization for PrettyPrinter<char*>
template<>
class PrettyPrinter<const char*> {
	const char* m_pData;
public:
	PrettyPrinter(const char* data) : m_pData(data) {}

	void Print() {
		std::cout << "{" << m_pData << "}" << std::endl;
	}

	const char* GetData() {
		return m_pData;
	}
};

int main() {
	// Test with const char*
	const char* p = "Hello world";
	PrettyPrinter<const char*> p3(p);  // Use const char* directly
	p3.Print();
	const char* pData = p3.GetData();

	// Test with std::vector<int>
	std::vector<int> v{ 1, 2, 3, 4, 5 };

	PrettyPrinter<std::vector<int>> pv(&v);

	pv.Print();

        std::vector<std::vector<int>> v1{{1,2,3}, {4,5,6}};
PrettyPrinter<std::vector<std::vector<int>>> pvv(&v1);
pvv.Print();

	return 0;
}
