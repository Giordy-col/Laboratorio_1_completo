/*
 * @comentario: Este archivo contiene la función principal del programa.
 * Se crean dos camiones y se intentan cargar objetos en ellos.
 * Si un objeto no cabe en el primer camión, se intenta cargar en el segundo.
 * Si no cabe en ninguno, se muestra un mensaje de error.
 */

 #include <iostream>
 #include "Camion.h"
 using namespace std;
 
 int main() {
     // Crear dos camiones con sus respectivas placas y capacidades máximas
     Camion unCamion("ABC-001", 10000);
     Camion otroCamion("DEF-002", 5000);
 
     // Lista de objetos con sus pesos
     int objetos[8] = {1000, 3000, 5000, 2000, 500, 1800, 4000, 30};
 
     // Intentar cargar cada objeto en los camiones
     for (int cualObjeto = 0; cualObjeto < 8; cualObjeto++) {
         int objetoATransportar = objetos[cualObjeto];
 
         // Intentar cargar en el primer camión
         if (!unCamion.cargarUnObjeto(objetoATransportar)) {
             // Si no cabe en el primer camión, intentar en el segundo
             if (!otroCamion.cargarUnObjeto(objetoATransportar)) {
                 // Si no cabe en ninguno, mostrar un mensaje de error
                 cout << "El objeto numero " << cualObjeto << " que pesa "
                      << objetos[cualObjeto] << " no se puede cargar en ningun camion." << endl;
             }
         }
     }
 
     // Mostrar la carga transportada por cada camión
     cout << "El camion " << unCamion.cualEsLaPlaca() << " transporto "
          << unCamion.hacerMudanza() << " kg." << endl;
     cout << "El camion " << otroCamion.cualEsLaPlaca() << " transporto "
          << otroCamion.hacerMudanza() << " kg." << endl;
 
     return 0;
 }