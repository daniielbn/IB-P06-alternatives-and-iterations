/**
* Universidad de La laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P97156-numbers_in_an_interval 
* @author Daniel Brito Negrín alu0101585505@ull.edu.es
* @date Nov 8 2022
* @breif Escribe todos los numero en forma de intervalo que hay entre "a" y "b".
* @see https://jutge.org/problems/P97156
*/

#include<iostream>

int main() {
  int numero_1, numero_2;
  std::cin >> numero_1 >> numero_2;
  if (numero_1 <= numero_2) std::cout << numero_1;
  for (int todos_los_numeros = numero_1 + 1; todos_los_numeros <= numero_2;
  todos_los_numeros++) std::cout << "," << todos_los_numeros;
  std::cout << std::endl;
}
