#include <stdio.h>
#include <unistd.h> //pid_t typedef in <sys/types.h>
#include <signal.h> 
int main (){
printf ("The process ID is %d\n", (int) getpid ());
printf ("The parent process ID is %d\n", (int) getppid ());

int x = (int) getpid();
printf("Int x is: %d", x);


kill (x, SIGTERM);

return 0;
}
