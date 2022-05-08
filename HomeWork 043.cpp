
#include <iostream>

int main()
{
    int Hours;
    std::cout << "Call start and end time (hours): \n";
    std::cin >> Hours;


    int Minutes;
    std::cout << "Call start and end time (minutes): \n";
    std::cin >> Minutes;


    int Seconds;
    std::cout << "Call start and end time (seconds): \n";
    std::cin >> Seconds;


    double HoursInSeconds = Hours * 60 * 60;
    double MinutesInSeconds = Minutes * 60;
    double AllTime = HoursInSeconds + MinutesInSeconds + Seconds;
    double Billing = 15.0 / 60; //тогда мы узнаем, сколько стоит одна секунда.
    double PerSecondBilling = AllTime / Billing;


    std::cout << "The call cost is " << PerSecondBilling << "\n";





}
