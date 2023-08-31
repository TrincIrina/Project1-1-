#include "Array.h"

Array::Array(int size) :
    size{size}
{
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = 0;
    }
}

Array::Array(const Array& other) :
    size{other.size}
{
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

Array::~Array()
{
    delete[] data;
}

int Array::get_size()
{
    return size;
}

int& Array::Elem(int index)
{
    return data[index];
}

std::string Array::to_string()
{
    std::ostringstream out;
    for (int i = 0; i < size - 1; i++) {
        out << data[i] << " ";
    }
    out << data[size - 1];
    return out.str();
}
