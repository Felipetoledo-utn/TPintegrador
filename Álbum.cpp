#include <iostream>
#include <locale>
#include "Álbum.h"
using namespace std;
Álbum::Álbum(){
   _Nombre("Sin nombre");
   _Género("Sin género");
   _Artista("Artista no encontrado");
   _Anio(0);
   _Precio(0);
}
Álbum::Álbum(string nombre, string genero, string artista, int anio, float precio){
    _Nombre(nombre)
    _Género(genero);
    _Artista(artista);
    _Anio(anio);
    _Precio(precio);
}

Álbum::setNombre(string nombre){
    strcpy(_nombre, nombre.c_str());
}
Álbum::setGénero(string genero){
    strcpy(_Género, genero.c_str());
}
Álbum::setArtista(string artista){
    strcpy(_Artista, artista.c_str());
}
Álbum::setAnio(int anio){
    _Anio=anio;
}
Álbum::setPrecio(float precio){
    _Precio=precio;
}
Álbum::ToString(){
string linea = "| Artista: " + string(_Artista);
linea += "| Genero: " + string(_Género);
linea += "| Nombre: " + string(_Nombre);
linea += "| Anio: " + to_string(_Anio);
linea += "| Precio: " + to_string(_Precio);
return linea;
}
