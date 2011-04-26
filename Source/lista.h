/**
* lista.h
* Declaracion de la clase Lista
*
*  Profesores EDI
*  Asignatura EDI
*  Curso 10/11
*/

#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Disco.h"

using namespace std;

typedef Disco TipoDato;

/**
* struct TipoNodoLista
*  Registro que representa un nodo de la lista
*/

typedef struct TipoNodoLista{
	TipoDato dato;			//!< Dato almacenado en la lista
	TipoNodoLista *siguiente,*anterior;	//!< Punteros al siguiente y anterior elemento de la lista

}TipoNodoLista;

typedef TipoNodoLista *pNodo;
typedef TipoNodoLista *pLista;

/**
* class Lista
* Esta clase representa una lista enlazada con puntero de interés.
*
* Esta clase lista contiene los métodos necesarios para contener una colección de datos
*/
class Lista{
	pNodo inicio;	//!< Puntero al dato del principio de la lista
	pNodo aPI; //!< Puntero al anterior del punto de interés

public:
	/**
	* Constructor por defecto. Inicializa un objeto de tipo lista
	* param "" No recibe parametros
	* return Devuelve un objeto de tipo Lista inicializado
	*/
   Lista ();
   /**
   * Metodo estaVacia. Este método permite saber si la lista está vacía
   * param "" No recibe parámetros
   * return Devuelve verdadero si la lista está vacía y false en caso contrario
   *
   * C:O(n)
   */
   bool estaVacia();
   /**
   * Metodo moverInicio. Coloca el puntero de interés en el primer elemento de la lista
   * param "" No recibe parámetros
   * return No retorna ningún valor
   *
   * C:O(1)
   */
   void moverInicio();
   /**
   * Metodo avanzar. Avanza el puntero de interés una posición
   * param "" No recibe parámetros
   * return No retorna ningún valor
   *
   * C:O(1)
   */
   bool avanzar();
   /**
   * Metodo enFin. Devuelve verdadero si el puntero de interés apunta al último elemento
   * param "" No recibe parámetros
   * return Devuelve true si el puntero de interés está situado en último elemento, false en caso contrario
   *
   * C:O(1)
   */
   bool enFin();
   /**
   * Metodo consultar. Devuelve en d el dato apuntado por el puntero de interés
   * param "" No recibe parámetros
   * return Retorna si se ha podido consultar o no
   *
   * C:O(1)
   */
   bool consultar(TipoDato &d);
   /**
   * Metodo insertar. Inserta un elemento en la lista. Siempre se inserta delante del puntero de interés
   * si api apunta a NULL se inserta al principio
   * param dato Dato a insertar en la lista
   * return si se ha podido insertar o no
   *
   * C: O(1)
   */
   bool insertar(TipoDato d);
   /**
   * Metodo borrar. Borra el elemento siguiente al api, osea el que apunta el pi
   * Si API es NULL se borra el primero
   * param "" No recibe parámetros
   * return Retorna true si ha borrado el elemento
   *
   * C: O(n)
   */
   bool borrar();
   /**
   * Destructor de la lista. Libera la memoria reservada para la lista
   *   return No retorna ningún valor
   */

   ~Lista();
};

#endif
