#pragma once

#include <string>
#include <sstream>

// ����� "���������� ������������ ������"
class Array
{
protected:
	int size;	// ������
	int* data;	// ������ �������

public:
	Array(int size);				// ����������� � ����������
	Array(const Array& other);		// ����������� �����������
	~Array();						// ����������
	int get_size();
	int& Elem(int index);			// getters & setter
	
	std::string to_string();		// ��������� � ���� ������
};
