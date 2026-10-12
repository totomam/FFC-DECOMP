#include "ffc/types.h"

extern void func_02017060(void *dst, uint32_t v);
extern uint8_t *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(void *obj);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t w0;
    void *h1;
    void *h2;
    uint8_t flag;
} Tmp;

void func_ov003_02174d2c(Pair *out, uint16_t id, uint32_t flag) {
    Pair v;
    Tmp t;
    uint32_t i;
    uint32_t cnt;
    uint8_t *mar;
    uint8_t *ent;

    func_02017060(&t, data_020b8e44);
    mar = func_02052d90(t.h1, t.h2);
    cnt = *(uint32_t *)(mar + 0x1c);
    for (i = 0; i < cnt; i++) {
        mar = func_02052d90(t.h1, t.h2);
        ent = mar + *(uint32_t *)(mar + 0x20) + i * 0x18;
        if (id == *(uint16_t *)ent) {
            if (flag) {
                v.a = *(uint32_t *)(ent + 8);
                v.b = *(uint32_t *)(ent + 0xc);
            } else {
                v.a = *(uint32_t *)(ent + 0x10);
                v.b = *(uint32_t *)(ent + 0x14);
            }
            *out = v;
            if (t.h1 != 0) {
                if (t.flag != 0) {
                    func_02052d3c(t.h1, t.h2);
                }
                func_02052c04(t.h1);
            }
            func_02053290(&t);
            return;
        }
    }
    if (t.h1 != 0) {
        if (t.flag != 0) {
            func_02052d3c(t.h1, t.h2);
        }
        func_02052c04(t.h1);
    }
    func_02053290(&t);
}
