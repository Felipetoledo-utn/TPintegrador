#include <iostream>
#include <locale>
#include "�lbum.h"
using namespace std;
�lbum::�lbum(){
   _Nombre("Sin nombre");
   _G�nero("Sin g�nero");
   _Artista("Artista no encontrado");
   _Anio(0);
   _Precio(0);
}
�lbum::�lbum(string nombre, string genero, string artista, int anio, float precio){
    _Nombre(nombre)
    _G�nero(genero);
    _Artista(artista);
    _Anio(anio);
    _Precio(precio);
}

�lbum::setNombre(string nombre){
    strcpy(_nombre, nombre.c_str());
}
�lbum::setG�nero(string genero){
    strcpy(_G�nero, genero.c_str());
}
�lbum::setArtista(string artista){
    strcpy(_Artista, artista.c_str());
}
�lbum::setAnio(int anio){
    _Anio=anio;
}
�lbum::setPrecio(float precio){
    _Precio=precio;
}
�lbum::ToString(){
string linea = "| Artista: " + string(_Artista);
linea += "| Genero: " + string(_G�nero);
linea += "| Nombre: " + string(_Nombre);
linea += "| Anio: " + to_string(_Anio);
linea += "| Precio: " + to_string(_Precio);
return linea;
}
