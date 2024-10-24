#ifndef DISQUERA_H
#define DISQUERA_H

using namespace std;
class Álbum
{
    public:
        Álbum();
        Álbum(string nombre, string album, string artista, int anio, float precio);
        void setNombre(string nombre);
        void setGénero(string genero);
        void setArtista(string artista);
        void setAnio(int anio);
        void setPrecio(float precio);
        string getNombre();
        string getGénero();
        string getArtista();
        int getAnio();
        float getPrecio();
        string ToString();

    protected:

    private:
        char _Nombre[50];
        char _Género[50];
        char _Artista[50];
        int _Anio;
        float _Precio;
};

#endif // DISQUERA_H
