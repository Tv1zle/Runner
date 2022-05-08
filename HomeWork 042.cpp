
#include <iostream>

int main()
{
    int UserSeconds;
    std::cout << "Seconds = ";
    std::cin >> UserSeconds;


    int Days = UserSeconds / 60 / 60 / 24;
    double DaysFormula = Days * 24 * 60 * 60;
    double HoursFormula = UserSeconds - DaysFormula;
    int Hours = HoursFormula / 60 / 60;
    int MinutesFormula = Hours * 60;
    double Minutes = ((UserSeconds / 60) % MinutesFormula) / 60;
    double Seconds = UserSeconds % 60;

    
    std::cout << UserSeconds << " seconds - " << Days << " days, " << Hours << " hours, " << Minutes << " minutes, " << Seconds << " seconds.";




}
