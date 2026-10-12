#include "ffc/types.h"

typedef struct {
    uint8_t f : 1;
    uint8_t n : 7;
} SB;
typedef struct {
    uint32_t hdr : 1;
    uint32_t rest : 31;
    uint32_t len;
    uint16_t *ptr;
} Str;

extern uint32_t data_020b93b8;
extern void func_0201cf34(uint32_t obj, void *out);
extern void func_0200a630(void *dst, void *src);
extern void func_0200a5dc(void *dst, void *src);
extern void func_020394fc(void *dst, void *src);
extern void func_0200a7b0(void *dst, void *src);
extern void *func_0200a678(void *object);
extern void func_02068b70(uint32_t a, uint16_t b);

void func_02034fb4(uint32_t unused, uint32_t val, int flag)
{
    uint8_t buf[0x98];
    Str s;
    Str t;
    uint8_t ub[28];
    uint16_t *p;
    uint16_t *q;
    uint32_t n;

    func_0201cf34(data_020b93b8, buf);
    func_0200a630(&s, buf);
    if (flag != 0) {
        func_0200a5dc(&t, &s);
        func_020394fc(ub + 16, &t);
        func_0200a7b0(&s, (ub + 16));
        func_0200a678((ub + 16));
        func_0200a678(&t);
    }
    if (!s.hdr) {
        p = (uint16_t *)((uint8_t *)&s + 2);
        q = p + ((SB *)&s)->n;
    } else {
        p = s.ptr;
        q = p + s.len;
    }
    while (q != (!s.hdr ? (uint16_t *)((uint8_t *)&s + 2) : s.ptr)) {
        func_02068b70(val, q[-1]);
        q--;
    }
    func_0200a678(&s);
}
