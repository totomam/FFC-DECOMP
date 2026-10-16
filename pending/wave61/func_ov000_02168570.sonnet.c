#include "ffc/types.h"
extern int func_ov000_02168768(void *a);
extern uint8_t *func_ov000_0216876c(void *a, int i);
extern int func_ov000_021684f8(void *a);
int func_ov000_02168570(int *self, void *p)
{
    int i = self[2] + 1;
    int n = 0;
    for (; i < func_ov000_02168768((void *)self[0]); i++) {
        uint8_t *e = func_ov000_0216876c((void *)self[0], i);
        int v = *(int *)(e + 0x14);
        if (v == self[2]) {
            if (p == 0 || func_ov000_021684f8(p) != 0) n++;
        } else if (v < self[2]) break;
    }
    return n;
}
