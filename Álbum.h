#ifndef DISQUERA_H
#define DISQUERA_H

using namespace std;
class �lbum
{
    public:
        �lbum();
        �lbum(string nombre, string album, string artista, int anio, float precio);
        void setNombre(string nombre);
        void setG�nero(string genero);
        void setArtista(string artista);
        void setAnio(int anio);
        void setPrecio(float precio);
        string getNombre();
        string getG�nero();
        string getArtista();
        int getAnio();
        float getPrecio();
        string ToString();

    protected:

    private:
        char _Nombre[50];
        char _G�nero[50];
        char _Artista[50];
        int _Anio;
        float _Precio;
};

#endif // DISQUERA_H
