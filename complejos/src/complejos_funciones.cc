/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_funciones.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date 27-12-20
  * @brief En este apartado se podrá encontrar las funciones del programa complejos_main.cc
  * @bug 
  * @see https://www.internalpointers.com/post/modern-cmake-beginner-introduction
  *      https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/
  *      
  */

#include <iostream>

class Complejo {
 public:
  int c_parte_real_{};
  int c_parte_imaginaria_{};
  
  Complejo Suma(Complejo complejo_1, Complejo complejo_2){
  Complejo resultado;
  int resultado_real = complejo_1.c_parte_real_ + complejo_2.c_parte_real_;
  int resultado_imaginario = complejo_1.c_parte_imaginaria_ + complejo_2.c_parte_imaginaria_;
  resultado = {resultado_real, resultado_imaginario};
  return resultado;
  }

  void MostrarSuma(){
    if(c_parte_imaginaria_ < 0){
    c_parte_imaginaria_ = c_parte_imaginaria_ * -1;
    std::cout << "Resultado suma = " << c_parte_real_ << " - " << c_parte_imaginaria_ << "i" << std::endl;
  } else { 
    std::cout << "Resultado suma = " << c_parte_real_ << " + " << c_parte_imaginaria_ << "i" << std::endl;
  }
  }

  Complejo Resta(Complejo complejo_1, Complejo complejo_2){
  Complejo resultado;
  int resultado_real = complejo_1.c_parte_real_ - complejo_2.c_parte_real_;
  int resultado_imaginario = complejo_1.c_parte_imaginaria_ - complejo_2.c_parte_imaginaria_;
  resultado = {resultado_real, resultado_imaginario};
  return resultado;
  }

  void MostrarResta(){
    if(c_parte_imaginaria_ < 0){
    c_parte_imaginaria_ = c_parte_imaginaria_ * -1;
    std::cout << "Resultado resta = " << c_parte_real_ << " - " << c_parte_imaginaria_ << "i" << std::endl;
  } else { 
    std::cout << "Resultado resta = " << c_parte_real_ << " + " << c_parte_imaginaria_ << "i" << std::endl;
  }
  }


  
};