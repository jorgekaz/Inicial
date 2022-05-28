#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

int menu();

int menu()
{
    int opt;
    printf("=================================\n");
    printf(" TRABAJO PRACTICO N° 0: INICIAL \n");
    printf("=================================\n");
    printf(" 1.PROBLEMAS SECUENCIALES\n");
    printf(" 2.PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n");
    printf(" 3.PROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS\n");
    printf(" 4.PROBLEMAS CON REPETICIONES\n");
    printf(" 5.SALIR\n");
    printf("\n ELIJA UNA OPCIÓN: ");
    fflush(stdin);
    scanf("%i", &opt);
    return opt;
}

int main()
{
    setlocale(LC_ALL, "");
    int letter;
    int opt;
    do
    {
        opt=menu();
        system("cls");
        switch (opt)
        {
        case 1:
        {
            printf("\n 1.PROBLEMAS SECUENCIALES\n");
            printf("--------------------------\n");
            printf(" 1).Suponga que un individuo desea invertir su capital en un banco y desea saber\ncuanto dinero ganara despues de un mes si el banco paga a razon de 2% mensual.\n\n");
            printf(" 2).Una tienda ofrece un descuento del 15%% sobre el total de la compra y un cliente\ndesea saber cuanto debera pagar finalmente por su compra.\n\n");
            printf(" 3).Un maestro desea saber que porcentaje de hombres y que porcentaje de mujeres\nhay en un grupo de estudiantes.\n\n");
            printf("\n ELIJA UNA OPCION: ");
            fflush(stdin);
            scanf("%i", &letter);
            system("cls");
            if (letter==1)
            {
                printf("\n EJERCICIO 1\n\n");
                int dinero;
                printf(" Ingrese la cantidad de dinero que desea invertir: ");
                scanf ("%i", &dinero);
                dinero = dinero*1.02;
                printf ("\n Su capital en un mes será de: %i\n\n", dinero);
                system("pause");
                system("cls");
            }
            else if (letter==2)
            {
                printf("\n EJERCICIO 2\n\n");
                int compra;
                printf(" El total de su compra es de: ");
                scanf ("%i", &compra);
                compra = compra*0.85;
                printf ("\n El total a pagar es: %i\n\n", compra);
                system("pause");
                system("cls");
            }
            else if (letter==3)
            {
                printf("\n EJERCICIO 3\n\n");
                float porcentaje;
                float alumnosTotales;
                float varones;
                float mujeres;
                printf (" Ingresar la cantidad de alumnos varones: ");
                scanf ("%f", &varones);
                printf (" Ingresar la cantidad de alumnas mujeres: ");
                scanf ("%f", &mujeres);
                alumnosTotales = varones + mujeres;
                porcentaje = (varones*100)/alumnosTotales;
                printf ("\n El porcentaje de varones es: %.2f\n", porcentaje);
                porcentaje = (mujeres*100)/alumnosTotales;
                printf ("\n El porcentaje de mujeres es: %.2f\n\n", porcentaje);
                system("pause");
                system("cls");
            }
            else
            {
                printf("\n EJERCICIO NO ENCONTRADO\n\n");
                system("pause");
                system("cls");
            }
        }
        break;
        case 2:
        {
            printf("\n 2.PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n");
            printf("------------------------------------------------\n");
            printf(" 1).Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara\nsi su promedio de tres calificaciones es mayor o igual a 7.\nReprueba en caso contrario.\n\n");
            printf(" 2).En un almacen se hace un 20%% de descuento a los clientes cuya compra supere los $5000\n¿Cual sera la cantidad que pagara una persona por su compra?.\n\n");
            printf(" 3).Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera:\nSi trabaja 40hs o menos se le paga $300 por hora.\nSi trabaja mas de 40hs se le paga $300 por cada una de las primeras 40hs\ny $400 por cada hora extra.\n\n");
            printf(" 4).Desarrolle un algoritmo que lea dos numeros y los imprima en forma ascendente.\n\n");
            printf(" 5).Hacer un algoritmo que calcule el total a pagar por la compra de camisas.\nSi se compran tres o mas camisas se aplica un descuento del 20%%.\nsobre el total de la compra y si son menos de tres camisas un descuento del 10%%.\n\n");
            printf("\n ELIJA UNA OPCION: ");
            fflush(stdin);
            scanf("%i", &letter);
            system("cls");
            if (letter==1)
            {
                printf("\nEJERCICIO 1\n\n");
                float calf1;
                float calf2;
                float calf3;
                int examenes;
                float promedio;
                printf ("Ingrese la nota del primer examen: ");
                scanf ("%f", &calf1);
                printf ("Ingrese la nota del segundo examen: ");
                scanf ("%f", &calf2);
                printf ("Ingrese la nota del primer examen: ");
                scanf ("%f", &calf3);
                examenes = 3;
                promedio = (calf1+calf2+calf3)/examenes;
                if (promedio >= 7)
                {
                    printf ("\nFelicitaciones, aprobaste con un %.2f\n\n", promedio);
                }
                else
                    printf ("\nDesaprobaste con un %.2f\n\n", promedio);
                system("pause");
                system("cls");
            }
            else if (letter==2)
            {
                printf("\nEJERCICIO 2\n\n");
                float compra;
                float pago;
                printf ("¿Cuanto es el monto de su compra?: ");
                scanf ("%f", &compra);
                if (compra >= 5000)
                {
                    pago = compra*0.8;
                    printf ("\nEl total a pagar es de: %.2f\n\n", pago);
                }
                else
                {
                    printf ("\nEl total a pagar es de %.2f\n\n", compra);
                }
                system("pause");
                system("cls");
            }
            else if (letter==3)
            {
                printf("\nEJERCICIO 3\n\n");
                float horas = 0;
                float salario = 0.0;
                printf ("¿Cuantas horas trabajo?: ");
                scanf ("%f", &horas);
                if (horas <= 40)
                {
                    salario = (horas*300);
                    printf ("\nSu salario semanal es de: %.2f\n\n", salario);
                }
                else
                {
                    salario = 300*40 + 400*(horas-40);
                    printf ("\nSu salario semanal es de: %.2f\n\n", salario);
                }
                system("pause");
                system("cls");
            }
            else if (letter==4)
            {
                printf("\nEJERCICIO 4\n\n");
                int numberOne;
                int numberTwo;
                printf ("Ingresar dos numeros: ");
                scanf ("%i", &numberOne);
                scanf ("%i", &numberTwo);
                if (numberOne > numberTwo)
                {
                    printf ("\n%i\n",numberTwo);
                    printf ("\n%i\n\n",numberOne);
                }
                else
                {
                    printf ("\n%i\n",numberOne);
                    printf ("%i\n\n",numberTwo);
                }
                system("pause");
                system("cls");
            }
            else if (letter==5)
            {
                printf("\nEJERCICIO 5\n\n");
                int cant = 0;
                float compra = 0;
                float precio = 0;
                printf ("¿Cuantas camisas desea comprar?: ");
                scanf ("%i", &cant);
                while (cant <= 0)
                {
                    printf ("\nValor incorrecto. Ingrese otro valor por favor\n\n");
                    scanf ("%i", &cant);
                }
                printf ("\n¿Cuanto es el importe de su compra?: ");
                scanf ("%f", &precio);
                if (cant >= 3)
                {
                    compra = precio*.8;
                    printf ("\nEl total a pagar es: %.2f\n\n", compra);
                }
                else
                {
                    compra = precio*.9;
                    printf ("\nEl total a pagar es: %.2f\n\n", compra);
                }
                system("pause");
                system("cls");
            }
            else
            {
                printf("\nEJERCICIO NO ENCONTRADO\n\n");
                system("pause");
                system("cls");
            }
        }
        break;
        case 3:
        {
            printf("\n 3.PROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS\n");
            printf("---------------------------------------------------\n");
            printf(" 1).Leer 2 numeros: si son iguales que los multiplique, si el primero es mayor que el segundo\nque los reste y si no que los sume.\n\n");
            printf(" 2).Leer tres numeros diferentes e imprimir el numero mayor de los tres.\n\n");
            printf("\n ELIJA UNA OPCION: ");
            fflush(stdin);
            scanf("%i", &letter);
            system("cls");
            if (letter==1)
            {
                printf("\nEJERCICIO 1\n\n");
                int numberOne = 0;
                int numberTwo = 0;
                int resultado = 0;
                printf ("Ingrese dos numero: ");
                scanf ("%i", &numberOne);
                scanf ("%i", &numberTwo);
                if (numberOne == numberTwo)
                {
                    resultado = numberOne*numberTwo;
                    printf ("\nLa multiplicacion de los numeros ingresados da: %i\n\n", resultado);
                }
                else if (numberOne > numberTwo)
                {
                    resultado = numberOne - numberTwo;
                    printf ("\nLa resta de los numeros ingresados da: %i\n\n", resultado);
                }
                else
                {
                    resultado = numberOne + numberTwo;
                    printf ("\nLa suma de los numeros ingresados da: %i\n\n", resultado);
                }
                system("pause");
                system("cls");
            }
            else if (letter==2)
            {
                printf("\nEJERCICIO 2\n\n");
                int numberOne = 0;
                int numberTwo = 0;
                int numberThree = 0;
                printf ("Ingrese tres numeros: ");
                scanf ("%i", &numberOne);
                scanf ("%i", &numberTwo);
                scanf ("%i", &numberThree);
                if (numberOne >= numberTwo && numberOne >= numberThree)
                {
                    printf ("\nEl numero mayor es el %i\n\n", numberOne);
                }
                else
                {
                    if (numberTwo > numberThree)
                    {
                        printf ("\nEl numero mayor es el %i\n\n", numberTwo);
                    }
                    else
                    {
                        printf ("\nEl numero mayor es el %i\n\n", numberThree);
                    }
                }
                system("pause");
                system("cls");
            }
            else
            {
                printf("\nEJERCICIO NO ENCONTRADO\n");
                system("pause");
                system("cls");
            }
        }
        break;
        case 4:
        {
            printf("\n 4.PROBLEMAS CON REPETICIONES\n");
            printf("--------------------------------\n");
            printf(" 1).Calcular el promedio de un alumno que tiene 7 calificaciones en la\nmaterua de Programacion 1.\n\n");
            printf(" 2).Leer 10 numeros y obtener su cuba y su cuarta.\n\n");
            printf(" 3).Leer 10 numeros e imprimir solamente los numeros positivos.\n\n");
            printf(" 4).Leer 15 numeros negativos y convertirlos en positivos e imprimir dichos numeros.\n\n");
            printf(" 5).Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.\nRealizar un algoritmo para calcular la calificacion promedio y\nla calificacion mas baja de todo el grupo.\n\n");
            printf(" 6).Calcular e imprimir la tabla de multiplicar de un numero cualquiera.\nImprimir el multiplicando, el multiplicador y el producto.\n\n");
            printf("\n ELIJA UNA OPCION: ");
            fflush(stdin);
            scanf("%i", &letter);
            system("cls");
            if (letter==1)
            {
                printf("\nEJERCICIO 1\n\n");
                int exams = 0;
                float score = 0, sum = 0, average = 0.0;
                for (exams = 1 ; exams <= 7 ; exams ++)
                {
                    printf ("Ingrese la calificacion del alumno: ");
                    scanf ("%f", &score);
                    sum = sum + score;
                }
                average = sum / 7;
                printf ("\nEl promedio del alumno es de: %.2f\n\n", average);
                system("pause");
                system("cls");
            }
            else if (letter==2)
            {
                printf("\nEJERCICIO 2\n\n");
                float i,n,cubo,cuarta;
                for (i = 1; i <= 10; i++)
                {
                    printf ("Ingrese un numero: ");
                    scanf ("%f",&n);
                    cubo = n*n*n;
                    cuarta = cubo*n;
                    printf ("\nEl cubo del numero %.2f es: %.2f\n",n,cubo);
                    printf ("\nLa cuarta del numero %.2f es: %.2f\n\n",n,cuarta);
                }
                system("pause");
                system("cls");
            }
            else if (letter==3)
            {
                printf("\nEJERCICIO 3\n\n");
                float i,n;
                for (i=1; i<=10; i++)
                {
                    printf("Ingrese un numero: ");
                    scanf("%f",&n);
                    if (n>0)
                    {
                        printf("\nEl numero %.2f es positivo\n\n",n);
                    }
                }
                system("pause");
                system("cls");
            }
            else if (letter==4)
            {
                printf("\nEJERCICIO 4\n\n");
                float i,n;
                for (i=1; i<=10; i++)
                {
                    printf("Ingrese un numero negativo: ");
                    scanf("%f",&n);
                    if (n>0)
                    {
                        printf("\nEl numero %.2f es positivo\n\n",n);
                    }
                }
                system("pause");
                system("cls");
            }
            else if (letter==5)
            {
                printf("\nEJERCICIO 5\n\n");
                int i;
                float sum=0,score,lowScore = 10,average=0;
                for (i=1; i<=40; i++)
                {
                    printf("Ingrese una calificacion: ");
                    scanf("%f",&score);
                    sum = sum+score;
                    if (score < lowScore)
                    {
                        lowScore=score;
                    }
                    else
                    {
                        if(lowScore > score)
                        {
                            lowScore = lowScore;
                        }
                    }
                }
                average=sum/40;
                printf("\nLa calificacion promedio del curso es %.2f\n", average);
                printf("\nLa calificacion mas baja es %.2f\n\n", lowScore);
                system("pause");
                system("cls");
            }
            else if (letter==6)
            {
                printf("\nEJERCICIO 6\n\n");
                int i,table;
                printf("¿La tabla de que numero desea saber?: ");
                scanf("%i",&table);
                for (i=1; i<=10; i++)
                {
                    printf("\n %i * %i = %i", table, i, table*i);
                }
                printf("\n\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("\n EJERCICIO NO ENCONTRADO\n");
            }
        }
        break;
        case 5:
        {
            printf("\n NOS VEMOS LA PROXIMA\n\n");
            system("pause");
            system("cls");
        }
        break;
        default:
            printf("\n LA OPCION INGRESADA ES INCORRECTA\n\n");
            system("pause");
            system("cls");
            break;
        }
    }
    while (opt!=5);
    printf("\n FIN DEL PROGRAMA\n\n");
    system("pause");
}

