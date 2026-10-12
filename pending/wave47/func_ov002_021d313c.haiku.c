#include "ffc/types.h"

int func_ov002_021d313c(int x)
{
    int r;
    if (x >= 6) {
        x -= 6;
    }
    if (x <= -6) {
        x += 6;
    }
    x += 5;
    r = 0;
    switch (x) {
    case 0: r = 1; break;
    case 1: r = 2; break;
    case 2: r = 3; break;
    case 3: r = 2; break;
    case 4: r = 1; break;
    case 5: r = 0; break;
    case 6: r = 1; break;
    case 7: r = 2; break;
    case 8: r = 3; break;
    case 9: r = 2; break;
    case 10: r = 1; break;
    }
    return r;
}
