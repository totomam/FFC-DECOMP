#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_02056aec(void);
extern uint32_t func_0203bfe0(int x);
extern uint32_t func_0203bfcc(int x);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(uint32_t object, uint32_t node);
extern uint32_t func_020215a4(int a, int b);
extern uint32_t func_0203b708(int x);
extern void func_02021338(int x);
extern uint32_t func_ov007_021b8f30(uint8_t *self, Pair p);
extern uint32_t func_0205681c(int x);
extern uint32_t func_ov007_021b869c(uint32_t p, uint32_t v);
extern uint32_t func_02062a30(uint32_t owner);
extern Pair data_ov007_021c7358;
extern Pair data_ov007_021c7360;

void func_ov007_021b8e28(uint8_t *self, uint32_t arg)
{
    uint8_t *p;

    if (arg == *(uint32_t *)(self + 0xbc)) {
        uint32_t v0 = func_02056aec();
        uint32_t v1 = func_0203bfe0(0x1e);
        uint32_t v2 = func_0203bfcc(0x1e);
        uint32_t v3 = func_0203b6fc();
        func_02056bc0(v3, v2);
        func_02056bc0(v3, v1);
        uint32_t v4 = func_020215a4(-1, 0x19);
        uint32_t v5 = func_0203b708(0x1e);
        p = self + 0x14;
        func_02056bc0((uint32_t)p, v5);
        func_02056bc0((uint32_t)p, v4);
        func_02056bc0((uint32_t)p, v3);
        func_02056bc0((uint32_t)p, v0);
    }

    if (arg == *(uint32_t *)(self + 0xc0)) {
        uint32_t v7, v6, v8, v5, v4, v3, v2;
        func_02021338(0xcf);
        v7 = func_ov007_021b8f30(self, data_ov007_021c7358);
        v6 = func_0205681c(0xc8);
        if (v6 != 0) {
            v6 = func_ov007_021b869c(v6, *(uint32_t *)(self + 0xe8));
        }
        v8 = func_ov007_021b8f30(self, data_ov007_021c7360);
        v5 = func_0203b708(0x1e);
        p = self + 0x14;
        func_02056bc0((uint32_t)p, v5);
        func_02056bc0((uint32_t)p, v8);
        func_02056bc0((uint32_t)p, v6);
        func_02056bc0((uint32_t)p, v7);
        v4 = func_02062a30(*(uint32_t *)(self + 0xe4));
        v3 = func_0203b6fc();
        func_02056bc0(v3, v4);
        self += 0x14;
        func_02056bc0((uint32_t)self, v3);
    }
}
