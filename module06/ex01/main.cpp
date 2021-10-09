#include <iostream>

struct Data {
	int i;
	std::string str;
};

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data data1;
	Data *data2;
	uintptr_t raw;

	data1.i = 5;
	data1.str = "hi";
	raw = serialize(&data1);
	data2 = deserialize(raw);
	std::cout << data2->i << std::endl;
	std::cout << data2->str << std::endl;
	return 0;
}
