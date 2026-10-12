#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_0208898c(uint32_t irq);

typedef struct {
    uint32_t off;
    uint32_t limit;
    uint8_t *base;
    uint32_t state;
} Ent;

typedef struct {
    uint32_t w0;
    uint8_t pad[0x2c];
    Ent e[4];
} Ctx;

uint32_t func_ov006_0219ca14(Ctx *c, uint32_t a, void *src, uint32_t n) {
    uint32_t ret = 0;
    uint32_t irq = func_02088978();
    Ent *e;

    for (e = (Ent *)((uint8_t *)c + 0x30); e < (Ent *)((uint8_t *)c + 0x70); e++) {
        if (e->state >= 2) {
            int32_t d = (int32_t)(a - e->off);
            if (d >= 0 && (uint32_t)(d + n) <= e->limit) {
                func_02084ca4(e->base + d, src, n);
                c->w0 = 0;
                ret = 1;
                break;
            }
        }
    }
    func_0208898c(irq);
    return ret;
}
