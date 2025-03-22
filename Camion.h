/*
 * @comentario: Este archivo contiene la declaración de la clase Camion.
 * Se utiliza para modelar un camión que transporta objetos con distintos pesos.
 * La clase tiene atributos como la placa, la capacidad máxima y el peso total cargado.
 * También se declaran métodos para cargar objetos, hacer la mudanza y obtener la placa.
 */

 #ifndef CAMION_H
 #define CAMION_H
 
 #include <string>
 using namespace std;
 
 class Camion {
 private:
     string placa;       // Número de placa del camión
     int capacidadMaxima; // Capacidad máxima de carga del camión
     int pesoTotalCargado; // Peso total cargado en el camión
 
 public:
     // Constructor
     Camion(string laPlaca, int laCapacidadMaxima);
 
     // Método para cargar un objeto en el camión
     bool cargarUnObjeto(int pesoDelObjeto); // Retorna true si se pudo cargar, false si no
 
     // Método para obtener la carga transportada
     int hacerMudanza();
 
     // Método para obtener la placa del camión
     string cualEsLaPlaca();
 };
 
 #endif // CAMION_H