/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P98960-Uppercase_and_lowercase_letters.cc
* @author Daniel Brito Negrín alu0101585505@ull.edu.es
* @date Nov 7 2022
* @breif Programa que lee una letra (mayúscula o minúscula) y devuelve la mi
*        sma letra, en caso de ser mayúscula devuelve una minúsucla, y
*        viceseversa
* @see https://jutge.org/problems/P98960
*/

#include<iostream>

int main () {
  char letra;
  std::cin >> letra;
  if (letra >= 97) {
    char letra_mayuscula = letra - 32;
    std::cout << letra_mayuscula << std::endl;
  }
  else {
    char letra_minuscula = letra + 32;
    std::cout << letra_minuscula << std::endl;
  }
}
