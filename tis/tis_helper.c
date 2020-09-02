#include <time.h>

time_t time(time_t *tloc) {
    static result = 0;
    return result++;
}

#include <stdlib.h>

void srand(unsigned int seed)
{
    return;
}

int rand(void)
{
    static result = 0;
    return result++;
}
