#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

//Exit codes above 128 have
//a special meaning—when a process is terminated by a signal, its exit code is 128 plus
//the signal number.

sig_atomic_t sigusr1_count = 0;
void handler (int signal_number)
{
++sigusr1_count;
}
int main ()
{
struct sigaction sa;
memset (&sa, 0, sizeof (sa));
sa.sa_handler = &handler;
sigaction (SIGUSR1, &sa, NULL);
/* Do some lengthy stuff here. */
/* ... */
printf ("SIGUSR1 was raised %d times\n", sigusr1_count);
return 0;
}
