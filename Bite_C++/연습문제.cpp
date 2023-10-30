//#include <iostream>
//
//using namespace std;
//
//class Date
//{
//	int year_;
//	int month_;
//	int day_;
//
//public:
//	void SetDate(int year, int month, int date)
//	{
//		year_ = year;
//		month_ = month;
//		day_ = date;
//	}
//	void AddDay(int inc)
//	{	//1,3,5,7,8,10,12 -> 31일       4,6,9,11 -> 30일 
//		if (month_ == 2)
//		{
//			day_ += inc;
//			while (day_ > 28)
//			{
//				day_ -= 28;
//				++month_;
//			}
//		}
//		else if (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11)
//		{
//			day_ += inc;
//			while (day_ > 30)
//			{
//				day_ -= 30;
//				++month_;
//			}
//		}
//		else
//		{
//			day_ += inc;
//			while (day_ > 31)
//			{
//				day_ -= 31;
//				++month_;
//			}
//		}
//
//		while (month_ > 12)
//		{
//			++year_;
//			month_ -= 12;
//		}
//	}
//
//	void AddMonth(int inc)
//	{
//		month_ += inc;
//		while (month_ > 12)
//		{
//			++year_;			
//			month_ -= 12;
//		}
//	}
//
//	void AddYear(int inc)
//	{
//		year_ += inc;
//	}
//
//	void ShowDate()
//	{
//		cout << year_ << "년 " << month_ << "월 " << day_ << "일";
//	}
//};
//
//int main()
//{
//	Date date;
//
//	date.SetDate(2001, 11, 12);
//	date.AddDay(7928);
//	date.ShowDate();
//	return 0;
//}
//

/*#include <iostream>

using namespace std;

class Date
{
	int year_;
	int month_;
	int day_;

public:
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);

	int GetCurrentMonthTotalDays(int year, int month);

	void ShowDate();

	Date(int year, int month, int day)
	{
		year_ = year;
		month_ = month;
		day_ = day;
	}
	Date() {}
};

int Date::GetCurrentMonthTotalDays(int year, int month)
{
	static int month_day[12] = { 31, 28 ,31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month != 2)
	{
		return month_day[month - 1];
	}
	else if (year % 4 == 0 && year % 100 != 0)
	{
		return 29;
	}
	else
	{
		return 28;
	}
}

void Date::AddDay(int inc)
{
	while (true)
	{
		int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);

		if (day_ + inc <= current_month_total_days)
		{
			day_ += inc;
			return;
		}
		else
		{
			inc -= (current_month_total_days - day_ + 1);
			day_ = 1;
			AddMonth(1);
		}
	}
}

void Date::AddMonth(int inc)
{
	AddYear((inc + month_ - 1) / 12);
	month_ = month_ + inc % 12;
	month_ = (month_ == 12 ? 12 : month_ % 12);
}

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate()
{
	cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
		<< " 일 입니다. " << endl;
}

int main()
{
	Date day(2001, 11, 12);
	day.AddDay(7931);
	day.ShowDate();
	return 0;
}*/

/*#include <iostream>

using namespace std;

class Point
{
public:
	int x, y;

public:
	Point(int pos_x, int pos_y)
	{
		x = pos_x;
		y = pos_y;
	}
};

class Geometry
{
private:
	// 점 100 개를 보관하는 배열.
	Point* point_array[100] = {NULL};
	int num_points;

public:
	Geometry() : num_points(0)
	{
	}

	void AddPoint(const Point& point)
	{
		point_array[num_points++] = new Point(point.x, point.y);
	}

	// 모든 점들 간의 거리를 출력하는 함수 입니다.
	void PrintDistance();

	// 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수 입니다.
	// 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
	// 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
	// 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
	void PrintNumMeets();
};

void Geometry::PrintDistance()
{
	for (int i = 0; i < 100; ++i)
	{
		for (int j = i + 1; j < 99; ++j)
		{
			cout << i << "번째와 " << j << "번째의 거리" << sqrt(pow((point_array[i]->x - point_array[j]->x), 2) + pow((point_array[i]->y - point_array[j]->y), 2)) << endl;
		}
	}
}

void Geometry::PrintNumMeets()
{

}

int main()
{
	Geometry geo;
	Point ptr(1, 1);
	Point ptr1(3, 3);
	geo.AddPoint(ptr);
	geo.AddPoint(ptr1);
	geo.PrintDistance();
}*/

//stirng 클래스 구현해보기
//#include <iostream>
//
//class String
//{
//	char c;
//	char* str;
//
//public:
//	int length(char* str);
//};