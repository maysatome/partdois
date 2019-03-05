// look at https://stackoverflow.com/questions/1921539/using-boolean-values-in-c

#include <stdio.h>

typedef enum { false = 0, true = !false } bool;

int main(){

bool bankPermission  = true;// permission from the Bank to perform any transaction
int mySalary = 1000; //

printf("FIRST CASE bankPermission is %d incomes %d \n", bankPermission, mySalary);
// Credit QUASIFAKE LOGIC
if (bankPermission && mySalary > 2000) printf("Bank Allows you to by a new house with your incomes.\n");
else if (!bankPermission && mySalary > 2000) printf("Bank does not allow you to by a new house with your incomes.\n");
else if (!bankPermission) printf("Bank does not allow you to perform any transaction.\n");
else if ( mySalary <= 2000) printf("Your incomes are insufficient.\n");
else printf("Some error occurs. Please contact your manager via +34567898754.\n");


bankPermission  = false;// permission from the Bank to perform any transaction
mySalary = 1000; //

printf("SECOND CASE bankPermission is %d incomes %d \n", bankPermission, mySalary);

// Credit QUASIFAKE LOGIC
if (bankPermission && mySalary > 2000) printf("Bank Allows you to by a new house with your incomes.\n");
else if (!bankPermission && mySalary > 2000) printf("Bank does not allow you to by a new house with your incomes.\n");
else if (!bankPermission) printf("Bank does not allow you to perform any transaction.\n");
else if ( mySalary <= 2000) printf("Your incomes are insufficient.\n");
else printf("Some error occurs. Please contact your manager via +34567898754.\n");

return 0;

}
