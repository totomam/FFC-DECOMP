#include "ffc/types.h"

extern int func_0200c600(void *a, void *b);
extern void func_0200a7b0(void *a, void *b);
extern void func_0200a5dc(void *a, void *b);
extern void func_02068e18(void *a, void *b);
extern void *func_0200a678(void *object);
extern void func_ov013_021c10d8(void *object);

typedef void (*VFn)(void *);
#define VCALL(obj, off) (*(VFn *)((uint8_t *)*(void **)(obj) + (off)))(obj)

typedef struct {
    uint32_t flag : 1;
    uint32_t cnt : 7;
    uint32_t rest : 24;
} Fld;

typedef struct {
    uint8_t flag : 1;
    uint8_t cnt : 7;
} Fld8;

static inline uint32_t getn(uint8_t *q){ if (((Fld *)q)->flag == 0) return ((Fld8 *)q)->cnt; return *(uint32_t *)(q + 4); }

void func_ov013_021c0f68(uint8_t *a, uint32_t b, void *c)
{
    uint8_t *o;
    uint32_t v;
    void *p1;
    void *p2;
    uint8_t *s;
    void *cc = c;

    s = a + (b << 3);
    s[0x8c] = 1;
    o = *(uint8_t **)(s + 0x90);

    if (func_0200c600(cc, o + 0x88) == 0) {
        func_0200a7b0(o + 0x88, cc);

        v = getn(o + 0x88);

        if (v == 0) {
            p1 = *(void **)(o + 0x80);
            VCALL(p1, 0x2c);
            p2 = *(void **)(o + 0x84);
            VCALL(p2, 0x2c);
        } else {
            uint32_t buf[3];
            p1 = *(void **)(o + 0x80);
            VCALL(p1, 0x28);
            p2 = *(void **)(o + 0x84);
            VCALL(p2, 0x28);
            func_0200a5dc(buf, o + 0x88);
            p2 = *(void **)(o + 0x84);
            func_02068e18(p2, buf);
            func_0200a678(buf);
        }
    }

    func_ov013_021c10d8(a);
}
