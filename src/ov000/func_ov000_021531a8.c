#include "ffc/types.h"

typedef struct Obj {
    uint32_t pad0;
    uint16_t type;
    uint16_t pad6;
    uint32_t pad8[3];
    uint32_t state;
} Obj;

typedef struct Holder {
    uint32_t pad0;
    Obj *obj;
} Holder;

extern Holder data_ov000_0216e280;
extern void func_ov000_02153bf0(void);
extern uint32_t func_ov000_02153a0c(void);
extern void func_ov000_02153c04(void);
extern uint32_t func_ov000_0215287c(void);
extern void func_020871d8(uint32_t n);

void func_ov000_021531a8(void)
{
    Obj *p = data_ov000_0216e280.obj;
    if (p == 0) {
        return;
    }
    if (p->type == 1) {
        if (p->state == 1) {
            func_ov000_02153bf0();
            while ((func_ov000_02153a0c() - 2) > 2) {
            }
            func_ov000_02153c04();
        }
        data_ov000_0216e280.obj = 0;
    } else {
        if (func_ov000_0215287c() == 0) {
            do {
                func_020871d8(10);
            } while (func_ov000_0215287c() == 0);
        }
        data_ov000_0216e280.obj = 0;
    }
}
