#pragma once

int CompareString(const char* lhs, const char* rhs);

typedef struct Person Person;
typedef enum SortTypes SortTypes;

struct Person {
    char* name;
    char* fio;
    char* patr;
    unsigned int age;
};

enum SortTypes {
    ASC = 0,
    DESC,
};

Person CreatePerson(const char* name, const char* fio, const char* patr, unsigned int age);
void SortType(Person* p, int count, SortTypes type);
Person* GetPersons(int argc, char* argv[], int* count);