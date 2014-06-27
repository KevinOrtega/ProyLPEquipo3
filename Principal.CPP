#include <iostream.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>


struct evento
{
  char nombreevento[30], descripcionevento[200];
  int ano[5], mes [2], dia[2];

}
;

struct tiempo
{
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;

}
;

main()
{
      int op;
		cout<<"ESCUELA SUPERIOR POLITECNICA DEL CHIMBORAZO"<<endl;
		cout<<endl;
		cout<<"  -----------SISTEMAS OPERATIVOS-----------"<<endl;
		cout<<"  -----------------------------------------"<<endl;
		cout<<"  -                                       -"<<endl;
		cout<<"  -   INTEGRANTES:                        -"<<endl;
		cout<<"  -                                       -"<<endl;
		cout<<"  -   Jose Enrique Rodas                  -"<<endl;
		cout<<"  -                                       -"<<endl;
		cout<<"  -   Jonathan Herrera Silva              -"<<endl;
      cout<<"  -                                       -"<<endl;
      cout<<"  -   Kevin Liroy Ortega Chavez           -"<<endl;
		cout<<"  -                                       -"<<endl;
		cout<<"  -   Carlos Esteban Estevez Marin        -"<<endl;
		cout<<"  -----------------------------------------"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
}