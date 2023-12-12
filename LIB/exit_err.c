
#include "../INCLUDE/my.h"

void exit_err(char *mess)
{
    write(2, mess, strlen(mess));
    exit(84);
}