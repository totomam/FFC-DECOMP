#include "ffc/types.h"

extern void *func_ov002_021a1868(void *a, void *b);
extern uint32_t func_ov002_021aa830(void);
extern uint32_t func_ov002_021aa820(void *p);
extern void func_ov002_021aa8b8(void *p, void *x, int y);
extern uint32_t func_ov002_021a3a10(void *a);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_021aa8f0(void *p);
extern uint32_t func_02055a2c(uint32_t a, uint32_t b);
extern uint32_t func_02021610(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021ab244(void *p, int a, int b);
extern uint32_t func_ov002_021c85d8(void *p, int a);
extern uint32_t func_ov002_021c92c0(int a, uint32_t b);
extern uint32_t func_ov002_021c91b4(int a);
extern uint32_t func_ov002_0219acac(uint32_t a, uint32_t b);
extern uint32_t data_0209dfd0;

void func_ov002_021a94fc(uint8_t *a, uint32_t *b)
{
    void *r6;
    uint32_t v;

    r6 = func_ov002_021a1868(a, (void *)b[1]);
    if (r6 == 0) {
        return;
    }
    if (func_ov002_021aa830() == func_ov002_021aa820(r6)) {
        return;
    }
    if ((int)func_ov002_021aa820(r6) <= 0) {
        return;
    }
    func_ov002_021aa8b8(r6, (void *)b[6], 0);
    if (func_ov002_021a3a10(a) != 1) {
        func_02056bc0(a + 0x14, (void *)func_0203b708(data_0209dfd0));
    }
    v = func_ov002_021aa8f0(r6);
    func_02056bc0(a + 0x14, (void *)func_02055a2c(*(uint32_t *)(a + 0xf0), v));
    if (func_ov002_021a3a10(a) != 1) {
        v = func_02021610(0x429, 0);
        func_02056bc0(a + 0x14, (void *)v);
    }
    v = func_ov002_021ab244(r6, 1, 0);
    func_02056bc0(a + 0x14, (void *)v);
    if (func_ov002_021c85d8(a + 0x144, 0) != 0) {
        v = 0x1172;
    } else {
        v = 0x1173;
    }
    v = func_ov002_021c92c0(0, v);
    v = func_02055a2c(*(uint32_t *)(a + 0xf0), v);
    func_02056bc0(a + 0x14, (void *)v);
    v = func_ov002_021c91b4(0);
    v = func_ov002_0219acac(*(uint32_t *)(a + 0xf0), v);
    func_02056bc0(a + 0x14, (void *)v);
}
