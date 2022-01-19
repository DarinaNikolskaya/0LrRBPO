#include "Persons.h"


void SortType(Person* p, int count, SortTypes type) {
    for (int i = 0; i < count - 1; i++) {


        for (int j = 0; j < count - i - 1; j++) {
            if (type == ASC) {
                if (p[j].age > p[j + 1].age) {
                    Person temp = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = temp;
                }
            }
            else if (type == DESC) {
                if (p[j].age < p[j + 1].age) {
                    Person temp = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = temp;
                }
            }
        }
    }
}
