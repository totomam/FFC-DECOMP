#include "ffc/types.h"

extern void func_0207ac08(uint32_t v);
extern void func_02077b34(void *a, void *b);
extern uint8_t data_0213e6a4[];

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Obj;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
} Sub;

void func_02079fe0(Obj *p) {
    if (p->f8 != 0) {
        func_0207ac08(p->f8);
        Sub *s = (Sub *)p->fc;
        if (s != 0) {
            s->f8 = 0;
            return;
        }
        func_02077b34(data_0213e6a4 + p->f10 * 0x24 + 0xc, p);
    }
}
