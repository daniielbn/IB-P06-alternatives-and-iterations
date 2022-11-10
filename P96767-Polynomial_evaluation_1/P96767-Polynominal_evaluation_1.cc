/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
*
* @file Write a program that reads a number x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).
* @date 10 Nov 2022
* @breif Write a program that reads a number and prints its binary representation reversed.
* @author Daniel Brito Negrín alu0101585505@ull.edu.es
* @see https://jutge.org/problems/P28754
*/

#include<iostream>
#include<iomanip>

int main() {
  double variable_x;
  std::cin >> variable_x;
  int coeficiente_q;
  int exponente{1};
  double suma{0};
  while (std::cin >> coeficiente_q) {
    suma = suma + coeficiente_q * exponente;
    exponente = exponente * variable_x;
  }
  std::cout << std::fixed << std::setprecision(4) << suma << std::endl;
}
    
  
