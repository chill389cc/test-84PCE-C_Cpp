#include <tice.h>
#include <stdlib.h>

/* Main function, called first */
int main(void)
{
    /* Clear the homescreen */
    os_ClrHome();

    /* Print a string */
    os_PutStrFull("Hello, World.");

    /* Waits for a key */ //I suppose that this is the equivalent of GetKey
    while (!os_GetCSC());

    /* Return 0 for success */
    return 0;
}
