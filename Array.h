#pragma once

#include <string>
#include <sstream>

// Класс "Одномерный динамический массив"
class Array
{
protected:
	int size;	// размер
	int* data;	// данные массива

public:
	Array(int size);				// конструктор с параметром
	Array(const Array& other);		// конструктор копирования
	~Array();						// деструктор
	int get_size();
	int& Elem(int index);			// getters & setter
	
	std::string to_string();		// получение в виде строки
};
