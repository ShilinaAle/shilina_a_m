#include "counters.h"

void Counters::defcount(int step)
{
    steps = step;
    cookie = 0;
}

void Counters::stepminus()
{
    steps -=1;
}

void Counters::cookieplus()
{
    cookie +=1;
}

int Counters::getcookie()
{
    return cookie;
}

int Counters::getsteps()
{
    return steps;
}
