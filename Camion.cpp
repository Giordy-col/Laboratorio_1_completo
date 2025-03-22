/*
 * @comentario: Este archivo contiene la implementación de los métodos de la clase Camion.
 * Se utiliza para definir cómo se cargan los objetos en el camión y cómo se calcula la carga transportada.
 */

 #include "Camion.h"

 // Constructor de la clase Camion
 Camion::Camion(string laPlaca, int laCapacidadMaxima) {
     placa = laPlaca;
     capacidadMaxima = laCapacidadMaxima;
     pesoTotalCargado = 0;
 }
 
 // Método para cargar un objeto en el camión
 bool Camion::cargarUnObjeto(int pesoDelObjeto) {
     if (pesoTotalCargado + pesoDelObjeto <= capacidadMaxima) {
         pesoTotalCargado += pesoDelObjeto;
         return true;
     } else {
         return false;
     }
 }
 
 // Método para obtener la carga transportada
 int Camion::hacerMudanza() {
     return pesoTotalCargado;
 }
 
 // Método para obtener la placa del camión
 string Camion::cualEsLaPlaca() {
     return placa;
 }