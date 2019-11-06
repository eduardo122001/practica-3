#include <iostream>
using namespace std;
#include <string>

class Empleado{
    public:
        Empleado()
        {   nombre="";
            apellido="";
            sueldo=0;
        }
        Empleado(string nom,string ape,double mont)
        {   nombre=nom;
            apellido=ape;
            sueldo=mont;

        }

        double getsueldo(){
            return sueldo;
        }

        string getnombre(){
        return nombre;}

        string getapellido(){
        return apellido;}

        double setsueldo(){
            if(sueldo<0)
                sueldo=0;
            return sueldo;
        }

    private:
        string nombre,apellido;
        double sueldo;

};

class curso{
    public:

    private:
        string nombre,codigo;
        int cantidad;







};




int main()
{
    Empleado as("juan","cruzado",44);
    Empleado aa("manolo","fernandez",34.56);


    cout<<as.getsueldo()<<endl;
    cout<<aa.getsueldo()<<endl;
    as.setsueldo();
    cout<<"sueldo anual "<<12*10*as.getsueldo()/100<<endl;
    cout<<"sueldo anual "<<12*10*aa.getsueldo()/100<<endl;


    Empleado q("edf","avelino",121);
    Empleado w("aes","galinfo",122);
    Empleado e("gdf","holanda",123);
    Empleado r("kjl","sarosa",124);
    Empleado asd[6]={as,aa,q,w,e,r};


    for(int i=0;i<6;++i)
        cout<<asd[i].getapellido()<<endl;

    for(int i=0;i<6;++i){
        for(int j=0;j<6-i;j++){
            if(asd[j].getapellido()>asd[j+1].getapellido()){
                Empleado h=asd[j];
                asd[j]=asd[j+1];
                asd[j+1]=h;
            }
        }
    }
   cout<<endl;

    for(int i=0;i<6;++i)
        cout<<asd[i].getapellido()<<endl;

    return 0;

}

