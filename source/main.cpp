#include<LaborkaConfig.h>
#include<trygonometria.h>
#include<cmath>
#include<iostream>
 int main()
{ /*...*/ 
  #ifdef USE_TRIGONOMETRY_DEGREE
    std::cout << "USE_TRIGONOMETRY_DEGREE set as TRUE \n";
    double sinRes = degreemath::sin(90);
    double cosRes = degreemath::cos(90);
    double tanRes = degreemath::tan(180);
    double ctgRes = degreemath::ctg(90);
    std::cout << "Sin(90) = " << sinRes << "\n";
    std::cout << "Cos(90) = " << cosRes << "\n";
    std::cout << "Tan(180) = " << tanRes << "\n";
    std::cout << "Ctg(90) = " << ctgRes << "\n";
  #else
    std::cout << "USE_TRIGONOMETRY_DEGREE set as FALSE \n";
    double sinT = sin(90);
    double cosT = cos(90);
    double tanT = tan(180);
    double ctgT = 1/tan(90);
    std::cout << "Sin(90) = " << sinT << "\n";
    std::cout << "Cos(90) = " << cosT << "\n";
    std::cout << "Tan(180) = " << tanT << "\n";
    std::cout << "Ctg(90) = " << ctgT << "\n";
  #endif
  return 0;
} 