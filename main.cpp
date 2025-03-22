/**
 * @file main.cpp
 * @brief Programa principaal para simular una mudanza con dos camiones.
 *
 * @details Este programa crea dos camiones y carga objetos en ellos. Si un objeto no cabe
 * en el primer camion,. se intenta cargar en el segundo. Si no cabe en ninguno, se muestra
 * un mensaje de error. Al final se muestra La carga transportada por cada Camion.
 *
 * @author [GIORDY SANTIAGO ARCILA ENRIQUEZ]
 * @mail [giordy.arcila@correounivalle.edu.co]
 * @date 2025-03-20
 * @version 1.0
 *
 * @comentario: Se utilizó la clase string para manejar la placa del camión.
 * Se investigó en https://en.cppreference.com/w/ sobre cómo utilizar la clase string.
 * se utilizó el #include "Camion.h" para incluir el archivo de la clase camion.
 * se utilizo el #include <iostream> para incluir la libreria de entrada y salida.
 * se utilizo el using namespace std para evitar escribir std:: en cada linea de codigo.
 * se utilizo el setlocale(LC_ALL, "es_ES.UTF-8"); para configurar la localización para usar UTF-8. y poder usar tildes.
 * se utilizo int objetos[8] = {1000, 3000, 5000, 2000, 500, 1800, 4000, 30}; para inicializar un arreglo de objetos.
 */

 #include <iostream>
 #include "Camion.h"
 using namespace std;
 
 int main() {

       // Configurar la localización para usar UTF-8
        setlocale(LC_ALL, "es_ES.UTF-8");



     // Crear dos camiones con sus respectivas placas y capacidades máximas
     Camion unCamion("ABC-001", 10000);
     Camion otroCamion("DEF-002", 5000);
 
     // Lista de objetos con sus pesos en kilogramos
     int objetos[8] = {1000, 3000, 5000, 2000, 500, 1800, 4000, 30};
 
     // Intentar carrgar cada objeto en los camiones
     for (int cualObjeto = 0; cualObjeto < 8; cualObjeto++) {
         int objetoATransportar = objetos[cualObjeto];
 
         // Intentar cargar en el primer camión
         if (!unCamion.cargarUnObjeto(objetoATransportar)) {
             // Si no cabe en el primer camion, intentar en el segundo camionn
             if (!otroCamion.cargarUnObjeto(objetoATransportar)) {
                 // Si no cabe en ninguno- mostrar un mensaje de error
                 cout << "El objeto número " << cualObjeto << " que pesa "
                      << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
             }
         }
     }
 
     // Mostrar la carga transportada por cada camionn
     cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó "
          << unCamion.hacerMudanza() << " kg." << endl;
     cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó "
          << otroCamion.hacerMudanza() << " kg." << endl;
 
     return 0;
 }