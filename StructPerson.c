#include "Persons.h"

Person CreatePerson(const char* name, const char* fio, const char* patr, unsigned int age) {
    Person p;
    p.name = (char*)malloc(sizeof(char) * strlen(name));
    strcpy(p.name, name);

    p.fio = (char*)malloc(sizeof(char) * strlen(fio));
    strcpy(p.fio, fio);

    p.patr = (char*)malloc(sizeof(char) * strlen(patr));
    strcpy(p.patr, patr);

    p.age = age;

    return p;
}
