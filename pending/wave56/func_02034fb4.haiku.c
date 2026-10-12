#include "ffc/types.h"

typedef struct {
    uint32_t hdr;
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
    Str u;
    volatile uint8_t pad[0x10];
    uint16_t *p;
    uint16_t *q;
    uint32_t n;

    func_0201cf34(data_020b93b8, buf);
    func_0200a630(&s, buf);
    if (flag != 0) {
        func_0200a5dc(&t, &s);
        func_020394fc(&u, &t);
        func_0200a7b0(&s, &u);
        func_0200a678(&u);
        func_0200a678(&t);
    }
    if (s.hdr & 1) {
        n = s.len;
        p = s.ptr;
    } else {
        n = (((uint8_t *)&s)[0] >> 1) & 0x7f;
        p = (uint16_t *)((uint8_t *)&s + 2);
    }
    q = p + n;
    while (q != p) {
        q--;
        func_02068b70(val, *q);
    }
    func_0200a678(&s);
}
