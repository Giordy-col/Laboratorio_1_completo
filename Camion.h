/**
 * @file Camion.h
 * @brief Declaración de la clase Camion.
 *
 * @details La clase Camion modela un camión que transporta objetos con distintos pesos.
 * El camión tiene un número de placa y una capacidad máxima. Si se supera esa capacidad,
 * el programa avisa para que el objeto se guarde en otro camión.
 *
 * @author [giordy santiago arcila enriquez]
 * @email [giordy.arcila@correounivalle.edu.co]
 * @date 2025-03-17
 * @version 1.0
 *
 * @comentario: Se utilizo la clase string para manejar la placa del camión.
 * Se investigo en https://en.cppreference.com/w/ sobre como utilizar la clase string .
 * Se utilizo bool para devolver un 1 o 0 , o "si o no" .
 * Se investio en https://en.cppreference.com/w/ sobre como utilizar bool.
 * se utlizo el #define para evitar la doble inclusion de archivos.
 * se utilizo el using namespace std para evitar escribir std:: en cada linea de codigo.
 * se utilizo private para encapsular los atributos de la clase .
 * se utilizo public para encapsular los metodos de la clase.
 * se utilizo el constructor para inicializar los atributos de la clase.
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
     // constructor
     Camion(string laPlaca, int laCapacidadMaxima);
 
     // metodo para cargar un objeto dentro del camion
     bool cargarUnObjeto(int pesoDelObjeto); // Retorna true si se pudo cargar, false si no
 
     // Metodo para obtener la carga transportada
     int hacerMudanza();
 
     // Metodo para obtener la placa del camion es un "string una cadena de caracteres" asi tenga numeros y letras
     string cualEsLaPlaca();
 };
 
 #endif // CAMION_H