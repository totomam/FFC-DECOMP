#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    struct Obj *next;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t flags;
} Obj;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t ctx);
extern uint32_t func_0207e5c4(const void *object);
extern int32_t func_0208be8c(uint32_t off, uint32_t x, const int8_t *s);
extern Obj *data_021410cc;

Obj *func_0207e1cc(uint32_t x, const int8_t *s) {
    Obj *p;
    uint32_t ctx;
    uint32_t off;
    int t;

    ctx = func_02088978();
    p = data_021410cc;
    while (p != 0) {
        t = (p->flags & 2) ? 1 : 0;
        if (t != 0) {
            off = func_0207e5c4(p);
            if (func_0208be8c(off, x, s) == 0) {
                if (s[off] == 0) {
                    break;
                }
            }
        }
        p = p->next;
    }
    func_0208898c(ctx);
    return p;
}
