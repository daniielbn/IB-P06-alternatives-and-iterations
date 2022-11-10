/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
*
* @file P28754-Reversed_number_in_binary.cc
* @date 10 Nov 2022
* @breif Write a program that reads a number and prints its binary representation reversed.
* @author Daniel Brito Negrín alu0101585505@ull.edu.es
* @see https://jutge.org/problems/P28754
*/

#include<iostream>

int main() {
  int numero;
  std::cin >> numero;
  while (numero > 1) {
    std::cout << numero % 2;
    numero = numero / 2;
  }
  std::cout << numero << std::endl;
} 
