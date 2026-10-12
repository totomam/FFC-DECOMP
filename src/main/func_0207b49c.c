#include "ffc/types.h"

extern void func_0207a7dc(void *p);
extern void *func_0207a964(int idx);
extern void func_02079848(int idx, uint8_t v);
extern void func_0207985c(int idx, uint16_t v);
extern int func_0207986c(int idx, void *p, void *q);

typedef struct {
    uint8_t count;
    uint8_t pad;
    uint16_t b;
    void *ptr;
} Ent;

int func_0207b49c(void *p)
{
    int i;
    Ent *e;
    int j;

    func_0207a7dc(p);
    for (i = 0; i < 0x20; i++) {
        e = (Ent *)func_0207a964(i);
        if (e != 0) {
            func_02079848(i, e->count);
            func_0207985c(i, e->b);
            if (e->ptr != 0 && p != 0) {
                for (j = 0; j < e->count; j++) {
                    if (func_0207986c(i, p, e->ptr) == 0) {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}
