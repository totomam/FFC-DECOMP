#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern uint8_t *func_0206975c(uint8_t *p);
extern void func_02069848(uint8_t *p, uint8_t *q);
extern void func_020697ac(uint8_t *p, uint8_t *q);
extern uint32_t func_0206940c(uint8_t *q);
extern void func_02069dcc(uint8_t *p, uint8_t *q);
extern void func_0205770c(S8 *out);
extern uint8_t *func_02069888(uint8_t *p, uint32_t a, uint32_t b);
extern S8 data_020b1b58;

void func_0206a278(uint8_t *p)
{
    uint8_t *q = *(uint8_t **)(p + 0x88);
    uint32_t flags = *(uint32_t *)(q + 4);

    if (!(flags & 0x1000)) {
        uint8_t *r = func_0206975c(p);
        if (r != 0) {
            func_02069848(p, 0);
            func_020697ac(p, r);
            if (!((func_0206940c(r) & 2) && r[0x87] == 0 && p[0xb0] == 0)) {
                func_02069dcc(p, r);
            }
        }
        *(S8 *)(p + 0x80) = data_020b1b58;
    } else {
        S8 local;
        uint8_t *s;
        void (*fn)(uint8_t *);
        func_0205770c(&local);
        s = func_02069888(p, local.a, local.b);
        if (s != func_0206975c(p)) {
            p[0xb0] = 0;
        }
        if (s != 0) {
            func_02069848(p, s);
            func_020697ac(p, s);
        } else {
            func_02069848(p, 0);
        }
        fn = (void (*)(uint8_t *))((void **)(*(void **)p))[5];
        fn(p);
    }
}
