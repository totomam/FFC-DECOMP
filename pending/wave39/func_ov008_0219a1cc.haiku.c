#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov008_0219a238(uint8_t *p);
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov008_0219a290(uint8_t *p);
extern void func_02069828(uint8_t *p, uint32_t a, uint32_t b);

int func_ov008_0219a1cc(uint8_t *p)
{
    uint32_t buf[2];
    uint64_t r;
    uint32_t n;
    uint32_t v;
    uint8_t *s;
    void *obj;
    uint32_t *vt;
    void (*fn)(uint32_t *, void *);

    n = 0x141;
    s = p;
    v = s[n];
    r = func_0209a76c((uint32_t)(s[n - 1] + v), v + 1);
    s[n - 1] = (uint8_t)(r >> 32);
    func_ov008_0219a238(s);
    func_ov005_02196144(*(uint32_t *)(s + 0xe0), (uint8_t)(s[n - 1] + 1));
    func_ov008_0219a290(s);
    n += 0xb;
    if (*(uint32_t *)(s + n) != *(uint32_t *)(s + 0xc4)) {
        obj = *(void **)(s + 0xe8);
        vt = *(uint32_t **)obj;
        fn = (void (*)(uint32_t *, void *))vt[4];
        fn(buf, obj);
        func_02069828(s, buf[0], buf[1]);
    }
    return 1;
}
