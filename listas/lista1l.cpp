#include <iostream>

using namespace std;

struct nodo{
	int numero;
	nodo *next;
};

void iniciarlista(nodo *lista, int valor){
	lista->next = NULL;
	lista->numero = valor;
}

nodo* addvaloresmalo(nodo *lista, int valor){ 
	//malo
	//for (nodo aux = lista; aux == NULL; aux = aux ->next)
	//{
		/* code */
	//}

	while(lista->next !=NULL){
		lista = lista->next;
	}
	nodo *last = new nodo;
	last ->next = NULL;
	last ->numero = valor;
	lista->next = last;
}

void addvaloresbueno(nodo *lista, int valor){
	nodo *aux;
	aux = lista;
	while(aux->next != NULL){
		aux = aux->next;
	}
	nodo *last = new nodo;
	last->numero = valor;
	last->next = NULL;
	aux->next = last;	
}

void printlista(nodo *lista){
	cout << "Imprimir lista:"<<endl;
	while(lista != NULL){
		cout << lista->numero << endl;
		lista = lista->next ;  
	}
}

void borrarnodo(nodo *lista, int valor){
	nodo *aux = lista;
	nodo *borrar;
	while ( (aux->next)->numero != valor){
		aux->next;
	}
	borrar = aux->next;
	aux->next = borrar->next;
	delete borrar;
}

void borrarlista(nodo *lista){
	if (lista != NULL){
		borrarlista(lista->next);
	}
	delete lista;
}

int main(int argc, char const *argv[])
{
	/*
	int n1 = 23;
	cout << n1 << endl;
	int *ptr;
	ptr = new int;
	cout << ptr << endl;
	cout << *ptr << endl;
	*ptr = n1;
	cout << *ptr << endl;
	n1 = 40;
	cout << *ptr <<endl;
	delete ptr; //importante
	*/

	/*
	nodo *lista1;
	lista1 = new nodo;
	iniciarlista(lista1,90);
	lista1 = addvaloresmalo(lista1, 95);
	lista1 = addvaloresmalo(lista1, 94);
	lista1 = addvaloresmalo(lista1, 93);
	lista1 = addvaloresmalo(lista1, 92);
	printlista(lista1);
	*/
	
	nodo *lista2 = new nodo;
	iniciarlista(lista2, 38);
	addvaloresbueno(lista2,588);
	addvaloresbueno(lista2,666);
	printlista(lista2);

	cout<<"borrarnodo"<<endl;
	borrarnodo(lista2,588);
	printlista(lista2);
	borrarlista(lista2);
	
	return 0;
}