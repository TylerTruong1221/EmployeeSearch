#include <string.h>
#include <math.h>
#include "Employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber) {
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr< endPtr; ptr++) {
        if(ptr->number == targetNumber)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char *targetName) {
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr<endPtr; ptr++) {
        if(strcmp(ptr->name, targetName) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize, char *targetPhone) {
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr<endPtr; ptr++) {
        if(strcmp(ptr->phone, targetPhone) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double *targetSalary) {
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr<endPtr; ptr++) {
        if(fabs(ptr->salary - *targetSalary) < 0.0001){
            return (PtrToEmployee) ptr;
    }
    return NULL;
    }
}