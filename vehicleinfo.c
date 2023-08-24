#include<stdio.h>
#include<string.h>

struct vehicle {
    char name[20];
    int year;
    char color[10];
    char engine[10];
    int chasis;
    char price[50];

};

struct vehicle car = {"Honda Civic", 2020, "Black", "Petrol", 121369874, "18,00,000/-"};



void func_car(){
    printf("DETAIL OF VEHICLE:\n NAME: %s\n YEAR: %d\n COLOR: %s\n ENGINE: %s\n CHASIS No.: %d\n PRICE: %s", car.name,car.year,car.color,car.engine,car.chasis,car.price );
}

int main(){

    strcpy( car.color, "red");
    strcpy( car.engine, "deisel");
    func_car();

    return 0;
}