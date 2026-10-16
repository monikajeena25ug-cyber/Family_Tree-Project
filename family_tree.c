#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person{
    char name[50];
    int age;
    struct Person *father;
    struct Person *mother;
}Person;

Person* create_person(const char *name, int age){
    Person *member= malloc(sizeof(Person));

    if(member == NULL) {
    printf("Error! memory not allocated.");
    return NULL;
    }

    strcpy(member->name,name);
    member ->age = age;
    member ->father = NULL;
    member->mother = NULL;

    return member;
}

void read_person_info(const char *role, char *name_out, int *age_out){
    printf("Enter name for %s: ", role);
    scanf("%s", name_out);

    printf("Enter age for %s: ", role);
    scanf("%d", age_out);
}

int main(){

    char paternal_grandfather_name[50], paternal_grandmother_name[50], maternal_grandfather_name[50], maternal_grandmother_name[50], father_name[50], mother_name[50], my_name[50];
    int paternal_grandfather_age, paternal_grandmother_age, maternal_grandfather_age, maternal_grandmother_age, father_age, mother_age, my_age;



    read_person_info("Paternal Grandfather", paternal_grandfather_name, &paternal_grandfather_age);
    read_person_info("Paternal Grandmother", paternal_grandmother_name, &paternal_grandmother_age);
    read_person_info("Maternal Grandfather", maternal_grandfather_name, &maternal_grandfather_age);
    read_person_info("Maternal Grandmother", maternal_grandmother_name, &maternal_grandmother_age);
    read_person_info("Father", father_name, &father_age);
    read_person_info("Mother", mother_name, &mother_age);
    read_person_info("Yourself", my_name, &my_age);


    return 0;
}
