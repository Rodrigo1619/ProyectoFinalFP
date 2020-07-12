/*Elaborar un programa que procese información sobre productos comprados por un cliente en una tienda, 
a modo de procesamiento de una factura de compra. La información se manejará en un arreglo,
en el cual cada casilla contendrá los datos de: nombre del artículo, cantidad de unidades compradas,
precio unitario y costo total por artículo */

#include "iostream"
#include "string.h"
#include "string"
#include "conio.h"
#include "stdlib.h"
using namespace std;
 
int i,j,n;  //declarando las respectivas variables 
float total=0;
char c;
string cad;

const int LongCad = 20; //la constante
struct costoPorArticulo //declarando la estructura
{ 
  char nombreArticulo[LongCad + 1]; 
  int cantidad; 
  float precio;
  float costoPorArticulo; 
}; 
//declarando las funciones
void leerDatos();
void calculo(char& nombre, int& cantidad, float& precio);
void contArreglo();
void contArreglo(char& nombre, int& cantidad, float& precio, float& costo);
void totalProductos(float&);
int main()
{
  cout<<endl<<"FACTURA DE COMPRA"<<endl<<endl;

  cout<<"Cantidad de articulos: "<<endl;
  cin>>n;
  cin.ignore(100, '\n'); //limpiando el buffer
  costoPorArticulo listado[n];
  
  leerDatos(); //llamando a la funcion
  
  

  getch();
  return 0;
}

void leerDatos()  //definiendo la funcion para leer los datos
{
  costoPorArticulo listado[n]; //asginandole datos a la estructura
  cout<<endl<<"Nombre, cantidad y precio de articulo "<<endl<<endl;
  for (j=0; j<n; j++)
  {
    cout<<"Digite el nombre del articulo: "<<endl;
    getline(cin, cad, '\n');
    strcpy(listado[i].nombreArticulo, cad.c_str());
    listado[i].nombreArticulo[LongCad]='\0';

    cout<<"Digite la cantidad de articulos a comprar: "<<endl;
    cin>>listado[i].cantidad;

    cout<<"Digite el precio del articulo: "<<endl;
    cin>>listado[i].precio;

    calculo(listado[i].nombreArticulo[LongCad+1], listado[i].cantidad, listado[i].precio);
    
    cin.ignore(100, '\n');
  }
}
//definiendo la funcion para realizar el calculo 
void calculo(char& nombre, int& cantidad, float& precio)
{
costoPorArticulo listado[i];
listado[i].costoPorArticulo = cantidad*precio;
contArreglo(nombre, cantidad, precio, listado[i].costoPorArticulo);
cin.ignore(100, '\n');
}

//desplegando los datos en la pantalla segun los datos del usuario
void contArreglo(char& nombre, int& cantidad, float& precio, float& costo)
{
  for (i=0; i<1; i++)
  {
    cout<<nombre<<endl;
    cout<<"Cantidad de articulos a comprar: "<<cantidad<<endl;
    cout<<"El precio por articulo es: "<<precio<<endl;
    cout<<"EL costo total es: "<<costo<<endl;
  }
  totalProductos(costo);
}

void totalProductos(float& costo)
{
    total=total+costo;
    cout<<"El total de los productos es: "<<total<<endl;
}