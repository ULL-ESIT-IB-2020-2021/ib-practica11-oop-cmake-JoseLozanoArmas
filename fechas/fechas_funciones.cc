/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_funciones.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date 22-12-20
  * @brief En este apartado encontrará las funciones que ponen en marcha el programa, asi como algunos comentarios
  * sobre las mismas. 
  * @bug 
  * @see https://www.internalpointers.com/post/modern-cmake-beginner-introduction
  *      https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/
  *      
  */

#include <iostream>
#include "fechas.h"

class Fecha {
 public: 
 void Mostrar(){
    std::cout << "La fecha introducida fue " << dia_ << '/' << mes_ << '/' << anio_ << std::endl;
  }
  
  int anio_{};
  int mes_{};
  int dia_{};
 private:
 
};






bool CondicionBisiesto(int numero_evaluar){   ///comenzamos evaluando si el año es bisiesto o no
  if ((numero_evaluar % 4 == 0) && (numero_evaluar % 100 != 0) || (numero_evaluar % 400 == 0)) {
    return "Es bisiesto";
  } else { 
    return "No es bisiesto";
  }
}

void AjustarHorario(int mes, int anyo, int dia){ ///He decidio dividir esta funcion en dos funciones explicadas mas adelante
  AjustarNumeroMes(mes,anyo,dia);
  AjustarDiasMes(mes,anyo,dia);
}



void AjustarNumeroMes (int mes, int anyo, int dia){ ///Para evitar meses mayores a 12
  if (mes > 12) { 
    mes = 1;
    anyo = anyo + 1;
    dia = 1;
  }
}

void AjustarDiasMes(int mes, int anyo, int dia){ ///Las condiciones de cada mes de cara a los días
if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
    if (dia > 31){
      dia = 1;
      mes = mes + 1;
    }
  }

  if (mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
    if (dia > 30){
      dia = 1;
      mes = mes + 1;
    }
  }
  if (mes == 2){  ///Decidí que pese a todo febrero siempre fuese de 28 días
    if(dia > 28){
      dia = 1;
      mes = mes + 1;
    }
  }
}

void Errores(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << argv[0] << "- Gestión de fechas" << std::endl;
    std::cout << "Modo de uso: ./fechas dd/mm/aa N fichero_salida.txt" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};

  if (parameter == "--help") {
    std::cout << "El siguiente programa, muestra a traves de los parametros dados siendo: " << std::endl;
    std::cout << "fecha----numero de fechas----texto de salida" << std::endl;
    std::cout << "una cantidad de fechas igual al numero introducido, de fechas continuas a la introducida" << std::endl;
    std::cout << "en el fichero resultado" << std::endl;
    exit(EXIT_SUCCESS);
  }
}