#include "ffc/types.h"
extern int func_ov006_0219fb98(void);
extern void func_02087508(void *a, void *b, int c);
extern uint8_t data_ov006_021bafe0[];
int func_ov006_0219f36c(void)
{
    int r = -1;
    int buf;
    int again;
    if (func_ov006_0219fb98() != 0) {
        do {
            func_02087508(data_ov006_021bafe0, &buf, 1);
            if (buf == 14) { again = 0; r = again; } else again = 0;
        } while (again != 0);
    }
    return r;
}
