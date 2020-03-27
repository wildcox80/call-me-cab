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

#endif
