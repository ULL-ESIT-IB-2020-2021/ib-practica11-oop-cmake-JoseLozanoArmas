/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_funciones.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date 27-12-20
  * @brief En este apartado se podrá encontrar las declaraciones del programa complejos_main.cc
  * @bug 
  * @see https://www.internalpointers.com/post/modern-cmake-beginner-introduction
  *      https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/
  *      
  */

#ifndef COMPLEJOS_H
#define COMPLEJOS_H


 class Complejo {
 public:
  int c_parte_real_{};
  int c_parte_imaginaria_{};
  
  Complejo Suma(Complejo complejo_1, Complejo complejo_2);
  void Complejo MostrarSuma();
  Complejo Resta(Complejo complejo_1, Complejo complejo_2);
  void Complejo MostrarResta();
 };
 #endif