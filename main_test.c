#include "car_call.h"
int main(void)
{
    cab_t *head;
    cab_t *new_cab;
    int cab_amount = 0;

    head = NULL;
    new_cab = add_new_cab(&head, &cab_amount, "Anne", "disponible", 1);
    printf("Cab ammout: %s \n", new_cab->nombres);
    printf("Cab ammout: %d \n", cab_amount);

    new_cab = add_new_cab(&head, &cab_amount, "Colton", "no disponible", 0);
    printf("Cab ammout: %s \n", new_cab->nombres);
    printf("Cab ammout: %d \n", cab_amount);

    new_cab = add_new_cab(&head, &cab_amount, "Corbin", "disponible", 1);
    printf("Cab ammout: %s \n", new_cab->nombres);
    printf("Cab ammout: %d \n", cab_amount);

    new_cab = add_new_cab(&head, &cab_amount, "Daniel" ,"disponible", 0 );
    printf("Cab ammout: %s \n", new_cab->nombres);
    printf("Cab ammout: %d \n", cab_amount);

}
