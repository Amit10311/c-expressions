#ifndef STATICGBDECLARATION_H
#define STATICGBDECLARATION_H

#endif // STATICGBDECLARATION_H
#include <iostream>
using namespace std;
/* This must all be in one file - preferably by itself. */

static int series_num;
void series_start(int seed);
int series(void);

int series(void)
{
series_num = series_num+23;
return series_num;
}

/* initialize series_num */
void series_start(int seed)
{
series_num = seed;

}


/*In C++, the preceding use of static is still supported, but deprecated.
 * This means that it is not recommended for new code. Instead, you should use a namespace, which is described
in part two. */
