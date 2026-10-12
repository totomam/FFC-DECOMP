#include "ffc/types.h"

extern int func_ov000_02159000(void *p);
extern int func_ov000_0215b6a0(void *p);
extern void *func_ov000_02163690(void *p);
extern void func_ov000_0215bb2c(int a, int b, int c, int d);
extern void func_ov001_021807d0(int x);
extern uint32_t data_ov000_02170064[];

typedef struct {
    uint8_t pad[0x16];
    uint8_t f16;
} Sub;

int func_ov000_0215b900(void *a)
{
    int r;
    Sub *sub;
    uint32_t *s = (uint32_t *)data_ov000_02170064[1];

    if (s != 0 && func_ov000_02159000(s) == 0) {
        s = (uint32_t *)data_ov000_02170064[1];
        switch (s[9]) {
        case 4:
        case 5:
            goto ok;
        }
    }
    return -1;

ok:
    r = func_ov000_0215b6a0(a);
    if (r != 0) {
        func_ov001_021807d0(r);
        return 0;
    }
    sub = (Sub *)func_ov000_02163690(a);
    if (sub == 0) {
        return -2;
    }
    func_ov000_0215bb2c(0, 0, 1, sub->f16);
    return 0;
}
