#include "ffc/types.h"

extern int func_0206cb44(void *p, int v);
extern void func_0206d4d0(void *p, uint32_t v);
extern int func_0206d47c(void *p);

typedef struct {
    uint8_t pad0[2];
    uint16_t f2;
    uint8_t pad4[4];
    uint16_t f8;
    uint8_t padA[4];
    uint16_t fe;
    uint32_t arr[1];
} S;

int func_0206d734(void *p0, S *p1)
{
    int i;

    if (p1->f2 != 0) {
        return func_0206cb44(p0, p1->f2);
    }
    if (p1->f8 != 4) {
        if (p1->f8 == 5) {
            for (i = 0; i < p1->fe; i++) {
                func_0206d4d0(p0, p1->arr[i]);
            }
        }
    }
    return func_0206d47c(p0);
}
