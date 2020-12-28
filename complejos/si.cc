#include <iostream>
 
class DateClass {
 private:
  int year_{};  // Initialize to 0
  int month_{};
  int day_{};
 
 public:
  void Print() {
    std::cout << day_ << '/' << month_ << '/' << year_ << std::endl;
  }
  int GetMonth() { return month_; } // getter for month
  void SetMonth(int month) { month_ = month; } // setter for month
 
  int GetDay() { return day_; } // getter for day
  void SetDay(int day) { day_ = day; } // setter for day
 
  int GetYear() { return year_; } // getter for year
  void SetYear(int year) { year_ = year; } // setter for year
};
 
int main() {
  DateClass today;
  today.SetDay(10);
  today.SetMonth(12);
  today.SetYear(2020);
  today.Print(); 
  return 0;
}
