
#include <iostream>

int main()
{
    double WeightInTons;
    std::cout << "Weight in tons = ";
    std::cin >> WeightInTons;


    int Tons = WeightInTons;
    double KilogramsFormula = (WeightInTons - Tons) * 1000;
    int Kilograms = KilogramsFormula;
    double GramsFormula = (WeightInTons - Tons) * 1000;
    double Grams = (GramsFormula - Kilograms) * 1000;


    std::cout << "Answer = " << Tons << " T. " << Kilograms << " Kg. " << Grams << " Gr." << "\n";

}
