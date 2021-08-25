#ifndef __SOLIDIFY__
#define __SOLIDIFY__

#include "petsc.h"

class Test{
    Test(){
        PetscPrintf(PETSC_COMM_WORLD,"Hello World");
    }
};

#endif
