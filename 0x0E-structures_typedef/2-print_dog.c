#include <stido.h>
#include "dog.h"

void print_dog(struct dog *d){
    
    if (d) {
        printf ( "name : %s\n" , d->name ? d->name : "(nil)");
        printf ( "owner : %s\n" , d->owner ? d->owner : "(nil)");
        printf ( "age : %f\n" , d->age ? d->age : "(nil)");
   
    
}
