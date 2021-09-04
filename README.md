# OOP #
Объектно-ориентированное программирование - парадигма, основанная на представлении программы в виде объектов

## Class ##
- класс - тип данных, состоящий из свойств и методов
- свойства - переменные класса
- методы - функции для работы с переменными класса
- объект - экземпляр класса

``` cpp
# include <iostream>

class	MyClass
{
	public:

	int		m_num;
	void	print_number()
	{
		std::cout << m_num << "\n";
	}
};

int	main()
{
	MyClass	object;

	object.m_num = 5;
	object.print_number();
	return 0;
}

// result: 5
```

## Encapsulation ##
- инкапсуляция - свойство системы, позволяющее объединить свойства и методы одного класса, и скрыть детали реализации объекта, то есть ограничить доступ
- геттеры - функции, возвращающие значения закрытых свойств
- сеттеры - функции, позволяющие присваивать значения закрытым свойствам

## перегрузки операторов ##

``` cpp
# include <iostream>

class	Sum
{
	private:

	int		m_sum;

	public:

	Sum(int sum) { m_sum = sum; }
	int	getSum() { return m_sum; }
};

Sum	operator+(const Sum &sum1, const Sum &sum2)
{
	return Sum(sum1.getSum() + sum2.getSum());
}

int	main()
{
	Sum	sum1(2);
	Sum	sum2(3);
	Sum	ans = sum1 + sum2;

	std::cout << ans.getSum() << std::endl;
	return 0;
}
```

## Inheritance ##
Наследование

## Polymorphism ##
Полиморфизм
