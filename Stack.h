#pragma once
#include <string>
#include <sstream>
#include "Array.h"
// ����� Stack - ��������� ������ Array
class Stack :
    public Array
{
protected:
    int count;  // ���������� ��������� � ������
public:
    Stack(int size);
    bool push(int value); // ���������� �������� 
    bool pop();           // �������� ��������
    int top();            // ���������� �������� �����
    bool is_empty();      // �������� ������ �� ����
    int get_count();      // �������� ���������� ��������� � �����
    std::string to_string();  // �������� � ���� ������
};

