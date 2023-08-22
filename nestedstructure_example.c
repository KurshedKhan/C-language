#include<stdio.h>
#include<string.h>

struct Athlete_Personal{

    char name[20];
    int age;
    float height;
    char country[20];

};
struct Athlete_Professional{

    char amatrecord[20];
    char prorecord[10];
    char weightClass[20];
    int fightsLeft;

    struct Athlete_Personal Details;
};

int main(){

    struct Athlete_Professional Record = { "Sambo World Champ", "29-0-0", "145LightWeight", 0, "Khabib Nurmagomedov", 35, 5.7, "Dagestan"};

    printf("Name: \n%s\n", Record.Details.name);

    printf("Age: %d\n", Record.Details.age);

    printf("Amature Record: %s\n", Record.amatrecord);

    printf("Professional Record: %s\n", Record.prorecord);


    return 0;
}

