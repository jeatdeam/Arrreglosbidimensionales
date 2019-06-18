#include<iostream>
#include<conio.h>

using namespace std;

void Matriz(int a, int b){
	int Matriz[a][b];
	int sumaf=0;
	int sumac=0;
	for(int i=0;i<a;i++){
	     for(int j=0;j<b;j++){
	          cout<<"Ingrese el valor de ["<<i+1<<"]"<<"["<<j+1<<"]: ";
	          cin>>Matriz[i][j];   
         }
      cout<<"\n";	   
  }	
  
  for(int i=0;i<a;i++){
  	
  	for(int j=0;j<b;i++){
	  
  	sumaf=sumaf+Matriz[i][j];
  	
  }
  cout<<"La suma de la fila "<<i+1<<" es: "<<sumaf;
  sumaf=0;
  cout<<endl;
  }
  
  
  
  
}
/*/int* FilasColumnas(){
	
	int *FC;
	
	FC=new int[1];
	
	do{
	cout<<"Ingrese el numero de filas: ";
	cin>>FC[0];
    }while(FC[0]>10||FC[0]<1);
    
    do{
	cout<<"Ingrese el numero de columnas: ";		
	cin>>FC[1];
    }while(FC[1]>10||FC[1]<1);
	
	return FC;
}*/
void Mayor(int a,int b){
	
	int mayor;
	Matriz(a,b);
	
	
	
	
	
}



int main(){
	
	int n,m;
	
	do{
	cout<<"Ingrese el numero de filas: ";
	
	cin>>n;
	
    }while(n>10||n<1);
    
    do{
	cout<<"Ingrese el numero de columnas: ";
			
	cin>>m;
	
    }while(m>10||m<1);    
    
    Matriz(n,m);
	
	_getch();
	return 0;
}
