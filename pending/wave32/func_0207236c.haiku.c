#include "ffc/types.h"

extern uint8_t data_020b2340[];
extern uint8_t data_0213e018[];
extern uint8_t data_0213e188[];
extern void func_020534f8(uint16_t v);
extern uint16_t func_02053524(void);
extern void func_ov000_02152e44(void *sub, uint16_t v, int flag, void *param);

typedef struct Obj {
    void *vtbl;
    uint32_t pad4[2];
    uint32_t word_c;
    uint32_t pad10;
    uint16_t h14;
    uint8_t b16;
} Obj;

void *func_0207236c(void *r0, void *r1) {
    Obj *p = (Obj *)r0;
    p->word_c &= ~0xffu;
    p->vtbl = (void *)data_020b2340;
    p->h14 = 0;
    p->b16 = 0;
    if (data_0213e018[3] == 0) {
        p->h14 = 3;
        func_020534f8(p->h14);
    } else {
        p->h14 = func_02053524();
    }
    func_ov000_02152e44((uint8_t *)p + 0x18, p->h14, 1, r1);
    *(Obj **)(data_0213e188 + 0xc) = p;
    return p;
}
