
#include <iostream>

int main()
{
    double Distance;
    std::cout << "Distance(KM) = ";
    std::cin >> Distance;


    double Speed;
    std::cout << "Speed(KM/H) = ";
    std::cin >> Speed;

    Speed *= 1000;
    int Time = Distance / Speed;
    int InHours = Time / 3600;
    int InMinutes = (Time - InHours * 3600) / 60;
    int InSeconds = Time - (InHours * 3600 + InMinutes * 60);


    std::cout <<"Human run in hours: " << InHours << "\n";
    std::cout << "Human run in minutes: " << InMinutes << "\n";
    std::cout << "Human run in seconds: " << InSeconds << "\n";

}

