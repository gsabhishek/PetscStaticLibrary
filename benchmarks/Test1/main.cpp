#include "test.h"

int main(int argc,char **args)
{
    PetscErrorCode ierr;
    ierr = PetscInitialize(&argc,&args,NULL,NULL);CHKERRQ(ierr);
    Test obj();
    ierr = PetscFinalize();CHKERRQ(ierr);
    return ierr;
}
