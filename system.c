#include <stdlib.h>
/*
Invoking a program with root privilege
with the system function, for instance, can have different results on different
GNU/Linux systems.Therefore, it’s preferable to use the fork and exec method for
creating processes.
*/
int main ()
{
int return_value;
return_value = system ("ls -l /");
return return_value;
}
