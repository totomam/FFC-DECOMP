#include "ffc/types.h"

typedef struct Obj {
    uint32_t w0;
    uint16_t state;
    uint16_t pad;
    uint32_t w8[3];
    uint32_t f14;
} Obj;

typedef struct Glob {
    uint32_t w0;
    Obj *p;
} Glob;

extern Glob data_ov000_0216e280;
extern void func_ov000_02153bf0(void);
extern uint32_t func_ov000_02153a0c(void);
extern void func_ov000_02153c04(void);
extern int func_ov000_0215287c(void);

int func_ov000_021531fc(void)
{
    Obj *p = data_ov000_0216e280.p;
    uint32_t r;

    if (p == 0) {
        return 1;
    }
    if (p->state == 8) {
        return 1;
    }
    if (p->state == 1) {
        if (p->f14 == 1) {
            func_ov000_02153bf0();
            data_ov000_0216e280.p->f14 = 5;
            return 0;
        }
        if (p->f14 == 5) {
            r = func_ov000_02153a0c();
            if (r == 1) {
                return 0;
            }
            r = r - 2;
            if (r <= 2) {
                func_ov000_02153c04();
            }
        }
        data_ov000_0216e280.p = 0;
        return 1;
    }
    p->state = 5;
    if (func_ov000_0215287c()) {
        data_ov000_0216e280.p = 0;
        return 1;
    }
    return 0;
}
