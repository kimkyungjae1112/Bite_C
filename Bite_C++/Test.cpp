//생성자와 소멸자 호출 순서

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
//		std::cout << "생성자 호출"<< c << std::endl;
//	}
//	~Test()
//	{
//		std::cout << "소멸자 호출" << c << std::endl;
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


//레퍼런스를 리턴하는 함수

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

//복사 생성이 몇번이나 될까요?
/*#include <iostream>

class A
{
	int x;
	
public:
	A(int c) : x(c) {}
	A(const A& a)
	{
		x = a.x;
		std::cout << "복사 생성" << std::endl;
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
객체를 생성하는 방법에는 대표적으로 4가지가 있다.

1. 기본 초기화 A a
2. 직접 초기화 A a(1)
3. 복사 초기화 A a = A(1)
4. 대입 초기화 A a = 1 -> 정수 1을 매개변수로 갖는 임시 객체를 만든 후 대입
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
//	std::cout << "복사 생성자 호출!!!!" << std::endl;
//}
//void A::myfunction(int a)
//{
//	a = 42;
//	std::cout << "복사 호출: " << a << std::endl;
//}
//
//void A::myfunction2(int& a)
//{
//	a = 42;
//	std::cout << "참조 호출: " << a << std::endl;
//}
//
//void A::myfunction3(A b)
//{
//	b.a = 42;
//	std::cout << "객체 복사 호출: " << b.a << std::endl;
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
//	printf("%d\n", &ref1);  //ref1의 주소 값(참조자)
//	printf("%d\n", ref2);   //ref2가 가르키는 주소 값(참조 포인터)
//	printf("%d\n", p);      //p가 가르키는 주소 값
//	printf("%d\n", &num_1); //num_1의 주소 값
//	printf("%d\n", &ref2);  //ref2의 주소 값
//
//}

//#include <iostream>
//class Base
//{
//	std::string s;
//
//public:
//	Base() : s("기반")
//	{
//		std::cout << "기반 클래스" << std::endl;
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
//	Derived() : Base(), s("파생")
//	{
//		std::cout << "파생 클래스" << std::endl;
//
//		what();
//	}
//};
//
//int main()
//{
//	std::cout << " === 기반 클래스 생성 ===" << std::endl;
//	Base p;
//
//	std::cout << " === 파생 클래스 생성 ===" << std::endl;
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