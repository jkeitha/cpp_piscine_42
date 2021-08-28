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
