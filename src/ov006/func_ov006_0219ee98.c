#include "ffc/types.h"

extern int (*data_ov006_021bafc0)(int);

int func_ov006_0219ee98(int a, int b)
{
    if (b > 0) {
        return data_ov006_021bafc0(b);
    }
    return 0;
}
