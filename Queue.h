#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Array.h"
// Класс Очередь - наследник класса Массив
class Queue :
    public Array
{
private:
    int front;  // указатель на первый элемент в очереди
    int rear;   // указатель на последний элемент в очереди
    int count;  // текущий размер в очереди
public:
    Queue(int size);   // Конструктор
    // getters
    int get_front();
    int get_rear();
    int get_count();

    int first();       // Возврат первого элемента
    bool is_empty();   // Проверка: пуста ли очередь
    bool is_full();    // Проверка: полный ли массив

    void de_queue();          // Удаление первого элемента из очереди
    void en_queue(int item);  // Добавление элемента в очередь
    std::string to_string();  // получить в виде строки
};

