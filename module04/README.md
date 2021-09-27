## Summary: ##

- subtype polimorphism
- abstract classes

Полиморфизм - возможность объектов с одинаковой спецификацией иметь различную реализацию

Типы полиморфизма по Стрейчи:

- параметрический (parametric)
- специальный (ad-hoc)

Параметрический полиморфизм подразумевает исполнение одного и того же кода для всех допустимых типов, а специальный - подразумевает исполнение разного кода для каждого типа

Типы полиморфизма по Карделли:

- универсальный (universal)
   - параметрический (parametric)
   - подтипов (subtype)
- специальный (ad-hoc)
   - перегрузка (overloading) - например, перегрузка арифметических операторов
   - приведение типов (coercion) - например, приведение символьного типа к числовому

Универсальный полиморфизм позволяет работать с неограниченным количеством типов, а вот специальный - только с конечным набором конкретных типов

Полиморфизм подтипов - возможность через данный интерфейс использовать его подтипы, но при этом не знать этого. Например, если класс - это тип, то его потомки будут подтипами