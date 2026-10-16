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