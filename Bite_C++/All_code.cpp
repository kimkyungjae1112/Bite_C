//#include <iostream>
//
//int change_val(int* p)
//{
//	*p = 3;
//	return 0;
//}
//
//int main()
//{
//	int number = 5;
//	std::cout << number << std::endl;
//	change_val(&number);
//	std::cout << number << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	int a = 3;
//	int& another_a = a;
//
//	another_a = 5;
//	std::cout << "a : " << a << std::endl;
//	std::cout << "another_a : " << another_a << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int change_val(int& p)
//{
//	p = 3;
//	return 0;
//}
//
//int main()
//{
//	int number = 5;
//	std::cout << number << std::endl;
//	change_val(number);
//	std::cout << number << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	int x;
//	int& y = x;
//	int& z = y;
//
//	x = 1;
//	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//
//	y = 2;
//	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//	
//	z = 3;
//	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//}

//int add()
//{
//	return 10 + 20;
//}
//
//int main()
//{
//	int b = add(); // int func = 10 + 20;
//				   // int b = func;
//}

//#include <iostream> 원래 안되는 코드
//int& fucntion()
//{
//	int a = 2;
//	return a;
//}
//
//int main()
//{
//	int b = fucntion();
//	std::cout << b;
//	return 0;
//}

//#include <iostream>
//
//int& function(int& a)
//{
//	a = 5;
//	return a;
//}
//
//int main()
//{
//	int b = 2;
//	int c = function(b);
//	std::cout << c << std::endl;
//	return 0;
//}

//#include <iostream> 안된다.
//
//int function()
//{
//	int a = 5;
//	return a;
//}
//
//int main()
//{
//	int& c = function();
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int* p = new int;
//	*p = 10;
//
//	std::cout << *p << std::endl;
//	delete p;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int arr_size;
//	std::cout << "array size : ";
//	std::cin >> arr_size;
//	int* list = new int[arr_size];
//	for (int i = 0; i < arr_size; ++i)
//	{
//		std::cin >> list[i];
//	}
//	for (int i = 0; i < arr_size; ++i)
//	{
//		std::cout << i << "th element of list : " << list[i] << std::endl;
//	}
//	delete[] list;
//}

//#include <iostream>
//#include <string>
//struct Animal
//{
//	std::string name;
//	int age;
//	int health;
//	int food;
//	int clean;
//};
//
//void create_animal(Animal* animal)
//{
//	std::cout << "동물의 이름: ";
//	std::cin >> animal->name;
//
//	std::cout << "동물의 나이: ";
//	std::cin >> animal->age;
//
//	animal->health = 100;
//	animal->food = 100;
//	animal->clean = 50;
//}
//
//void play(Animal* animal)
//{
//	animal->health += 10;
//	animal->food -= 20;
//	animal->clean -= 30;
//}
//
//void one_day_pass(Animal* animal)
//{
//	animal->health -= 10;
//	animal->food -= 30;
//	animal->clean -= 20;
//}
//
//void show_stat(Animal* animal)
//{
//	std::cout << animal->name << "의 상태 " << std::endl;
//	std::cout << "체력    : " << animal->health << std::endl;
//	std::cout << "배부름    : " << animal->food << std::endl;
//	std::cout << "청결    : " << animal->clean << std::endl;
//}
//int main()
//{
//	Animal* list[10];
//	int animal_num = 0;
//
//	for (;;)
//	{
//		std::cout << "1. 동물 추가하기" << std::endl;
//		std::cout << "2. 놀기" << std::endl;
//		std::cout << "3. 상태 보기" << std::endl;
//		std::cout << "4. 그만하기" << std::endl;
//		int input;
//		std::cin >> input;
//
//		switch (input)
//		{
//			int play_with;
//		case 1:
//			list[animal_num] = new Animal;
//			create_animal(list[animal_num]);
//
//			animal_num++;
//			break;
//
//		case 2:
//			std::cout << "누구랑 놀게? : ";
//			std::cin >> play_with;
//
//			if (play_with < animal_num) play(list[play_with]);
//			break;
//		case 3:
//			std::cout << "누구껄 보게? : ";
//			std::cin >> play_with;
//			if (play_with < animal_num) show_stat(list[play_with]);
//			break;
//		}
//
//		if (input == 4)
//		{
//			std::cout << "그만 놀자" << std::endl;
//			break;
//		}
//		for (int i = 0; i != animal_num; ++i)
//		{
//			one_day_pass(list[i]);
//		}
//	}
//	for (int i = 0; i != animal_num; ++i)
//	{
//		delete list[i];
//	}
//}

#include <iostream>

class Date
{
	int year_;
	int month_;
	int day_;
	int month_array[13] = { 0, 31, 28, 31,30,31,30,31,31,30,31,30,31 };

public:
	Date(int year, int month, int day);
	void add_day(int inc);
	void add_month(int inc);
	void add_year(int inc);

	void show_data();
};

Date::Date(int year, int month, int day) : year_(year), month_(month), day_(day)
{
	
}

void Date::add_day(int inc)
{
	day_ = (day_ + inc);

	while (day_ > month_array[month_])
	{
		day_ -= month_array[month_];
		add_month(1);

		if ((year_ % 4 == 0 || year_ % 400 == 0) && year_ % 100 != 0)
			month_array[2] = 29;
		else
			month_array[2] = 28;
	}
}

void Date::add_month(int inc)
{
	month_ = month_ + inc;
	while (month_ > 12)
	{
		month_ -= 12;
		year_++;
	}	
}

void Date::add_year(int inc)
{
	year_ += inc;
}

void Date::show_data()
{
	std::cout << "현재 년도 " << year_ << '\n' << "현재 월 " << month_ << '\n' << "현재 일 " << day_ << std::endl;
}

int main()
{
	Date date(2001,11,12);
	date.add_day(8024);
	date.show_data();
}

