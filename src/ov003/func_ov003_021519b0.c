#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint8_t data_ov003_02179d48[];
extern uint8_t data_ov003_02179d60[];

extern uint32_t func_0201c9ac(uint32_t value);
extern uint32_t func_02091b10(void *object, void *first, ...);
extern void func_02005988(void *a, void *b);
extern uint32_t func_02052000(void *object);
extern void *func_020059cc(void *object);
extern uint32_t func_02086ad4(void *object, void *first, ...);
extern void func_ov003_0215168c(void *a, void *b);

void func_ov003_021519b0(uint8_t *p, uint32_t a1)
{
    uint8_t s0[0xc];
    uint8_t s1[0x44];
    uint32_t r4;

    if (*(uint32_t *)(p + 0xac) != 0xffffffff) {
        *(uint32_t *)(p + 0xa8) = func_0201c9ac(data_020b93b8);
    }

    func_02091b10(s1, data_ov003_02179d48, *(uint32_t *)(p + 0xa4), *(uint32_t *)(p + 0xa8));
    func_02005988(s0, s1);
    r4 = func_02052000(s0);
    func_020059cc(s0);
    if (r4 == 0) {
        func_02086ad4(s1, data_ov003_02179d60, a1);
    }
    func_ov003_0215168c(p, s1);
}
