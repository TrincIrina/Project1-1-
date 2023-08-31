#include "Stack.h"

Stack::Stack(int size) :
    Array(size), count{ 0 }
{
}

bool Stack::push(int value)
{
    if (count < size) {
        data[count++] = value;
        return true;
    }
    return false; 
}

bool Stack::pop()
{
    if(count == 0){
        return false;
    }
    count--;
    return true;
}

int Stack::top()
{
    return data[count - 1];
}

bool Stack::is_empty()
{
    return count == 0;
}

int Stack::get_count()
{
    return count;
}

std::string Stack::to_string()
{
    if (count == 0)
        return "empty";
    std::ostringstream out;
    for (int i = 0; i < count - 1; i++) {
        out << data[i] << " ";
    }
    out << data[count - 1];
    return out.str();
}
