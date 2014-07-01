# include <iostream>
# include <conio>
# include <fstream>
# include <stdio>
# include <time.h>
#include <stdlib.h>

  struct evento
{
   char descripcion[100], nombre[30],fecha[25],hi[25],hf[25],fechaf[25];
};

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
		cout<<"  บบบบบบCALENDARIO DE EVENTOS ESPOCHบบบบบ"<<endl;
		cout<<"  บบบบบบบบบบบบบMENU PRINCIPALบบบบบบบบบบบบ"<<endl;
		cout<<"  บ                                     บ"<<endl;
		cout<<"  บ   1.- INGRESAR EVENTO               บ"<<endl;
		cout<<"  บ                                     บ"<<endl;
		cout<<"  บ   2.- EVENTOS DEL DIA               บ"<<endl;
		cout<<"  บ                                     บ"<<endl;
		cout<<"  บ   3.- EVENTOS DE LA SEMANA          บ"<<endl;
		cout<<"  บ                                     บ"<<endl;
		cout<<"  บ   4.- SALIR                         บ"<<endl;
		cout<<"  บบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ"<<endl;
		cout<<endl;
		cout<<"Ingrese la opcion que desea ejecutar:  "<<ends;
		cin>>op;
		switch(op)
 	{
   case 1:
   {
       //creacion archivo
   	ofstream PL3("C:/Users/Sistemas/Desktop/Calendario.txt");
   	PL3<<"\t \t     Calendario de eventos ESPOCH 2014     \t \t"<<"\n";
   	PL3.close();

     	evento dia;
      cout<<"\n\n		Nombre del evento:     ";
      ofstream PL3_1("C:/Users/Sistemas/Desktop/Calendario.txt",ios::app);
      cin>>(dia.nombre);
      PL3_1<<(dia.nombre)<<"\n";
      PL3_1.close();
    	while (i==0)
      {
      		if (strlen(dia.nombre)==0)
         {
    			cout<<" Ingrese el dato porfavor:		    ";
            ofstream PL3_1("C:/Users/Sistemas/Desktop/Calendario.txt",ios::app);
         	gets(dia.nombre);
            PL3_1<<(dia.nombre)<<"\n";
            PL3_1.close();
         }
   	else
   		{
   		i=1;
      	}
      }

   	cout<<"\n		Descripcion del evento:    ";
   	gets(dia.descripcion);
   	cout<<"\n		Fecha de inicio:           ";

   	gets(dia.fecha);
   	i=0;
   	while (i==0)
    {
      	if (strlen(dia.fecha)==0)
       {
    			cout<<" Ingrese el dato porfavor		";
         	gets(dia.fecha);
       }
   	else
   		{
   		i=1;
         endl;
      	}
    }
   	cout<<"\n		Hora de inicio:            ";
   	gets(dia.hi);
   	i=0;
   	while (i==0)
      {
      	if (strlen(dia.hi)==0)
   		{
    			cout<<" Ingrese el dato porfavor:   ";
         	gets(dia.hi);
         }
   	else
   		{
   		i=1;
      	}
   	}
   	cout<<"\n		Fecha de finalizacion:      ";
   	gets(dia.fechaf);
   	i=0;
   	while (i==0)
      {
      		if (strlen(dia.fechaf)==0)
   		{
    			cout<<" Ingrese el dato porfavor: ";
         	gets(dia.fechaf);
   		}
   	else
   		{
   		i=1;
      	}
   	}

   	cout<<"\n		Hora de finalizacion:     ";
   	gets(dia.hf);
   	i=0;
   	while (i==0)
      {
      		if (strlen(dia.hf)==0)
   		{
    			cout<<" Ingrese el dato porfavor";
         	gets(dia.hf);
   		}
   	else
   		{
   		i=1;
      	}
   	}

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
   	cout << "Fecha:  " << tmP->tm_mday << "-" << tmP->tm_mon+1 << "-"
                          << tmP->tm_year+1900 << endl;
   	cout << "Dia de semana: " << dS[tmP->tm_wday] << endl;
   	cout << "Dia del anio: " << tmP->tm_yday << endl;
   	cout << "Horario de verano: " << (tmP->tm_isdst ? "Si" : "No") << endl;
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
