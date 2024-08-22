// #include <iostream>
// #include <vector>
// using namespace std;

// template<typename T>
// class PrettyPrinter {
// 	T *m_pData;
// public:
// 	PrettyPrinter(T *data) :m_pData(data) {}

// 	void Print() {
// 		std::cout << "{" << *m_pData << "}" << std::endl;
// 	}

// 	T * GetData() {
// 		return m_pData;
// 	}
// };

// // Explicit specialization of a member function should appear outside the class
// template<>
// void PrettyPrinter<std::vector<int>>::Print() {
// 	std::cout << "{";
// 	for (const auto &x : *m_pData) {
// 		std::cout << x;
// 	}
// 	std::cout << "}" << std::endl;
// }

// template<>
// class PrettyPrinter<char*> {
// 	char *m_pData;
// public:
// 	PrettyPrinter(char *data) :m_pData(data) {}

// 	void Print() {
// 		std::cout << "{" << m_pData << "}" << std::endl;
// 	}

// 	char * GetData() {
// 		return m_pData;
// 	}
// };

// int main() {
// 	// Create a PrettyPrinter for a string
// 	const char* p = "Hello world";   // Corrected to const char*
// 	PrettyPrinter<const char*> p3(p);  // Use const_cast to remove const
// 	p3.Print();
// 	const char *pData = p3.GetData();

// 	// Create a PrettyPrinter for a vector<int>
// 	std::vector<int> v{ 1, 2, 3, 4, 5 };
// 	PrettyPrinter<std::vector<int>> pv(&v);
// 	pv.Print();

// 	return 0;
// }




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
}

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

	return 0;
}
