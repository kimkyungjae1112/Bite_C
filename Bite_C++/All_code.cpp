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

//#include <iostream> ���� �ȵǴ� �ڵ�
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

//#include <iostream> �ȵȴ�.
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

#include <iostream>
#include <string>
struct Animal
{
	std::string name;
	int age;
	int health;
	int food;
	int clean;
};

void create_animal(Animal* animal)
{
	std::cout << "������ �̸�: ";
	std::cin >> animal->name;

	std::cout << "������ ����: ";
	std::cin >> animal->age;

	animal->health = 100;
	animal->food = 100;
	animal->clean = 50;
}

void play(Animal* animal)
{
	animal->health += 10;
	animal->food -= 20;
	animal->clean -= 30;
}

void one_day_pass(Animal* animal)
{
	animal->health -= 10;
	animal->food -= 30;
	animal->clean -= 20;
}

void show_stat(Animal* animal)
{
	std::cout << animal->name << "�� ���� " << std::endl;
	std::cout << "ü��    : " << animal->health << std::endl;
	std::cout << "��θ�    : " << animal->food << std::endl;
	std::cout << "û��    : " << animal->clean << std::endl;
}
int main()
{
	Animal* list[10];
	int animal_num = 0;

	for (;;)
	{
		std::cout << "1. ���� �߰��ϱ�" << std::endl;
		std::cout << "2. ���" << std::endl;
		std::cout << "3. ���� ����" << std::endl;

		int input;
		std::cin >> input;

		switch (input)
		{
			int play_with;
		case 1:
			list[animal_num] = new Animal;
			create_animal(list[animal_num]);

			animal_num++;
			break;

		case 2:
			std::cout << "������ ���? : ";
			std::cin >> play_with;

			if (play_with) play(list[play_with]);
			break;
		case 3:
			std::cout << "������ ����? : ";
			std::cin >> play_with;
			if (play_with < animal_num) show_stat(list[play_with]);
			break;
		}

		for (int i = 0; i != animal_num; ++i)
		{
			one_day_pass(list[i]);
		}
	}
	for (int i = 0; i != animal_num; ++i)
	{
		delete list[i];
	}
}