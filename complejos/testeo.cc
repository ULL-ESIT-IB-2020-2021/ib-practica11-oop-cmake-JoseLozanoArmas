#include <iostream>
#include <vector>
#include <string>

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
};





int main (int argc, char* argv[]){
  Complejo complejo_1 {4,5};
  Complejo complejo_2 {7,-8};
  Complejo resultado;
  
  resultado = resultado.Suma(complejo_1,complejo_2);

  if(resultado.c_parte_imaginaria_ < 0){
    resultado.c_parte_imaginaria_ = resultado.c_parte_imaginaria_ * -1;
    std::cout << "Resultado suma = " << resultado.c_parte_real_ << " - " << resultado.c_parte_imaginaria_ << "i" << std::endl;
  } else { 
    std::cout << "Resultado suma = " << resultado.c_parte_real_ << " + " << resultado.c_parte_imaginaria_ << "i" << std::endl;
  }

  
  
 
 
  
}


