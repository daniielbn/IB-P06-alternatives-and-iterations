/**
* Universidad de La laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P59539-harmonic_numbers_1 
* @author Daniel Brito Negrín alu0101585505@ull.edu.es
* @date Nov 8 2022
* @breif Programa que da el número armónico de N. 
* @see https://jutge.org/problems/P59539
*/

#include<iostream>
#include<iomanip>

int main() {
  unsigned int numero{0};
  double suma{0.0};
  std::cin >> numero;
  for(double i = 1; i <= numero; i++) {
    suma += 1.0/i;
  }
  std::cout << std::fixed << std::setprecision(4) << suma << std::endl;
  return 0;
}
