/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P90615-maximum_of_three_integer_numbers 
* @author Daniel Brito Negrín alu0101585505@ull.edu.es
* @date Nov 7 2022
* @breif Programa que lee tres numeros enteros y te devuelve el numero entero
*        mayor de esos tres.
* @see https://jutge.org/problems/P90615
*/

#include<iostream>

int main () {
  int numero_1, numero_2, numero_3, maximo_numero;
  std::cin >> numero_1 >> numero_2 >> numero_3;
  if (numero_1 > numero_2 && numero_1 > numero_3) {
    maximo_numero = numero_1;
  }
  else if (numero_2 > numero_3) {
    maximo_numero = numero_2;
  }
  else {
    maximo_numero = numero_3;
  }
  std::cout << maximo_numero << std::endl;
}
