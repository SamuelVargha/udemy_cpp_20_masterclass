#include <iostream>
#include <iomanip>

int main (){
    
    int year = 0, firstDay = 0;
    std::cout << "Enter a year:" << std::endl;
    std::cin >> year;
    std::cout << "Enter the first day of the year [1: Monday, ... 7: Sunday]: ";
    std::cin >> firstDay;

  std::cout << std::endl;
  std::cout << "Calendar for 2020" << std::endl;

  int number_of_days_in_a_month = 0;
  int starting_point{firstDay};
  int day_counter{0};
  int date_width{6};

  for (int month = 1; month <= 12; month++)
  {
    switch (month)
    {
      case 1:
        number_of_days_in_a_month = 31;
        std::cout << "--January " << year <<  " --" << std::endl;
      break;
      case 2:
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
          number_of_days_in_a_month = 29;
        else
          number_of_days_in_a_month = 28;
        std::cout << "--February " << year <<  " --" << std::endl;

      break;
      case 3:
        number_of_days_in_a_month = 31;
        std::cout << "--March " << year <<  " --" << std::endl;

      break;
      case 4:
        number_of_days_in_a_month = 30;
        std::cout << "--April " << year <<  " --" << std::endl;
      break;
      case 5:
        number_of_days_in_a_month = 31;
        std::cout << "--May " << year <<  " --" << std::endl;
      break;
      case 6:
        number_of_days_in_a_month = 30;
        std::cout << "--June " << year <<  " --" << std::endl;
      break;
      case 7:
        number_of_days_in_a_month = 31;
        std::cout << "--July " << year <<  " --" << std::endl;
      break;
      case 8:
        number_of_days_in_a_month = 31;
        std::cout << "--August " << year <<  " --" << std::endl;
      break;
      case 9:
        number_of_days_in_a_month = 30;
        std::cout << "--September " << year <<  " --" << std::endl;
      break;
      case 10:
        number_of_days_in_a_month = 31;
        std::cout << "--October " << year <<  " --" << std::endl;
      break;
      case 11:
        number_of_days_in_a_month = 30;
        std::cout << "--November " << year <<  " --" << std::endl;
      break;
      case 12:
        number_of_days_in_a_month = 31;
        std::cout << "--December " << year <<  " --" << std::endl;
      break;
    }

    std::cout<< std::setw(date_width) << "Mon"
        << std::setw(date_width) << "Tue"
        << std::setw(date_width) << "Wed"
        << std::setw(date_width) << "Thu"
        << std::setw(date_width) << "Fri"
        << std::setw(date_width) << "Sat"
        << std::setw(date_width) << "Sun" << std::endl;

    for(unsigned int j{1};j < starting_point; ++j){
      std::cout << std::setw(date_width) <<  ""; 
      ++ day_counter;
      if(day_counter == 7){
        std::cout << std::endl;
        day_counter = 0;
      }

      
    }

    for(unsigned int i{1} ; i <= number_of_days_in_a_month; ++i){ 
      std::cout << std::setw(date_width) << i;
      ++day_counter;

      if(day_counter == 7){
        std::cout << std::endl;
        day_counter = 0;
      }      
       
    }

    starting_point = day_counter + 1;
    day_counter = 0;
    std::cout <<  "\n\n";
  }

  return 0;
}