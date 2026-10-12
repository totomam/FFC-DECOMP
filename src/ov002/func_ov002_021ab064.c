#include "ffc/types.h"

extern int func_ov002_021a16fc(void *o);
extern void *func_02015ba4(void *unused, uint32_t index);
extern uint32_t func_ov002_021acf84(void *o);
extern uint32_t func_ov002_021aa11c(const void *o, uint32_t bit);
extern uint32_t func_ov002_021ad008(void *o, uint32_t i, uint32_t f);
extern void *func_02015c98(void *unused, uint32_t index);
extern int func_ov002_021a18bc(const void *o);
extern int func_ov002_021aa820(void *o);
extern uint32_t func_ov002_021ab028(void *o);
extern uint32_t func_ov002_021ad084(void *o);
extern void *data_020b8e44;

uint32_t func_ov002_021ab064(uint8_t *self, uint32_t param) {
    uint32_t mask = 0;
    uint32_t i;
    uint32_t idx;
    int v;
    uint8_t *o;
    uint8_t *p;
    uint32_t off;
    uint8_t kind;

    v = func_ov002_021a16fc(*(void **)(self + 0xbc));
    func_02015ba4(data_020b8e44, *(uint32_t *)(self + 0xc0));

    for (i = 0; i <= func_ov002_021acf84(self); i++) {
        if (i != func_ov002_021acf84(self)) {
            if (param && func_ov002_021aa11c(self + 0x190, 4)) {
                if (*(uint32_t *)(self + 0x244) & (1u << i)) continue;
            }
            idx = func_ov002_021ad008(self, i, 0);
            o = func_02015c98(data_020b8e44, idx);
            off = *(uint32_t *)(o + 0x14);
            if (off == 0) o = 0; else o = o + off;
            kind = *o;
            if (kind == 6) goto k6;
            if (kind == 0xb) goto k8;
            if (kind != 0xc) goto a6;
k8:
            if (func_ov002_021a18bc(*(void **)(self + 0xbc)) <= 1) continue;
            goto a6;
k6:
            if (func_ov002_021aa820(self) <= 1) continue;
a6:
            idx = func_ov002_021ad008(self, i, 0);
        } else {
            if (!func_ov002_021ab028(self)) continue;
            idx = func_ov002_021ad084(self);
        }
        o = func_02015c98(data_020b8e44, idx);
        off = *(uint32_t *)(o + 0x10);
        if (off == 0) o = 0; else o = o + off;
        if (v < *(uint16_t *)o) continue;
        mask |= 1u << i;
    }
    return mask;
}
