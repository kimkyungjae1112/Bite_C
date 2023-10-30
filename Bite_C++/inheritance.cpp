//#include <iostream>
//#include <string>
//
//class Employee
//{
//protected:
//	std::string name;
//	int age;
//	
//	std::string position;
//	int rank;
//	
//public:
//	Employee(std::string name, int age, std::string position, int rank) 
//		: name(name), age(age), position(position), rank(rank){ }
//	
//	Employee(const Employee& employee)
//	{
//		name = employee.name;
//		age = employee.age;
//		position = employee.position;
//		rank = employee.rank;
//	}
//	Employee(){}
//
//	virtual int calculator()
//	{
//		return 200 + 50 * rank;
//	}
//	
//	virtual void print_info()
//	{
//		std::cout << name << " (" << age << " , " << position << " , " << rank << ") ==>" << calculator() << "만원" << std::endl;
//	}
//};
//
//class Manager : public Employee
//{
//	int year_of_service;
//
//public:
//	Manager(std::string name, int age, std::string position, int rank, int year_of_service)
//		: year_of_service(year_of_service), Employee(name, age, position, rank) { }
//	Manager(const Manager& manager)
//		: Employee(manager.name, manager.age, manager.position, manager.rank)
//	{
//		year_of_service = manager.year_of_service;
//	}
//	Manager() : Employee(){}
//
//	int calculator() override
//	{
//		return 200 + 50 * rank + 5 * year_of_service;
//	}
//	void print_info() override
//	{
//		std::cout << name << " (" << age << " , " << position << " , " << rank << " , " << year_of_service << "년차"
//			<< ") ==>" << calculator() << "만원" << std::endl;
//	}
//};
//
//class EmployeeList
//{
//	int alloc_employee;
//	int current_employee;
//
//	Employee** employee_list;
//
//public:
//	EmployeeList(int alloc_employee) : alloc_employee(alloc_employee)
//	{
//		employee_list = new Employee * [alloc_employee];
//		current_employee = 0;
//	}
//
//	void add_employee(Employee* employee)
//	{
//		employee_list[current_employee] = employee;
//		current_employee++;
//	}
//
//	int currrent_employee_num() { return current_employee; }
//
//	void print_employee_info()
//	{
//		int total_pay = 0;
//		for (int i = 0; i < current_employee; ++i)
//		{
//			employee_list[i]->print_info();
//			total_pay += employee_list[i]->calculator();
//		}
//		std::cout << "총 비용 : " << total_pay << std::endl;
//	}
//};
//
//int main()
//{
//	EmployeeList emp_list(10);
//	emp_list.add_employee(new Manager("유재석", 42, "부장", 4, 15));
//	emp_list.add_employee(new Employee("김경재", 23, "인턴", 1));
//	emp_list.print_employee_info()
//}

//#include <iostream>

//class Base
//{
//	std::string s;
//
//public:
//	Base() : s("base"){}
//
//	virtual void what()
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
//	Derived() : s("derived"), Base() { }
//
//	void what()
//	{
//		std::cout << s << std::endl;
//	}
//};
//
//int main()
//{
//	Base p;
//	Derived c;
//
//	Base p_p = Derived();
//}