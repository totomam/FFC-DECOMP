#include "ffc/types.h"

typedef struct {
    uint32_t v0;
    uint32_t a, b, c, d, e, f;
    uint32_t pad[7];
} Slot;

extern volatile uint32_t data_ov007_021c9bac[];
extern Slot data_ov007_021c9bc4[];
extern uint8_t data_ov007_021c87ac[];

extern int func_ov007_021bf958(int *out, int b, int c, int d);
extern void func_ov007_021bff24(void);
extern int func_ov007_021bfa14(void);
extern int func_ov007_021c0224(uint32_t id, uint32_t *args, int (*fn)(void), int g);
extern uint32_t func_ov007_021c0148(uint32_t id);
extern void func_ov007_021bf91c(int a, uint8_t *b, uint32_t c);
extern int func_ov007_021bfddc(int a, uint32_t b);
extern void func_ov007_021bff10(int a);

int func_ov007_021bf6b8(int a, int b, int c, int d, int e, int f, int g)
{
    int out;
    Slot *s;
    int r;
    uint32_t n;

    if (func_ov007_021bf958(&out, b, c, d) != 0) {
        return out;
    }
    func_ov007_021bff24();
    s = &data_ov007_021c9bc4[data_ov007_021c9bac[5]];
    s->a = a;
    s->b = b;
    s->c = c;
    s->d = d;
    s->e = e;
    s->f = f;
    r = func_ov007_021c0224(data_ov007_021c9bac[1], &s->a, func_ov007_021bfa14, g);
    if (r == 0) {
        n = func_ov007_021c0148(data_ov007_021c9bac[1]);
        func_ov007_021bf91c(0x3ca, data_ov007_021c87ac, n);
        return func_ov007_021bfddc(9, n);
    }
    data_ov007_021c9bc4[data_ov007_021c9bac[5]].v0 = r;
    func_ov007_021bff10(9);
    return 0;
}
