#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov008_0219a238(void *p);
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov008_0219a290(void *p);
extern void func_02069828(void *p, P v);
typedef void (*Fn)(P*, void*);
int func_ov008_0219a168(uint8_t *t) {
    t[0x140] = (uint8_t)(func_0209a76c(t[0x140] + 1, t[0x141] + 1) >> 32);
    func_ov008_0219a238(t);
    func_ov005_02196144(*(uint32_t*)(t + 0xe0), (uint8_t)(t[0x140] + 1));
    func_ov008_0219a290(t);
    if (*(uint32_t*)(t + 0x14c) != *(uint32_t*)(t + 0xc4)) {
        void *o = *(void**)(t + 0xe8);
        P v; (*(Fn**)o)[4](&v, o);
        func_02069828(t, v);
    }
    return 1;
}
