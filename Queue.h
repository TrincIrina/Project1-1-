#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Array.h"
// ����� ������� - ��������� ������ ������
class Queue :
    public Array
{
private:
    int front;  // ��������� �� ������ ������� � �������
    int rear;   // ��������� �� ��������� ������� � �������
    int count;  // ������� ������ � �������
public:
    Queue(int size);   // �����������
    // getters
    int get_front();
    int get_rear();
    int get_count();

    int first();       // ������� ������� ��������
    bool is_empty();   // ��������: ����� �� �������
    bool is_full();    // ��������: ������ �� ������

    void de_queue();          // �������� ������� �������� �� �������
    void en_queue(int item);  // ���������� �������� � �������
    std::string to_string();  // �������� � ���� ������
};

