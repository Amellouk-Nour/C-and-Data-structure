# C-and-Data-Structure

Ce dépôt est conçu pour faciliter la compréhension des structures de données en utilisant le C/C++. Il est destiné aux étudiants en informatique, aux développeurs débutants et à toute personne intéressée par les bases de la programmation en C/C++. Le dépôt couvre les fondamentaux comme les variables, les pointeurs, le passage par valeur, et explore également l'utilisation de la mémoire et des structures de données complexes, des tableaux aux graphes. Vous trouverez aussi des explications sur divers algorithmes classiques et avancés en informatique.

## What is a Data Structure?

En base, un programme est un ensemble d'instructions qui effectue des opérations sur des données. Sans données, aucune instruction ne peut être exécutée. La manière dont un programme gère et organise les données dans la mémoire principale est ce que l'on appelle la **structure de données**.

### Types de Structures de Données

- **Physical Datastructure**: Définit comment les données sont arrangées en mémoire.

  - Arrays
  - Matrices
  - Linked Lists

- **Logical Datastructure**: Définit comment les données peuvent être utilisées en mémoire.
  - Stack
  - Queue
  - Trees
  - Graphs
  - Hashing

## Gestion de la Mémoire

Lors de l'exécution d'un programme, la mémoire allouée par le système d'exploitation est divisée en plusieurs segments clés, chacun ayant un rôle spécifique :

### Stack (Pile)

La _stack_ est utilisée pour gérer les appels de fonctions et les variables locales. À chaque appel de fonction, un bloc de mémoire (frame) est créé sur la stack pour stocker les paramètres de la fonction, ses variables locales, et l'adresse de retour. Ce mécanisme permet de suivre où chaque fonction doit retourner après son exécution et de nettoyer les variables locales qui ne sont plus nécessaires.

### Heap (Tas)

Le _heap_ est utilisé pour l'allocation dynamique de mémoire. Contrairement à la stack, les données dans le heap doivent être explicitement allouées et libérées. Cela permet de gérer des données dont la taille ne peut être déterminée qu'au moment de l'exécution et qui doivent persister au-delà de la durée de vie des appels de fonction.

### Text Segment

Le _Text Segment_ (ou segment de code) contient le code compilé de votre programme. C'est une région de mémoire en lecture seule qui est utilisée pour stocker les instructions que votre CPU exécute. Protéger ce segment en lecture seule aide à prévenir les bugs de sécurité, comme les modifications non autorisées du code.

### Résumé

La compréhension de ces segments de mémoire est essentielle pour optimiser la performance et la sécurité des programmes. La distinction entre stack et heap est particulièrement cruciale, car elle influence directement la gestion de la mémoire et la correction des erreurs de mémoire.

## C and C++ Basics

### Arrays

Les tableaux sont une collection d'éléments de données similaires. ils sont disposés dans la mémoire de manière contiguë. Pour déclarer un tableau de type entier en C/C++:

```c
int main(){
    int A[5];
}
```

Pour déclarer et initialiser un tableau :
```c
int B[5]={1,2,3,4,5};
```

Par exemple, ici quand le programme est éxecuté, la fonction **main** est empiler et le tableau est stocké dans la _stack_ .

Pour stocker un élément d'indice i, sachant que dans un tableau de taille n-1 les éléments sont indéxés de **0** à **n-1**, on peut utiliser l'instruction suivante en C/C++:

```c
A[i]=3;//ici on va inserer 3
```
Pour pouvoir afficher tous les éléments d'un tableau en C++ :

```c
for(int x:D){
  // x élément de D
}
```
NB: si au moin une valeur du tableau est **_initailisé_** à la **_déclaration_** alors le reste des valeurs sera null, sinon si aucune valeur n'est affecté à une case donné alors elle contiendra une _garbage value_.


