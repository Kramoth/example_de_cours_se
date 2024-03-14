# Exemple du cours SE 

Dans ce repo vous trouverez les codes des exemple et exercices vu en cours de SE
## Installation

Pour pouvoir utiliser ces codes, ouvrir un terminal et taper la commande suivante:
```sh
git clone https://github.com/Kramoth/exemple_de_cours_se.git
cd exemple_de_cours_se
mkdir bin
```

## Compilation 

une fois a la racine du projet git:

```sh
gcc -o bin/add src/add.c 
gcc -o bin/age src/age.c 
gcc -o bin/FtoC src/FtoC.c 
gcc -o bin/hello src/hello.c 
gcc -o bin/moyenne src/moyenne.c 
gcc -o bin/puissance src/puissance.c -lm
gcc -o bin/test_calc src/test_calc.c 
```

## Execution
 Toujours a la racine du projet git:
 
 ```sh
 bin/add
 ```
  ```sh
 bin/hello
 ```
 ```sh
 bin/age
 ```
```sh
 bin/moyenne
 ```
  ```sh
 bin/test_calc
 ```
 ```sh
 bin/FtoC
 ```
```sh
 bin/puissance
 ```
