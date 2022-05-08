
#include <iostream>

int main()
{
    double Distance;
    std::cout << "Distance(KM) = ";
    std::cin >> Distance;


    double Speed;
    std::cout << "Speed(KM/H) = ";
    std::cin >> Speed;


    double InHours = Distance / Speed;
    double InMinutes = InHours * 60;
    double InSeconds = InMinutes * 60;


    std::cout <<"Human run in hours: " << InHours << "\n";
    std::cout << "Human run in minutes: " << InMinutes << "\n";
    std::cout << "Human run in seconds: " << InSeconds << "\n";

}

