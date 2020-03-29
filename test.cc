#include <iostream>

int main() {
double out = ((double) rand() / (RAND_MAX));
double out2 = ((double) rand() / (RAND_MAX)); //should be different
std::cout << out << std::endl;
std::cout << out2 << std::endl;
return 1;
}
