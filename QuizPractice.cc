#include <iostream>

//define template class
template <class T>
T add69(T a) {
	return a + 69;
}

//make some container of size n
template <class T>

T make(int N) {
	T output = N;
	return output;
}

template <class T, InputIterator first, InputIterator last>

int find_equal<T,first,last>(

int main() {
	//num1 = add69<std::string>("69");
	int num2 = add69<int>(1);
	auto list = make<std::vector>(4);
	std::cout << num2 << std::endl;
	return 0;
}
