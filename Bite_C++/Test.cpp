//�����ڿ� �Ҹ��� ȣ�� ����

//#include <iostream>
//
//class Test
//{
//	char c;
//
//public:
//	Test(char c_)
//	{
//		c = c_;
//		std::cout << "������ ȣ��"<< c << std::endl;
//	}
//	~Test()
//	{
//		std::cout << "�Ҹ��� ȣ��" << c << std::endl;
//	}
//};
//
//void simple_function()
//{
//	Test b('b');
//}
//
//int main()
//{
//	Test a('a');
//	simple_function();
//}


//���۷����� �����ϴ� �Լ�

//#include <iostream>
//
//class A
//{
//	int x;
//public:
//	A(int c) : x(c) {}
//
//	int& access_x() { return x; }
//	int get_x() { return x; }
//	void show_x() { std::cout << x << std::endl; }
//};
//
//int main()
//{
//	A a(5);
//	a.show_x();
//
//	int& c = a.access_x();
//	c = 4;
//	a.show_x();
//
//	int d = a.access_x();
//	d = 3;
//	a.show_x();
//
//	int f = a.get_x();
//	f = 1;
//	a.show_x();
//
//	int b = 10;
//	int& c = b;
//}

//���� ������ ����̳� �ɱ��?
/*#include <iostream>

class A
{
	int x;
	
public:
	A(int c) : x(c) {}
	A(const A& a)
	{
		x = a.x;
		std::cout << "���� ����" << std::endl;
	}
};

class B
{
	A a;

public:
	B(int c) : a(c){}
	B(const B& b) : a(b.a) {}
	A get_A()
	{
		A temp(a);
		return temp;
	}
};

int main()
{
	B b(10);
	
	std::cout << "---------" << std::endl;
	A a1 = b.get_A();
}
*/


/*
#include <iostream>

class A
{
	int a;
public:
	A(int a);
};

A::A(int a)
{
	this->a = a;
	std::cout << this->a;
}
��ü�� �����ϴ� ������� ��ǥ������ 4������ �ִ�.

1. �⺻ �ʱ�ȭ A a
2. ���� �ʱ�ȭ A a(1)
3. ���� �ʱ�ȭ A a = A(1)
4. ���� �ʱ�ȭ A a = 1 -> ���� 1�� �Ű������� ���� �ӽ� ��ü�� ���� �� ����
int main()
{
	A a = 1;

}*/

//#include <iostream>
//
//class A
//{
//public:
//	int a;
//
//public:
//	A(int a) : a(a) {}
//	A(const A& b);
//
//	void myfunction(int a);
//	void myfunction2(int& a);
//	void myfunction3(A b);
//	void print_this();
//	A* return_A();
//};
//
//A::A(const A& b)
//{
//	a = b.a;
//	std::cout << "���� ������ ȣ��!!!!" << std::endl;
//}
//void A::myfunction(int a)
//{
//	a = 42;
//	std::cout << "���� ȣ��: " << a << std::endl;
//}
//
//void A::myfunction2(int& a)
//{
//	a = 42;
//	std::cout << "���� ȣ��: " << a << std::endl;
//}
//
//void A::myfunction3(A b)
//{
//	b.a = 42;
//	std::cout << "��ü ���� ȣ��: " << b.a << std::endl;
//}
//
//void A::print_this()
//{
//	std::cout << this << std::endl;
//}
//A* A::return_A()
//{
//	return this;
//}
//int main()
//{
//	A a(10);
//
//	int num_1 = 111;
//	int* p = &num_1;
//
//	int& ref1 = p;
//	int* (&ref2) = p;
//
//
//	printf("%d\n", &ref1);  //ref1�� �ּ� ��(������)
//	printf("%d\n", ref2);   //ref2�� ����Ű�� �ּ� ��(���� ������)
//	printf("%d\n", p);      //p�� ����Ű�� �ּ� ��
//	printf("%d\n", &num_1); //num_1�� �ּ� ��
//	printf("%d\n", &ref2);  //ref2�� �ּ� ��
//
//}

//#include <iostream>
//class Base
//{
//	std::string s;
//
//public:
//	Base() : s("���")
//	{
//		std::cout << "��� Ŭ����" << std::endl;
//	}
//
//	void what()
//	{
//		std::cout << s << std::endl;
//	}
//};
//
//class Derived : public Base
//{
//	std::string s;
//
//public:
//	Derived() : Base(), s("�Ļ�")
//	{
//		std::cout << "�Ļ� Ŭ����" << std::endl;
//
//		what();
//	}
//};
//
//int main()
//{
//	std::cout << " === ��� Ŭ���� ���� ===" << std::endl;
//	Base p;
//
//	std::cout << " === �Ļ� Ŭ���� ���� ===" << std::endl;
//	Derived c;
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class TestClass
//{
//public:
//	TestClass() {}
//	TestClass(const TestClass& other)
//	{
//		std::cout << "TestClass(TestClass)" << std::endl; 
//	}
//
//	TestClass& operator=(const TestClass& rhs)
//	{
//		std::cout << "TestClass operator = " << std::endl;
//		return *this;
//	}
//};
//
//class TestTotalClass
//{
//public:
//	TestTotalClass(TestClass& InTestClass)
//	{
//		a = InTestClass;
//	}
//	TestClass a;
//};
//
//class TestTotalClass2
//{
//public:
//	TestTotalClass2(TestClass& InTestClass) :
//		a(InTestClass)
//	{
//	}
//	TestClass a;
//};
//
//int main()
//{
//	TestClass a;
//	std::cout << "TestTotalClass" << std::endl;
//	TestTotalClass b(a);
//	std::cout << "TestTotalClass2" << std::endl;
//	TestTotalClass2 c(a);
//}