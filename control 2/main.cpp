#include <iostream>
using namespace std;
#include <string>
class Estudiante{
    public:
        Estudiante()
        {   nombre="";
            apellido="";
            codigo="";
        }
        Estudiante(string nom,string ape,string cod)
        {   nombre=nom;
            apellido=ape;
            codigo=cod;
        }

        string getcodigo(){
            return codigo;
        }

        string getnombre(){
        return nombre;}

        string getapellido(){
        return apellido;}

    private:
        string nombre,apellido,codigo;
};

class curso{
    public:

        curso(){
            nombre="";
            codigo="";
            cantidad=0;
            alumno=new Estudiante[0];
        }

        curso(string nom,string cod,int cant){
            nombre=nom;
            codigo=cod;
            cantidad=cant;
            alumno=new Estudiante[cantidad];
        }

        curso(curso &a){
            alumno=new Estudiante[a.cantidad];
            nombre=a.nombre;
            codigo=a.codigo;
            cantidad=a.cantidad;
            for(int i=0;i<cantidad;++i)
                alumno[i]=a.alumno[i];
        }

        string getcodigo(){
            return codigo;}

        string getnombre(){
            return nombre;}

        int getcantidad(){
            return cantidad;}

        Estudiante getalumno(){
            return *alumno;}

        void setcodigo(string cod){
            codigo=cod;}


        void setnombre(string nom){
            nombre=nom;}

        void setcantidad(int cant){
            cantidad=cant;}

        void addalumno(Estudiante as,int pos){
            alumno[pos-1]=as;
        }
        void printlista(){
            for(int i=0;i<cantidad;++i)
                cout<<alumno[i].getnombre()<<endl;
        }

    private:
        string nombre,codigo;
        int cantidad;
        Estudiante *alumno;

};

int main()
{
    Estudiante as("Juan","Cruzado","hgfd");
    Estudiante aa("Manolo","Fernandez","asdf");


    cout<<as.getnombre()<<endl;
    cout<<as.getapellido()<<endl;
    cout<<as.getcodigo()<<endl;
    cout<<"  "<<endl;

    curso a("matematica","asdf",5);

    Estudiante q("edf","fgh","1212");
    Estudiante w("aes","ert","122");
    Estudiante e("gdf","adf","123");
    Estudiante r("kjl","xcv","124");
    Estudiante m("kjla","axcv","1524");

    a.addalumno(q,1);
    a.addalumno(w,2);
    a.addalumno(e,3);
    a.addalumno(r,4);
    a.addalumno(m,5);

    a.printlista();
    cout<<"  "<<endl;
    a.setcantidad(4);
    a.printlista();







    return 0;

}
