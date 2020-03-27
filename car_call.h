#ifndef CAR_CALL.H
#define CAR_CALL.H
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

 typedef stuct cab
 {
	 char *nombres;
	 char *cuit;
	 char *patente;
	 char *marca;
	 char *modelo;
	 char *año;
	 char *estado;
	 unsigned int maletero;
	 struct cab *next;
 } cab_t;

cab_t *add_new_cab(cab_t **head, char *nombres, char *estado, unsigned int maletero);
#endif
