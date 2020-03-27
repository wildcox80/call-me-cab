#include "car_call.h"
cab_t *add_new_cab(cab_t **head, int *cab_amount, char *nombres, char *estado, unsigned int maletero)
{
	cab_t *new_car;
	cab_t *temp;

	if (*cab_amount >= 73)
	{
		printf("STATION FULL");
		return (NULL);
	}

	new_car = malloc(sizeof(cab_t));
	if (new_car == NULL){
		return(NULL);
	}

	new_car->nombres = (char *) malloc(100);
	new_car->estado = (char *) malloc(100);

	strcpy(new_car->nombres, nombres);
	strcpy(new_car->estado, estado);

	new_car->maletero=maletero;

	if (*head == NULL)
	{
		*head = new_car;
		return(new_car);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_car;

	*cab_amount += 1;
	return (new_car);
}
