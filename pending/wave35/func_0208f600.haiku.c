#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t a : 5;
    uint32_t x : 2;
    uint32_t d : 3;
    uint32_t e : 22;
    uint32_t lo : 3;
    uint32_t hi : 29;
    uint32_t rest[16];
} Elem;

extern Elem data_020b2bb0;
extern int func_0208fddc(Elem *p);

int func_0208f600(void) {
    int ret = 0;
    int i = 1;
    Elem *base = &data_020b2bb0;
    Elem *p = base;
    int flag = i;
    do {
        if (p->d != 0) {
            if ((p->x & flag) != 0) {
                if (p->lo == 1) {
                    if (func_0208fddc(p) != 0) {
                        ret = -1;
                    }
                }
            }
        }
        if (i < 3) {
            p = (Elem *)((uint8_t *)base + 0x4c * i);
            i++;
        } else {
            p = 0;
        }
    } while (p != 0);
    return ret;
}
