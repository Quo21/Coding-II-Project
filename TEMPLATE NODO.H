#include "iostream"

template <class T>
class Nodo {

private:
    Nodo *sgte;
    T dato;

public:
    //Constructor y Destructor Clase Nodo
    Nodo();

    ~Nodo();

    Nodo(T);

    void vaciar();

    void print();


    Nodo *getSgte();

    void setSgte(Nodo *sgte);

    T getDato();

    void setDato(T dato);

};
