#ifndef ITER_HPP
# define ITER_HPP

template <typename T1>
void iter(T1 *address, int length, void (*func_ptr)(T1 &item)) {
	for (int i = 0; i < length; i++)
		func_ptr(address[i]);
}

#endif
