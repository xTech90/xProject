/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

#include "lista.h"


Lista::Lista ()
{
	inicio = NULL;
	aPI = NULL;
}


bool Lista::estaVacia (){
	return (inicio == NULL);
}


void Lista::moverInicio (){
	aPI = NULL;
}



bool Lista::avanzar (){

	if (!estaVacia()) {
		if (aPI==NULL)
			aPI = inicio;
		else
			aPI = aPI->siguiente;
		return true;
	}
	else return false;
}


bool Lista::enFin (){

	if (inicio==NULL)
		return true;
	else {
		if (aPI==NULL)
			return false;
		else {
			if (aPI->siguiente ==NULL)
				return true;
			else return false;
		}
	}
}



bool Lista::consultar (TipoDato &d){
	if (!estaVacia()) {
			if (aPI==NULL) {
				d = inicio->dato;
				return true;
			}
			else {
				if (aPI->siguiente==NULL)
					return false;
				else {
					d = aPI->siguiente->dato;
					return true;
				}
			}
		}
		else
			return false;
}
// api=api->suce; /
bool Lista::insertar (TipoDato d){
	pNodo nuevo;
	nuevo = new TipoNodoLista;
	nuevo->dato = d;
	if (aPI==NULL) {
		nuevo->siguiente = inicio;
		inicio = nuevo;
	}
	else {
		nuevo->siguiente = aPI->siguiente;
		aPI->siguiente=nuevo;
	}
	return true;
}


bool Lista::borrar (){
    pNodo ptraux;
	pNodo siguiente;

	if (estaVacia())
		return false;
	else {
		if (aPI==NULL) {
			ptraux = inicio;
			inicio = inicio->siguiente;
			delete ptraux;
			return true;
		}
		else {
			ptraux = aPI->siguiente;
			siguiente = ptraux->siguiente;
			aPI->siguiente=siguiente; //
			delete ptraux;
			return true;

			}
		}
}




Lista::~Lista()
{

	moverInicio();
	while (!estaVacia()){
		borrar();
	}
	inicio = NULL;
	aPI = NULL;
}
