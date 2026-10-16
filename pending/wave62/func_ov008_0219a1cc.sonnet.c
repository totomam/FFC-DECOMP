#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
typedef void (*Fn)(S*, void*);
extern uint32_t func_0209a76c(uint32_t, uint32_t);
extern void func_ov008_0219a238(void*);
extern void func_ov005_02196144(void*, uint8_t);
extern void func_ov008_0219a290(void*);
extern void func_02069828(void*, S);
int func_ov008_0219a1cc(uint8_t *p) {
    uint32_t a = p[0x141];
    p[0x140] = (p[0x140] + a) % (a + 1);
    func_ov008_0219a238(p);
    func_ov005_02196144(*(void**)(p + 0xe0), p[0x140] + 1);
    func_ov008_0219a290(p);
    if (*(uint32_t*)(p + 0x14c) != *(uint32_t*)(p + 0xc4)) {
        S s;
        void *o = *(void**)(p + 0xe8);
        (*(Fn**)o)[4](&s, o);
        func_02069828(p, s);
    }
    return 1;
}
