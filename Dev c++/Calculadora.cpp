 
/* Gracias por bajar mi aplicacion en C++ */				
/*Version 2.0 */
/*Ultima Actualizacion: 26/1/2021 */				
/*Creado por Anderson Tavarez (Oficialtavarz)*/				
/*Soporte Nevekley */				
/* Aviso:(Puedes usar este programa cuando y donde des creditos al autor original del proyecto)*/				

/* Inicio de bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <windows.h>
/* Final bibliotecas */

using namespace std;

/* Este es el menu principal */

main()
{ int op=0, a=0, b=0, c=0;


m1: system("cls");
printf("Bienvenido : )\n");
printf("\n");
printf("1-Calculadora.\n");
printf("2-Buscador.\n");
printf("3-Calendario 2021.\n");
printf("4-Juegos en linea.\n");
printf("5-Otros.\n");
printf("6-Salir.\n");
printf("Digite la opcion a seguir==>");
printf("\n");
printf("Programado por oficialtavarezz\n");
scanf("%d",&op);

/* Fin del menu principal */


/* Sub menu tipo de calculadora*/
switch(op)
{
   case 1:
    { 
	m2: system("cls");
     printf("Bienvenido a la Calculadora:\n");
	 printf("1- Estandar.\n");
	 printf("2-Cientifica.\n");
	 printf("3-Regresar.\n");
     printf("4-Salir.\n");
     
	 printf("Digite la opcion a seguir==>");
     scanf("%d",&op);
 /* Fin del sub  tipo menu de calculadora */
   
 /* Sub menu estandar*/
     switch(op)
    {
    	case 1:
    		{
			m3: system("cls");
			printf("Estandar : )\n");
			printf("1-Suma\n");
    		printf("2-Resta\n");
    		printf("3-Multiplicacion\n");
    		printf("4-Division\n");
    		printf("5-Raiz Cuadrada\n");
    		printf("6-Pocierto\n");
    		printf("7-Regresar\n");
    		printf("8-SALIR\n");
    		
			printf("Digite una opcion a seguir==>");
    		scanf("%d",&op);
    		
    		switch(op)
			{
				case 1:
					{ 
					system("cls");
    				printf("Este programa suma dos numeros\n");
					printf("digite un numero\n");
					scanf("%d",&a);
    				printf("digite otro numero\n");
    				scanf("%d",&b);
    				c=a+b;
    				printf("la resta de %d + %d es %d\n",a,b,c);
    				system("pause");
    				goto m3;
    			}
    			
    			case 2:
    				{ 
					system("cls");
    				printf("Este programa resta dos numeros\n");
    				printf("Digite un numero\n");
    				scanf("%d",&a);
    				printf("Digite otro numero\n");
    				scanf("%d",&b);
    				c=a-b;
					printf("la reesta de %d - %d es %d\n",a,b,c);	
    				system("pause");
    				goto m3;
				}
				
				case 3:
					{ 
					system("cls");
					printf("Este programa multiplica dos numeoros\n");
					printf("digite un numero\n");
					scanf("%d",&a);
    				printf("digite otro numero\n");
    				scanf("%d",&b);
					c=a*b;
                    printf("la multiplicacion de %d * %d es %d\n",a,b,c);                 				
					system("pause");
					goto m3;
				}
				
				case 4:
					{ 
					system("cls");
					printf("Este preograma divide dos numeoros\n");
					printf("digite un numero\n");
					scanf("%d",&a);
    				printf("digite otro numero\n");
    				scanf("%d",&b);
    				c=a/b;
    				printf("la divicion de %d  / %d es %d\n",a,b,c);				
					system("pause");
					goto m3;
				}
				
								case 5:
{system("cls");
int a;
float c;
printf("coloque un valor\n");
scanf("%d",&a);
c=sqrt(a);
printf("el resultado de %d es %f\n",a,c);
system("pause");
goto m3;
				}
				
				case 6:
{system("cls");
float a,b,c;
printf("coloque el porciento\n");
scanf("%f",&a);
printf("coloque la cantidad ha sacarle el porciento\n");
scanf("%f",&b);
c=a*b /100;
printf("c=%f",c);
system("pause");
goto m3;
				}
    				
    			case 7:
    				{goto m2;}
    				
				
    			case 8:
    				{exit(0);
					}
				}
					
 /* Final de sub menu estandar*/
 
  /* Sub menu cientifica*/		
		case 2:
			{ m4: system("cls");
			printf("Cientifica\n");
			printf("1-Suma\n");
			printf("2-Resta\n");
			printf("3-Multiplicacion\n");
			printf("4-Divisi�n\n");
			printf("5-Residuo\n");
			printf("6-Raiz Cuadrada\n");
			printf("7-Pociento\n");
			printf("8-X^2\n");
			printf("9-X^Y\n");
			printf("10-1/X\n");
			printf("11-PI\n");
			printf("12-(+/-)\n");
			printf("13-CONVIERTE A POTENCIA DE 10\n");
			printf("14-VALOR ABSOLUTO\n");
			printf("15-TRIGONOMETRIA (SUB)\n");
			printf("16-MENU ANTERIOR\n");
			printf("17-SALIR\n");
			
			printf("Digite una opcion a seguir==>");
			scanf("%d",&op);
			
			switch(op)
			{
				case 1:
{system("cls");
printf("coloque el primer valor\n");
scanf("%d",&a);
printf("coloque el segundo valor\n");
scanf("%d",&b);
c=a+b;
printf("el resultado de %d + %d es %d\n",a,b,c);
system("pause");
goto m4;
				}
				
				case 2:
{system("cls");
printf("coloque el primer valor\n");
scanf("%d",&a);
printf("coloque el segundo valor\n");
scanf("%d",&b);
c=a-b;
printf("el resultado de %d -%d es %d\n",a,b,c);
system("pause");
goto m4;
				}
 /* Final sub menu cientifica*/
 
  /* Sub menu multiplicacion*/				
				case 3:
					{m5: system("cls");
					printf("SUD MENU MULTIPLICACION\n");
					printf("1-MULTIPLICACION MEDIANTE LA SUMA\n");
					printf("2-MULTIPLICACION RUSA\n");
					printf("3-MULTIPLICACION NORMAL\n");
					printf("4-MENU ANTERIOR\n");
					printf("5-SALIR\n");
					
					printf("Digite una opcion==>");
					scanf("%d",&op);
					
					switch(op)
					{
						case 1:
						{system("cls");
						printf("ESTE PROGRAMA MULTIPLICA MEDIANTE LA SUMA\n");
						printf("Digite un numero\n");
						scanf("%d",&a);
						printf("Digite otro numero\n");
						scanf("%d",&b);
						c=a*b;
						printf("la multiplicacion de %b * %b es %b\n",a,b,c);					
						system("pause");
						goto m5;
						}
						
						case 2:
{system("cls");
int num1,num2,resultado=0;
   printf("Introduce primer numero de la multiplicacion\n");
   scanf("%d",&num1);
   printf("Introduce segundo numero de la multiplicacion\n");
   scanf("%d",&num2);
   while(num1>=1)
   {
       if(num1%2!=0)
       resultado+=num2;    
       num1=num1/2;
       num2=num2*2;
   }
   printf("El resultado es: %d",resultado);
   system("pause");
   goto m5;
						}
						case 3:
{system("cls");
printf("digite el primer valor\n");
scanf("%d",&a);
printf("digite el segundo valor\n");
scanf("%d",&b);
c=a*b;
printf("el resultado de %d * %d es %d\n",a,b,c);
system("pause");
goto m5;
						}
						case 4:
						{ goto m4;
						}
						
						case 5:
						{goto m1;
						default:{
						system("cls");printf("Has salido \n");}   
						system("pause");
						goto  m3;
    					  }
    				}
    			}
				
				case 4:
{system("cls");
printf("coloque el primer valor\n");
scanf("%d",&a);
printf("coloque el segundo valor\n");
scanf("%d",&b);
c=a/b;
printf("el resultado de %d / %d es %d\n",a,b,c);
system("pause");
goto m4;
					}
				
				case 5:
{system("cls");
printf("coloque el primer valor\n");
scanf("%d",&a);
printf("coloque el segundo valor\n");
scanf("%d",&b);
c=a/b;
printf("el residuo de %d / %d es %d\n",a,b,c);
printf("pause");
goto m4;
					}
				
				case 6:
{system("cls");
int a;
float c;
printf("coloque un valor\n");
scanf("%d",&a);
c=sqrt(a);
printf("el resultado de %d es %f\n",a,c);
system("pause");
goto m4;
				}
				
case 7:
{system("cls");
float a,b,c;
printf("coloque el porciento\n");
scanf("%f",&a);
printf("coloque la cantidad ha sacarle el porciento\n");
scanf("%f",&b);
c=a*b /100;
printf("c=%f",c);
system("pause");
goto m4;
}
				
case 8:
{system("cls");
scanf("%d",&a);
c=pow(a,2);
printf("el resultado de %d es %d\n",a,c);
system("pause");
goto m4;
}
				
case 9:
{system("cls");
int base,exponente;
printf("digite la base");
scanf("%d",&base);
printf("digite el exponente\n");
scanf("%d",&exponente);
printf("%d elevado a %d es %lf\n", base, exponente, pow (base, exponente));
system("pause");
goto m4;
}
				
case 10:
{system("cls");
int x;
float y;
printf("digite el valor de x");
scanf("%d",&x);
y=1/x;
printf("y=%f",y);
system("pause");
goto m4;
}
case 11:
{system("cls");
c=3.14;
printf("el valor del PI es 3.14\n",c);
system("pause");
goto m4;
}
				
case 12:
					{system("cls");
					printf("ESTE PROGRAMA (+/-)\\n");
					printf("Digite un numero\n");
					scanf("%d",&a);
					printf("En proceso\n");
					system("pause");
					goto m4;
					}
				
				case 13:
					{system("cls");
					printf("CONVIERTE A POTENCIA DE 10\n");
					printf("Digite un numero\n");
					scanf("%d",&a);
					printf("En proceso\n");
					system("pause");
					goto m4;
					}
				
				case 14:
{system("cls");
int a,absoluto;
printf("digite un valor");
scanf("%d",&a);
absoluto=abs(a);
printf("absoluto=%d",absoluto);
system("pause");
goto m4;
					}
  /* Final sub menu multiplicacion*/				
  
  /* Sub menu trigonometria*/				
				case 15:
					{m6: system("cls");
					printf("SUB MENU TRIGONOMETRIA\n");
					printf("1-SEN X\n");
					printf("2-COS X\n");
					printf("3-TAN X\n");
					printf("4-SECANTE X\n");
					printf("5-COSC X\n");
					printf("6-COTANGENTE X\n");
					printf("7-LONG\n");
					printf("8-LN\n");
					printf("9-CONVIERTA(SUB)\n");
					printf("10-MENU ANTERIOR\n");
					printf("11-SALIR\n");
					
					printf("Digite una opcion==>");
					scanf("%d",&op);
					
					switch(op)
					{
						case 1:
#define PI 3.14159265
{system("cls");
 int param;
  float result;
  printf("digite un valor==>");
  scanf("%d",&param);
  result = sin (param*PI/180);
  printf ("el seno de %d grados es %f.\n", param, result );
  system("pause");
  goto m6;
						}
						case 2:
#define PI 3.14159265
{system("cls");
 int param;
  float result;
  printf("digite un valor==>");
  scanf("%d",&param);
  result = cos (param*PI/180);
  printf ("el coseno de %d grados es %f.\n", param, result );
  system("pause");
  goto m6;
						}
						{system("cls");
 int param;
  float result;
  printf("digite un valor==>");
  scanf("%d",&param);
  result = tan (param*PI/180);
  printf ("la tangente de %d grados es %f.\n", param, result );
  system("pause");
  goto m6;
						}
						case 4:
#define PI 3.14159265
{system("cls");
 int param;
  float result;
  printf("digite un valor==>");
  scanf("%d",&param);
  result = 1/cos (param*PI/180);
  printf ("la secante de %d grados es %f.\n", param, result );
  system("pause");
  goto m6;
						}
						case 5:
#define PI 3.14159265
{system("cls");
 int param;
  float result;
  printf("digite un valor==>");
  scanf("%d",&param);
  result = 1/sin (param*PI/180);
  printf ("la cosecante de %d grados es %f.\n", param, result );
  system("pause");
  goto m6;
						}
						case 6:
#define PI 3.14159265
{system("cls");
 int param;
  float result;
  printf("digite un valor==>");
  scanf("%d",&param);
  result = cos (param*PI/180)/sin (param*PI/180);
  printf ("la cotangente de %d grados es %f.\n", param, result );
  system("pause");
  goto m6;
						}
						case 7:
{system("cls");
double numero, resultado;

	printf("\nIntroduce valor: ");
	scanf("%lf", &numero);

	if (numero > 0) {
		resultado = log10(numero);
		printf("\nEl logaritmo de %.3f es %.3f", numero, resultado);
	}

	system("pause");
	goto m6;
						}
						
						case 8:
						{system("cls");
						printf("LN\n");
						printf("Digite un numero\n");
						scanf("%d",&a);
						printf("En proceso\n");
						system("pause");
						goto m6;
						}
						case 9:
						{system("cls");	
						
	int n;
	int bin;
	int j=0;
	int k;
 
	int n_tem;
	int n_temp=0;
	int n_temp1=0;
//	char n_tem2;
 
	scanf("%d",&n);
 
 
 
 
	//for(n=1;n<=256;n++){
		printf("binario:\n");
 
	for(bin=1;bin<=n;bin*=2)
		j=bin;
	for(j=bin;j>=1;j=(bin/=2)){
 
 
		for(j=bin;j>=1;j=(bin/=2))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j){
			n_temp1=k/j;
 
			printf("%d",n_temp1);
 
			}
 
		}
 
	}
		printf("\n");
	/*octal*/
		printf("octal\n");
	for(bin=1;bin<=n;bin*=8)
		j=bin;
	for(j=bin;j>=1;j=(bin/=8)){
 
 
		for(j=bin;j>=1;j=(bin/=8))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j){
			n_temp1=k/j;
			printf("%d",n_temp1);
			}
 
		}
		printf("\n");
 
 
		/*hexadecimal*/
			printf("hexadecimal\n");
		for(bin=1;bin<=n;bin*=16)
		j=bin;
	for(j=bin;j>=1;j=(bin/=16)){
 
 
		for(j=bin;j>=1;j=(bin/=16))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
 
			if(n_tem>=j){
			n_temp1=k/j;
 
 
			if(n_temp1==10){
				n_temp1='A';
				printf("%c",n_temp1);
			}
 
			if(n_temp1==11){
				n_temp1='B';
				printf("%c",n_temp1);
			}
 
 
			if(n_temp1==12){
				n_temp1='C';
					printf("%c",n_temp1);
			}
 
 
			if(n_temp1==13){
				n_temp1='D';
				printf("%c",n_temp1);
			}
 
			if(n_temp1==14){
				n_temp1='E';
				printf("%c",n_temp1);
			}
 
 
 
			if(n_temp1==15){
				n_temp1='F';
				printf("%c",n_temp1);
			}
			else if(n_temp1>=0 && n_temp1<=9)
 
					printf("%d",n_temp1);
					}
				}
			printf("\n");
 
			}
 
		}
//	}
 
 
 
 
	return 0;
}
							
							case 10:
							{goto m1;}
							default:{
							system("cls");
							printf("Has salido \n");}   
							system("pause");
							goto  m1;
							}
						}
					
				case 16:
					{goto m3;}
				
				case 17:
				{goto m1;}
				default:{
				system("cls");
				printf("Has salido \n");}   
				system("pause");
				goto  m1;
			}
			}
			case 3:
			{
				goto m1;
			}
			}
			}
  /* Final sub menu trigonometria*/				

  /* Buscandador*/				
			case 2:
				{m8: system("cls");
{
 string link;
 cout<<"Introduce la pagina que deseas visitar\n";
 cin>> link;
 ShellExecute(NULL, "open", link.c_str(), NULL, NULL, SW_SHOWNORMAL);
        system("pause");
        return 0;
        }
				
  /* Final del buscandador*/				
				
  /* Otro codigo */				
				switch(op)
				{
					case 1:
						{system("cls");
						int x=1;
while(x<=64)
{
printf(" x vale %d\n",x);
x=x*2;
}
system("pause");
goto m8;
					}
					case 2:
						{system("cls");
						int x=1;
						int y=0; 
						int z=y;
while(x<=34)
{
printf(" x vale %d\n",x);
z=x;
x=x+y;
y=z;
}
system("pause");
goto m8;

					}
					case 3:
						{system("cls");
						int x;

    printf("digite el valor de x\n");
    scanf("%d",&x);

    for(int i = 1; i <= x; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
        printf("%d",i);
		        }
        printf("\n");
    }
    return 0;
					}
					case 4:
						{goto m1;}
					case 5:
						{system("cls");
						printf("Has salido\n");
						goto m1;
						}
				}
				}
				
  /* Final del codigo */				
  
  
  /*Calendario */				
				case 3:
				{system("cls");
				printf("El calendario no esta diposnible en este momento por favor intente mas tarde.\n");
				system("pause");
				goto m1;
				}
  /* Final calendario */				

	
  /*Sub menu juegos */				
					case 4:
					{m9: system("cls");
					printf("Los sentimos no tenemos juegos en linea por ahora : (\n");
					printf("1-Adivinanza\n");
					printf("2-Loteria\n");
					printf("3-Loto\n");
					printf("4-Regresar\n");
					printf("5-Salir\n");
					
					printf("Eliga una opcion==>");
					scanf("%d",&op);
	  /*Final sub menu juegos */				
				
  /*Juegos  menu juegos */				
					switch(op)
					{ 
						case 1:
							int respuesta,ballena;
							printf("la reina de los mares es, nunca vacia, siempre va llena\n");
							printf("cual es la respuesta");
							scanf("%d",&respuesta);
                       if (respuesta==ballena)
                       {
                       printf("correcto");
                       }
                       else{
                            printf("vuelve a intentarlo");
                            system("pause");
                            goto m9;
							}
							case 2:
							{system("cls");
							printf("eliga un numero del 1 al 100>>>");
							scanf("%d",&a);
							printf("***Tienes mucha suerte, Feliciades***\n");
							system("pause");
							goto m9;
							}
							case 3:
							{system("cls");
							printf("NO HAY SISTEMA PRIMO (Mantenimiento).\n");
							system("pause");
							goto m9;
							}
						case 4:
							{goto m1;
							}
						case 5:
							{goto m1;
							}		
					}
				}
				case 5:
					{system("cls");
					printf("EN MATENIMIENTO PROXIMAMENTE EN FUNCIONAMIENNTO.\n");
					system("pause");
					goto m9;
					}
				case 6:
					{system("cls");
					printf("seguro que desea salir\n");
					system("pause");
					return 0;
					}			
				case 7:
					{system("cls");
					printf("NOMBRE:< Nevekley>\n");
					system("pause");
					goto m1;
							}
						}
					
					}
					}
	 /* Final juegos  menu juegos */	
	 
	   /*Gracias por bajar mi aplicacion y espero que la disfrutes y te sea util, originalmente era 
	   un proyecto para mi clase el cual mejore para subirlo en esta plataforma por lo cual solo difruta del mismo */				
			

