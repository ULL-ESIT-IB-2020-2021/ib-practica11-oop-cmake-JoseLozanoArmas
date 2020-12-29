/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_funciones.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date 22-12-20
  * @brief El siguiente programa al introducirle una fecha, un número y un fichero de texto. Pondrá en dicho fichero
  *        ún numero de fechas continuas a la antes dada igual al número introducido. 
  * @bug 
  * @see https://www.internalpointers.com/post/modern-cmake-beginner-introduction
  *      https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/
  *      
  */
#include <iostream>
#include <string>
#include <fstream>
#include "fechas_funciones.cc"

int main (int argc, char* argv[]){

  Errores(argc,argv);

  std::string fecha_parametro = argv[1];
  int fecha = stoi(fecha_parametro);

  std::string convertir_numero_fechas = argv[2];
  int numero_fechas_posteriores = stoi(convertir_numero_fechas);
  std::ofstream texto_resultado (argv[3]);
  Fecha dato; //EL constructor

  //calculos
  int anyo = fecha % 10000;
  int mes = (fecha / 10000) % 100;
  int dia = fecha / 1000000;
  dato.dia_ = dia;
  dato.mes_ = mes;
  dato.anio_ = anyo;
  dato.Mostrar();

    for (size_t i = 1; i <= numero_fechas_posteriores; i++){
    dia = dia + 1;
    texto_resultado << dia << "/" << mes << "/" << anyo << " " << CondicionBisiesto(anyo) << std::endl;
  }

  

}
