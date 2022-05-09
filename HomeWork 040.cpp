
#include <iostream>

int main()
{
    double Distance;
    std::cout << "Distance(KM) = ";
    std::cin >> Distance;


    double Speed;
    std::cout << "Speed(KM/H) = ";
    std::cin >> Speed;


    int InHours = Distance / Speed;
    int InMinutes = InHours * 60;
    int InSeconds = InMinutes * 60;


    std::cout <<"Human run in hours: " << InHours << "\n";
    std::cout << "Human run in minutes: " << InMinutes << "\n";
    std::cout << "Human run in seconds: " << InSeconds << "\n";

}

