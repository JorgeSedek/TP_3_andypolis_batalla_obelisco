#include "objetivo.h"

Cansado::Cansado() : Objetivo() {
    this -> nombre_objetivo = "Cansado";
    this -> descripcion = "Terminar un turno con 0 de energia.";
    this -> identificador = CANSADO;
  //   this -> requisito = REQUISITO_CANSADO;
}

bool comprobar_requisito(int energia){
    return( energia == 0);
}