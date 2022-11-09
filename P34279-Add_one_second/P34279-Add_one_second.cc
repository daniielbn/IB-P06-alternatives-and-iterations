/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P34279-maximum_of_three_integer_numbers 
* @author Daniel Brito Negrín alu0101585505@ull.edu.es
* @date Nov 7 2022
* @breif Programa que suma un segundo a la hora que tu escribas
* @see https://jutge.org/problems/P34279
*/

#include<iostream>

int main() {
  int horas, minutos, segundos;
  std::cin >> horas >> minutos >> segundos;

  ++segundos;
  if (segundos == 60) {
    ++minutos;
    segundos = 0;
    if (minutos== 60) {
      ++horas;
      minutos = 0;
    }
    if (horas == 24) {
      horas =0;
    }
  }

  if (horas < 10) {
    std::cout << 0;
  }
  std::cout << horas << ":";
  if (minutos < 10) {
    std::cout << 0;
  }
  std::cout << minutos << ":";
  if (segundos < 10) {
    std::cout << 0;
  }
  std::cout << segundos << std::endl;
}
