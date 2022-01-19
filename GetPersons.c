#include "Persons.h"

Person* GetPersons(int argc, char* argv[], int* count) {

    *count = 0;
    for (int i = 1; i < argc; i++) {
        if (CompareString(argv[i], "-person") == 0) {
            *count = *count + 1;
        }
    }

    Person* p = (Person*)malloc(sizeof(Person) * *count);
    for (int i = 0; i < *count; i++) {
        p[i].name = "Не задано";
        p[i].fio = "Не задано";
        p[i].patr = "Не задано";
        p[i].age = 18;
    }

    int index = 0;
    for (int i = 0; i < argc; i++) {
        if (CompareString(argv[i], "-person") == 0) {

            for (int j = i + 1; j < argc && CompareString(argv[j], "-person") != 0; j++) {
                if (CompareString(argv[j], "--fn") == 0) {
                    p[index].name = (char*)malloc(sizeof(char) * strlen(argv[j + 1]));
                    strcpy(p[index].name, argv[j + 1]);
                }
                if (CompareString(argv[j], "--ln") == 0) {
                    p[index].fio = (char*)malloc(sizeof(char) * strlen(argv[j + 1]));
                    strcpy(p[index].fio, argv[j + 1]);
                }
                if (CompareString(argv[j], "--mn") == 0) {
                    p[index].patr = (char*)malloc(sizeof(char) * strlen(argv[j + 1]));
                    strcpy(p[index].patr, argv[j + 1]);
                }
                if (CompareString(argv[j], "--age") == 0) {
                    int age = atoi(argv[j + 1]);
                    p[index].age = age;
                }
            }

            index++;
        }
    }

    return p;
}
