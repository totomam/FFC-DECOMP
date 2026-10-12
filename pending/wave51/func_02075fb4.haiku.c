#include "ffc/types.h"

extern uint32_t func_02055880(uint32_t p);
extern void func_02055c20(void *a, uint32_t b);
extern void func_02056858(uint32_t p);
extern void func_02056844(void *p);
extern void func_02023570(void *a, void *b, void *c);

void func_02075fb4(uint8_t *self) {
    uint32_t i;
    uint32_t *obj;
    uint32_t *mid;
    uint32_t *inner;
    uint32_t r;
    uint32_t buf[4];
    void *slot;
    uint8_t *base;
    uint32_t cnt;

    base = self;
    slot = base;
    cnt = *(uint32_t *)(base + 0x4c);
    i = 0;
    if (cnt <= 0) {
        return;
    }
    do {
        slot = (uint8_t *)base + 0x14;
        obj = ((uint32_t **)*(uint32_t **)(base + 0x54))[i];
        if (obj[0] != 0) {
            mid = (uint32_t *)obj[2];
            inner = (uint32_t *)mid[2];
            if (inner[1] != 0) {
                r = func_02055880(inner[0]);
                if (r != 0) {
                    func_02055c20(slot, r);
                }
                inner = (uint32_t *)mid[2];
                if (inner != 0) {
                    func_02056858(inner[0]);
                    inner[0] = 0;
                    func_02056844(inner);
                }
                buf[1] = (uint32_t)mid;
                func_02023570(&buf[0], obj, &buf[1]);
            }
        }
        i++;
    } while (i < *(uint32_t *)(base + 0x4c));
}
