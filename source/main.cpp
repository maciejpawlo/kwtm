#include<trygonometria.h>
#include<cmath>
#include<iostream>
 int main()
{ /*...*/ 
  double sin = degreemath::sin(90);
  std::cout << "Sin(90) = " << sin << "\n";
  double cos = degreemath::cos(90);
  std::cout << "Cos(90) = " << cos << "\n";
  double tan = degreemath::tan(180);
  std::cout << "Tan(180) = " << tan << "\n";
  double ctg = degreemath::ctg(90);
  std::cout << "Ctg(90) = " << ctg << "\n";
  return 0;
} 