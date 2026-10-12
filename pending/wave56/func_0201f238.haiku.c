#include "ffc/types.h"

extern uint32_t func_0201b924(const void *object);
extern uint32_t func_02036890(void *object);
extern uint32_t func_02015a58(uint32_t v);
extern uint32_t func_02035ff4(void *object);
extern uint32_t func_020368cc(void *object, uint32_t idx);
extern void func_020369f0(void *object, uint32_t a, uint32_t b, uint32_t c);
extern uint8_t func_02036360(const void *object);
extern uint32_t data_020b8e44;

typedef struct Obj {
    uint8_t pad[0x54];
    uint8_t *p54;
    uint8_t *p58;
    uint8_t *p5c;
} Obj;

void func_0201f238(Obj *self) {
    uint8_t *base;
    uint8_t *ent;
    uint32_t i;

    uint32_t idx = func_0201b924(self);
    uint32_t off = idx * 0x58;
    base = self->p54;
    ent = base + off;
    if (func_02036890(ent) >= 1) {
        return;
    }
    for (i = 1; i < func_02015a58(data_020b8e44); i++) {
        if (func_02035ff4(self->p58 + 0x60 * i) != 0 &&
            func_020368cc(ent, i) == 0) {
            func_020369f0(ent, i, 0, 0);
            if (func_02036890(ent) >= 1) {
                return;
            }
        }
    }
    for (i = 0; i < 0x64; i++) {
        uint32_t o = 0x60 * i;
        if (func_02035ff4(self->p5c + o) != 0) {
            uint8_t v = func_02036360(self->p5c + o);
            func_020369f0(ent, v, 1, i);
            if (func_02036890(ent) >= 1) {
                return;
            }
        }
    }
}
