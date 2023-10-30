//#include <iostream>
//#include <string.h>
//
//class MyString
//{
//	char* string_content;  // ���ڿ� �����͸� ����Ű�� ������
//	int string_length;     // ���ڿ� ����
//	int capacity;
//
//public:
//	// ���� �ϳ��� ����
//	MyString(char c);
//
//	// ���ڿ��� ���� ����
//	MyString(const char* str);
//
//	// ���� ������
//	MyString(const MyString& str);
//
//
//	int length() const;
//	int capa() const
//	{
//		return capacity;
//	}
//
//	void print() const;
//	void println() const;
//};
//
//MyString::MyString(char c)
//{
//	string_content = new char[1];
//	string_content[0] = c;
//	string_length = 1;
//	capacity = 1;
//}
//
//MyString::MyString(const char* str)
//{
//	string_length = strlen(str);
//	capacity = string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++)
//	{
//		string_content[i] = str[i];
//	}
//}
//
//MyString::MyString(const MyString& str)
//{
//	string_length = str.string_length;
//	capacity = str.string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++)
//	{
//		string_content[i] = str.string_content[i];
//	}
//}
//
//
//int MyString::length() const { return string_length; }
//void MyString::print() const
//{
//	for (int i = 0; i < string_length; ++i)
//	{
//		std::cout << string_content[i];
//	}
//}
//void MyString::println() const
//{
//	for (int i = 0; i < string_length; ++i)
//	{
//		std::cout << string_content[i];
//	}
//	std::cout << std::endl;
//}
//
//int main()
//{
//	MyString string("�����");
//	MyString string2("�質����");
//	MyString string3("��");
//	
//	std::cout << "���ڿ� ���� : " << string.length() << std::endl;
//	std::cout << "�޸� �뷮 : " << string.capa() << std::endl;
//	string = string2;
//	std::cout << "���ڿ� ���� : " << string.length() << std::endl;
//	std::cout << "�޸� �뷮 : " << string.capa() << std::endl;
//
//	string = string3;
//	std::cout << "���ڿ� ���� : " << string.length() << std::endl;
//	std::cout << "�޸� �뷮 : " << string.capa() << std::endl;
//	
//}