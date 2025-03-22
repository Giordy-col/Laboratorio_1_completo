/**
 * @file Camion.cpp
 * @brief Implementacion de la clase Camion.
 *
 * @details Este archivo contiene la implementacioon de los metodos de la clase Camion ,
 * incluyendo el constructor,la funcion para cargar objetos y la función para obtener
 * la carga transportada.
 *
 * @author [GIORDY SANTIAGO ARCILA ENRIQUEZ]
 * @mail [giordy.arcila@correounivalle.edu.co]
 * @date 2025-03-18
 * @version 1.0
 *
 * @comentario:se utilizo el #include "Camion.h" para incluir el archivo de la clase camion.
 * se utilizo el :: para hacer referencia a la clase camion.
 * se utilizo el placa = laPlaca; para inicializar el atributo placa.
 * se utilizo el capacidadMaxima = laCapacidadMaxima; para inicializar el atributo capacidadMaxima.
 * se utilizo el pesoTotalCargado = 0; para inicializar el atributo pesoTotalCargado.
 */

 #include "Camion.h"

 // Constructor de la clase Camion que inicializa la placa y la capacidad máxima
 Camion::Camion(string laPlaca, int laCapacidadMaxima) {
     placa = laPlaca;
     capacidadMaxima = laCapacidadMaxima;
     pesoTotalCargado = 0;
 }
 
 // Metodo para cargar un objeto en el camioon si el peso total cargado es menor o igual a la capacidad maxima del camion 
 bool Camion::cargarUnObjeto(int pesoDelObjeto) {
     if (pesoTotalCargado + pesoDelObjeto <= capacidadMaxima) {
         pesoTotalCargado += pesoDelObjeto;
         return true;
     } else {  // Si no cabe, retornar false
         return false;
     }
 } // Fin del metodo cargarUnObjeto
 
 // Metodo para obtener la carga transportada 
 int Camion::hacerMudanza() {
     return pesoTotalCargado;
 }
 
 // Metodo para obtener la placa del camnion 
 string Camion::cualEsLaPlaca() {
     return placa;
 }