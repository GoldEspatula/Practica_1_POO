

/////////////////////////////////////////////////////////////////////
//Ejercicio #1

#include <iostream>
using namespace std;


int main (void){
	
	cout<<"Hola ESIME Zacatenco"<< endl;
}



////////////////////////////////////////////////////////////////////
//Ejercicio 2.4
#include<iostream>
using namespace std;
class Gato{
public:
	unsigned int suEdad;
	unsigned int suPeso;
		void Maullar(){
		cout<<"Miauuuuuu"<<endl;
	}
};
int main(){
float  myFloat;
Gato Pelusa;
Pelusa.suPeso=6;
Pelusa.suEdad=4;
Pelusa.Maullar();
}


//Ejercicio 3.1
#include<iostream>
using namespace std;
class Gato{

	unsigned int suEdad;
	unsigned int suPeso;
	void Maullar(){
		cout<<"Miauuuuuu"<<endl;
	}
};
int main(){
	float  myFloat;
	Gato Pelusa;
	Pelusa.suPeso=6;
	Pelusa.suEdad=4;
	Pelusa.Maullar();
}
/*------>Tipo de error: "Is private within this context"
	Se traduce como que  al lugar al que intentamos acceer fuera de la clase es privado
	*/

/*#include <iostream>
using namespace std;

class Gato{
private:
int suEdad;
float suPeso;

public:
void Edad(int edad);
int Edad();

void Peso (float peso);
float Peso();

void maullar();
}
void Gato::Edad(int edad){
suEdad=edad;
}

int Gato::Edad(){
return suEdad;
}

void Gato::Peso (float peso){
suPeso=peso;
}

float Gato::Peso(){
return suPeso;
}

int Gato::Maullar(){
cout<<"Miauuuuuuu"<< endl;
}

int main(void){
Gato Pelusa;
Pelusa.Edad(5);
Pelusa.Peso(3.5);

cout<<"El peso de pelusa es:"<<Pelusa.Edad()<<endl;
cout<<"La edad de pelusa es:"<<Pelusa.Edad()<<endl;

Pelusa.Maullar();
}
*/
