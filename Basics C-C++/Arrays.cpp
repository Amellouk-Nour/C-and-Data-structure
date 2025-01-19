#include <iostream>

using namespace std;

int main(){
    // declaration d'un tableau
    int A[20];
    // declaration et initialisation d'un tableau
    int B[]={1,2,3};
    // affichage de l'element d'indice 3
    printf("%d\n",B[2]);

    //initialiser un element du tableau 
    int C[10]={1};// le reste des valeurs sera initialiser le reste avec 0

    //initialiser le tableau avec des 0 :
    int D[10]={0};
    for(int x:D){
        cout << x <<'\n';
    }

    int E[10];
    //si on initialise pas les valeurs du tableau alors les valeurs contenues sont des garbages values
    for(int x:E){
        cout << x <<'\n';
    }
}