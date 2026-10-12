#include "ffc/types.h"

extern uint32_t func_020889a4(void);
extern uint32_t func_02088978(void);
extern void func_020889b8(uint32_t);
extern void func_0208898c(uint32_t);

typedef struct {
    uint32_t a;
    uint16_t b;
} S;

int func_020868d8(uint32_t id, S *p, void (*cb)(void), int flag)
{
    uint32_t v;
    if (id != p->b) {
        return -2;
    }
    if (flag) {
        v = func_020889a4();
    } else {
        v = func_02088978();
    }
    p->b = 0;
    if (cb) {
        cb();
    }
    p->a = 0;
    if (flag) {
        func_020889b8(v);
    } else {
        func_0208898c(v);
    }
    return 0;
}
