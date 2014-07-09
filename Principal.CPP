
# include <iostream>
# include <conio>
# include <fstream>
# include <stdio>
# include <time.h>
#include <stdlib.h>

  struct evento
{
   char descripcion[100], nombre[30],fecha[50],hi[25],hf[25],fechaf[50];
};

/*Se ingresan los datos del evento*/

void IngresarEvento (evento *eve1)
	{
      int i=0;
   	cout<<"\n\n		Nombre del evento:     ";
      gets ((*eve1). nombre);
    	while (i==0)
      {
      		if (strlen((*eve1).nombre)<=3)
         {
    			cout<<" Ingrese el nombre del evento por favor:		    ";
         	gets ((*eve1).nombre);
         }
   	else
   		{
   		i=1;
      	}
      }

   	cout<<"\n		Descripcion del evento:    ";
   	gets ((*eve1).descripcion);
      while (i==0)
      {
      		if (strlen((*eve1).descripcion)==0)
         {
    			cout<<" Ingrese el dato porfavor:		    ";
         	gets ((*eve1).descripcion);
         }
   	else
   		{
   		i=1;
      	}
      }
  	cout<<"\n		Fecha de inicio:           ";
		gets ((*eve1).fecha);
      i=0;
   	while (i==0)
      {
      	if (strlen((*eve1).fecha)<=3)
       {
    			cout<<" Ingrese la fecha de inicio por favor		";
         	gets((*eve1).fecha);
       }
   	else
   		{
   		i=1;
      	}
      }

   	cout<<"\n		Hora de inicio:            ";
   	gets((*eve1).hi);
      i=0;
   	while (i==0)
      {
      	if (strlen((*eve1).hi)<=3)
   		{
    			cout<<" Ingrese la hora de inicio por favor:   ";
         	gets((*eve1).hi);
         }
   	else
   		{
   		i=1;
      	}
   	}

   	cout<<"\n		Fecha de finalizacion:      ";
   	gets((*eve1).fechaf);
      i=0;
   	while (i==0)
      {
      		if (strlen((*eve1).fechaf)<=3)
   		{
    			cout<<" Ingrese la fecha de finalizacion por favor: ";
         	gets((*eve1).fechaf);
   		}
   	else
   		{
   		i=1;
      	}
   	}

   	cout<<"\n		Hora de finalizacion:     ";
   	gets((*eve1).hf);
      i=0;
   	while (i==0)
      {
      		if (strlen((*eve1).hf)<=3)
   		{

    			cout<<" Ingrese la hora de finalizacion por favor";
         	gets((*eve1).hf);
   		}
   	else
   		{
   		i=1;
      	}
   	}

   }
 


/*Cada dato del evento se guarda en el archivo extension txt*/
void guardararchivo (evento *eve2)
	{
   	//creacion archivo
   	ifstream PL3("C:/Users/Sistemas/Desktop/Calendario.txt");
   	if (!PL3)
   		{
        		ofstream PL3("C:/Users/Sistemas/Desktop/Calendario.txt");
         	PL3<<"\t \t     Calendario de eventos ESPOCH 2014     \t \t"<<"\n";
         PL3<< (*eve2).nombre<<", ";
         PL3<< (*eve2).descripcion<<", ";
         PL3<< (*eve2).fecha<<", ";
         PL3<< (*eve2).hi<<", ";
         PL3<< (*eve2).hf<<", ";
         PL3<< (*eve2).fechaf<<";"<<endl;
         PL3.close();
			}
   	else
   		{
         ofstream PL3_1("C:/Users/Sistemas/Desktop/Calendario.txt",ios::app);
         PL3_1<< (*eve2).nombre<<", ";
         PL3_1<< (*eve2).descripcion<<", ";
         PL3_1<< (*eve2).fecha<<", ";
         PL3_1<< (*eve2).hi<<", ";
         PL3_1<< (*eve2).hf<<", ";
         PL3_1<< (*eve2).fechaf<<";"<<endl;
         PL3_1.close();
	      }


   }



main()
{
      int op, i=0;
      struct evento ne;
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
	do
	{

		cout<<"ESCUELA SUPERIOR POLITECNICA DEL CHIMBORAZO"<<endl;
		cout<<endl;
		cout<<"  ººººººCALENDARIO DE EVENTOS ESPOCHººººº"<<endl;
		cout<<"  ºººººººººººººMENU PRINCIPALºººººººººººº"<<endl;
		cout<<"  º                                     º"<<endl;
		cout<<"  º   1.- INGRESAR EVENTO               º"<<endl;
		cout<<"  º                                     º"<<endl;
		cout<<"  º   2.- EVENTOS DEL DIA               º"<<endl;
		cout<<"  º                                     º"<<endl;
		cout<<"  º   3.- EVENTOS DE LA SEMANA          º"<<endl;
		cout<<"  º                                     º"<<endl;
		cout<<"  º   4.- SALIR                         º"<<endl;
		cout<<"  ººººººººººººººººººººººººººººººººººººººº"<<endl;
		cout<<endl;
		cout<<"Ingrese la opcion que desea ejecutar:  "<<ends;
		cin>>op;
		switch(op)
 	{
   case 1:
   {

     	evento dia;
      IngresarEvento (&dia);
      guardararchivo (&dia);


      system("pause");
      system ("cls");
   	break;
}


	case 2:
   {
   	char* dS[7] = {"Domingo","Lunes","Martes","Miercoles",
                  "Jueves","Viernes","Sabado"};
   	time_t tSac = time(NULL);


	//now
   	struct tm* tmP = localtime(&tSac);

   	cout << "Hora: " << tmP->tm_hour << ":" << tmP->tm_min << ":"
                       << (tmP->tm_sec) << endl;
   	cout << "Fecha:  " << tmP->tm_mday << "-" << (tmP->tm_mon+1) << "-"
                          << (tmP->tm_year+1900) << endl;
   	cout << "Dia de semana: " << dS[tmP->tm_wday] << endl;
   	cout << "Dia del anio: " << tmP->tm_yday << endl;
   	cout << "Horario de verano: " << (tmP->tm_isdst ? "Si" : "No") << endl;
      ifstream PL3("C:/Users/Sistemas/Desktop/Calendario.txt");
      char linea[255];
      while(!PL3.eof())
      {
      	PL3.getline(linea,100);
         cout<<linea;

      }
      system("pause");
   	system ("cls");
      break;
   	return 0;


      }
}
}
while(op!=4);
	system("cls");
	cout<<endl;
	cout<<" GRACIAS......"<<endl;
	cout<<endl;

getch();

}
