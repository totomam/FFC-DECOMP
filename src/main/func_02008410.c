#include "ffc/types.h"

extern uint32_t func_02008400(uint8_t *p, uint16_t a, uint16_t b, uint16_t c);
extern void func_020083dc(uint8_t *p, uint32_t idx);
extern void func_020083b8(uint8_t *p, uint32_t idx, int16_t v);

typedef struct {
    uint16_t a;
    uint16_t c;
    uint16_t d;
    uint16_t e;
    uint16_t f;
    uint16_t b;
    uint32_t pad;
} Ent;

void func_02008410(uint8_t *p, uint16_t a, uint16_t b, uint16_t c, uint32_t d, uint32_t e, uint32_t f) {
    uint32_t idx = func_02008400(p, a, b, c);
    Ent *ent = (Ent *)(p + 4 + idx * 16);
    ent->a = a;
    ent->c = c;
    ent->d = d;
    ent->e = e;
    ent->f = f;
    ent->b = b;
    func_020083dc(p, idx);
    func_020083b8(p, idx, *(int16_t *)(p + 0x22));
}
