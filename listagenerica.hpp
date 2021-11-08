// creado por Jose Humberto Hernandez Solorzano
//HS100301


#ifndef lista_generica_hpp
#define lista_generica_hpp

#include <iostream>
#include ‹string>
#include <sstream›

using std::string;
using std::ostringstream;
using std:: cout;
using std::endl;

template <typename TIPODATO>
class Lista {
private:
   int cuenta;
   int capacidad;
   TIPODATO *items;
   void agrandar();
public:
Lista(int capacidad) ;
Lista();
~Lista();
Lista(const Lista &otra); // Construir una Lista a partir de otra en una direcciÀ3n de memoria
bool estaVacia();
int tamano();
void insertar (int indice, TIPODATO item);
void adjuntar (TIPODATO item) ;
TIPODATO obtener (int indice) ;
bool contiene (TIPODATO item);
TIPODATO remover (int indice) ;
string comoCadena();

bool contiene(TIPODATO item);
TIPODATO remover (int indice) ;
string comoCadena();
}
// Constructor
template <typename TIPODATO>
Lista<TIPODATO>: :Lista(int capacidad) {
cout << "Creando una lista vacia..."  << endl;
this->cuenta = 0;
this->capacidad = capacidad;
this->items = new TIPODATO[capacidad];
cout << "La lista tiene capacidad para..."  << this->capacidad << "elementos" << endl;
}

// Constructor de tamaño por defecto, en este caso 4
template<typename TIPODATO>
Lista<TIPODATO>::Lista():Lista(4) {}
}
// Destructor de la Lista
template <tvpename TIPODATO>
Lista<TIPODATO>::~Lista(){
cout <<  "Destruyendo la lista..." << endl;

delete[] items;

}
// Construir una lista a partir de otra
template <typename TIPODATO>
Lista<TIPODATO>:: Lista(const Lista<TIPODATO> &otra) {
cout <<
"Copiando una lista desde otra...
<< endl:
this->cuenta=otra.cuenta;
this->capacidad=otra.capacidad;
this->items= new TIPODATO[capacidadl;
for (int i= 0; i < this->cuenta; i++)
this->items[i]=otra.items[i];
}
// Esta la Lista vacia?
template <typename TIPODATO>

// Esta la Lista vacia?
template
<typename TIPODATO>
bool Lista<TIPODATO>: :estaVaciaO) {
cout << "Comprobando si la lista esta vacia..."  << endl;
return this->cuenta == 0;

}
// Tamano de la lista
template <typename TIPODATO>
int Lista<TIPODATO>: : tamano() {
cout <<
"Obteniendo el tamano de la lista..."  << endl;
return this->cuenta;
}
template
<typename TIPODATO>
void Lista<TIPODATO>: : agrandar () {
cout <<
"Duplicando el tamano de la lista..."<< endl;
TIPODATO *temp= this->items;
this->capacidad *= 2;
this->items=new TIPODATO[ capacidad];
for (int i=0: i< cuenta: i++)
this->items[il=temp[il;
delete[] temp;
cout << "La lista tiene capacidad para " << this->capacidad <<"elementos"<< endl;
}
// Insertar un elemento en un indice especifico
template<typename TIPODATO>
void Lista<TIPODATO>::insertar (int indice, TIPODATO item) {
// Validar el indice
if (indice < 0 || indice > this->cuenta) throw"Indice fuera de rango";
// Agrandar la lista si el elemento no cabe
if (this->cuenta >= this->capacidad) this->agrandar();
cout <<"Insertando un elemento.." << endl;
// Desplazar elementos a partir del indice a la derecha
for (int i = cuenta - 1; i >= indice; i--) {

cout <<
"Insertando un elemento..
<< endl;
// Desplazar elementos a partir del indice a la derecha
for (int i
= cuenta
1;
i ›= indice; i--) {
cout
(<
Desplazando elemento
<< items[il «< "
cout << i <<
al indice
<< (it1) << endl;
this-›items[i+1]=this-›items(il;
del indice
7
// Insertar nuevo elemento
cout <<
Insertando elemento
this-›items[indice]=item;
// Incrementar La cuenta de elementos
cout «<
Incrementando la cuenta de elementos"
this-›cuentatt;
<< item <<
" en el indice
« indice << endl;
«< endl;
}
// Agregar un elemento al final
template ‹typename TIPODATO>
void Lista‹TIPODATO›:: adjuntar (TIPODATO item) {
this-›insertar(this-›cuenta,item);
7
// Valor del elemento en la posicion indice
template <typename TIPODATO>
TIPODATO Lista‹TIPODATO›: :obtener (int indice) f
// Validar el indice
if (indice < 0 indice ›= this-›cuenta)
throw
"Indice fuera de rango";
if (this-›estavacia()) throw
"No se pued recuperar elementos de una lista vacia";
cout <<
"Recuperando elemento en el indice
return this-›items indicel;
<< indice << endl;
}
// Esta el item en la Lista?
template ‹typename TIPODATO>
bool Lista‹TIPODATO>: : contiene (TIPODATO item) {
for (int i
= 0; i < this-›cuenta; itt) {
cout
(<
"Recorriendo elemento con indice
11
<< i << endl;

bool Lista<TIPODATO>: : contiene(TIPODATO item) {
for (int i = 0; i < this-›cuenta; itt) f
cout
<<
"Recorriendo elemento con indice "
<i<< endl;
if (this-›items[i] == item)
return true;
1
return false;
}
// Remover elemento en el indice indice
template
‹typename TIPODATO>
TIPODATO Lista‹TIPODATO>: : remover (int indice) {
// Validar el indice
if (this-›estavacia()) throw
"No se puede remover elementos de una lista vacia";
if (indice < 0 indice ›= this-›cuenta) throw
"Indice fuera de rango'
cout <<
"Removiendo el elemento con indice "
<< indice
<<
// Lee el valor en el indice y desplaza elementos a la izquierda
TIPODATO valor
= this-›items[indicel;
for (int i =
indice; i < cuenta
- 1; it+) {
cout <<
Desplazando elemento
«< items[il «< " del indice
cout «< (i+1) <<
" al indice
«i << endl;
this-›items[il
= this-›items(i+1l:
<< endl;
}
// Reducir la cuenta de elementos
cout <<"Reduciendo la cuenta de elementos"<< endl;
this->cuenta--;
return valor:
}
template <typename TIPODATO>
string Lista<TIPODATO>::comoCadena() {
ostringstream S;
s <<"[";
for (int i= 0; i< (this->cuenta); i++) {
S<< this->items[il;

}

template <typename TIPODATO>
string Lista<TIPODATO>: : comoCadena() {
ostringstreams;
S<< "[";
for (int i = 0; i < (this->cuenta); i++) {
S
<< this->items[i];
if (i < this->cuenta-1)
s<<",";
return s.str();
}
#endif /* Lista generica hpp
*/

