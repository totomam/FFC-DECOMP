#include "ffc/types.h"

extern void func_02088f30(void);
extern int func_0204f878(uint32_t a, int b);
extern int func_0204f8a4(uint32_t a, uint32_t b, int c, int d, int e, int f, int g, int h, int i, int j);
extern uint32_t data_0213df18;

int func_0205cee4(uint32_t *p, uint32_t b) {
    uint32_t i;
    uint32_t v;
    if (p[0xe] != 1) {
        func_02088f30();
    }
    v = p[1];
    i = 1;
    do {
        if (func_0204f878(data_0213df18, i) == v) {
            goto found;
        }
        i++;
    } while (i <= 4);
    func_02088f30();
found:
    return func_0204f8a4(data_0213df18, 0, b, 0, 3, 0, i, 0, 0x10, 0);
}
