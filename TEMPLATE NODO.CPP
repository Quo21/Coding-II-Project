#include "Nodo.h"

template <typename T>

Nodo<T>::Nodo() {

    dato = NULL;
    sgte = NULL;
}

//Constructor Con Parametro

template<typename T>
Nodo<T>::Nodo(T dato) {

    this->dato = dato;
    sgte = NULL;
}


//destructor

template<typename T>
Nodo<T>::~Nodo() {

}

//Muestra

template <typename T>
void Nodo <T>:: print(){
    std:: cout << dato << "->";
}

//Geters y Setters

template<typename T>
void Nodo<T>::setSgte(Nodo<T> *sgte) {

    this->sgte = sgte;
}

template<typename T>
Nodo<T> *Nodo<T>::getSgte() {
    return this->sgte;
}

template<typename T>
void Nodo<T>::setDato(T dato) {

    this->dato = dato;
}

template<typename T>
T Nodo<T>::getDato() {
    return dato;
}
