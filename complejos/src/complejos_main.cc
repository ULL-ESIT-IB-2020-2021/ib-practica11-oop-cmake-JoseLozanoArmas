/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_funciones.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date 27-12-20
  * @brief El siguiente programa al introducirle una fecha, un número y un fichero de texto. Pondrá en dicho fichero
  *        ún numero de fechas continuas a la antes dada igual al número introducido. 
  * @bug 
  * @see https://www.internalpointers.com/post/modern-cmake-beginner-introduction
  *      https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/
  *      
  */
#include <iostream>
#include <vector>
#include <string>
#include "complejos_funciones.cc"

int main (int argc, char* argv[]){
  Complejo complejo_1 {4,5};
  Complejo complejo_2 {7,-8};
  Complejo resultado;
  resultado = resultado.Suma(complejo_1, complejo_2);
  resultado.MostrarSuma();

  resultado = resultado.Resta(complejo_1, complejo_2);
  resultado.MostrarResta();
  
}