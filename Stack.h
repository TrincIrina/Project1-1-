#pragma once
#include <string>
#include <sstream>
#include "Array.h"
// класс Stack - наследник класса Array
class Stack :
    public Array
{
protected:
    int count;  // количество элементов в классе
public:
    Stack(int size);
    bool push(int value); // добавление элемента 
    bool pop();           // удаление элемента
    int top();            // посмотреть верхушку стэка
    bool is_empty();      // проверка пустой ли стэк
    int get_count();      // получить количество элементов в стэке
    std::string to_string();  // получить в виде строки
};

