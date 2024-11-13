# lab2sem3

Лабораторная работа №2
Алгоритмы и абстрактные структуры данных

1) Постфиксная (или обратная польская) запись арифметического выражения
— это способ записи выражений, в котором знак операции записывается после
операндов. Так, операторы больше не являются неоднозначными по отношению
к своим операндам. Например, запишем выражение 3+1*4 в постфиксную форму
и произведем вычисление. В постфиксной форме получим выражение 314*+. Мы
умножаем числа 4 и 1, и результат складываем с 3. Необходимо реализовать
алгоритм, который вычисляет выражения в обратной польской записи с
использованием стека

2)Реализовать основные операции со множеством: добавление элемента,
удаление элемента, проверка наличия элемента в множестве.
Запуск задания в консоли:
./<имя вашей программы> --file <путь до файла с данными> --
query <запрос к файлу с данными>
Все операции выполняются за O(1)
Таблица операций

Добавление Удаление Проверка
SETADD     SETDEL    SET_AT

3)Геном жителей системы Тау Кита содержит 26 видов оснований, для
обозначения которых будем использовать буквы латинского алфавита от A до
Z, а сам геном записывается строкой из латинских букв. Важную роль в геноме
играют пары соседних оснований, например, в геноме «ABBACAB» можно
выделить следующие пары оснований: AB, BB, BA, AC, CA, AB. Степенью
близости одного генома другому геному называется количество пар соседних
оснований первого генома, которые встречаются во втором геноме. Вам даны
два генома, определите степень близости первого генома второму геному.
Программа получает на вход две строки, состоящие из заглавных латинских
букв. Каждая строка непустая, и её длина не превосходит 105. Программа
должна вывести одно целое число – степень близости генома, записанного в
первой строке, геному, записанному во второй строке.
Пример:
Ввод: ABBACAB
BCABB
Вывод: 4

4)Дано N слов в словаре с правильными ударениями (заглавная буква
указывает на ударение) и строка текста, в которой Петя расставил ударения.
Вася проверяет этот текст: если слово есть в словаре, оно должно
соответствовать хотя бы одному из вариантов правильного ударения. Если
слово отсутствует в словаре, оно считается правильным, если в нём ровно
одно ударение. Слово считается ошибочным, если ударений нет или их больше
одного. Необходимо определить количество ошибок в тексте, найденных Васей.
Пример:
Ввод: 4
cAnnot
cannOt
fOund
pAge
thE pAge cAnnot be found
Вывод: 2
Пояснение: в слове cannot, согласно словарю, возможно два
варианта расстановки ударения. Две ошибки, совершенные Петей — это
слова be (ударение вообще не поставлено) и fouNd (ударение поставлено
неверно). Слово thE отсутствует в словаре, но поскольку в нем Петя
поставил ровно одно ударение, признается верным.

5)АВЛ-сбалансированность
Дерево называется АВЛ-сбалансированным, если для любой его вершины
высота левого и правого поддерева для этой вершины различаются не более
чем на 1. Вводится последовательность целых чисел, оканчивающаяся нулем.
Сам ноль в последовательность не входит. Постройте дерево, соответствующее
данной последовательности. Определите, является ли дерево
сбалансированным, выведите слово YES или NO.
Пример:
Ввод: 7 3 2 1 9 5 4 6 8 0
Вывод: YES

6)Преобразование целого числа в римскую цифру
Дано целое число, необходимо преобразовать его в строку,
представляющую это число в римской системе счисления. Римские цифры
формируются на основе набора символов с фиксированными значениями: I = 1,
V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000. Цифры записываются
путем сложения соответствующих значений, начиная с наибольшего символа. В
некоторых случаях используется форма вычитания, когда меньший символ
предшествует большему. Такие случаи включают числа, оканчивающиеся на 4
или 9 (например, IV для 4 и IX для 9). Последовательные символы,
представляющие степени десяти (I, X, C, M), могут повторяться не более
трех раз подряд. Задача заключается в том, чтобы на основе этих правил,
преобразовать данное число в римскую цифру.
Пример:
Ввод: 3749
Вывод: “MMMDCCXLIX”