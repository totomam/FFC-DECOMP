#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02087058(void *);
extern uint32_t func_0207dd08(void *, uint32_t);
extern void *func_0207df24(void *, uint32_t);

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    struct Obj *f8;
    uint32_t fc;
} Obj;

void func_0207e040(Obj *p) {
    Obj *cur = p;
    Obj *head;
    uint32_t r4;
    uint32_t r;

    if (cur == 0) {
        return;
    }
    head = cur->f8;
    do {
        r4 = func_02088978();
        cur->fc |= 0x40;
        if (cur->fc & 4) {
            func_02087058((uint8_t *)cur + 0x18);
            cur = 0;
        }
        func_0208898c(r4);
        if (cur == 0) {
            break;
        }
        r = func_0207dd08(cur, (cur->fc >> 8) & 0xff);
        if (r == 0x100) {
            break;
        }
        cur = func_0207df24(head, 1);
    } while (cur != 0);
}
