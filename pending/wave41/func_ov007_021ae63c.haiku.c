#include "ffc/types.h"

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t w1;
    uint32_t w2;
} Obj1;

extern uint32_t *data_020b8e44;
extern uint32_t data_020b93b8;
extern uint8_t data_ov007_021c5618[];

extern void func_0201cf34(uint32_t obj, void *buf);
extern void *func_0200a630(void *dst, void *src);
extern void *func_0200a5dc(void *dst, void *src);
extern void *func_02051248(void *dst, void *src);
extern void *func_0200a678(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02075b3c(uint32_t v, void *object);
extern void *func_020059cc(void *object);

void func_ov007_021ae63c(int a)
{
    uint32_t o4[0x26];
    uint32_t o3[0x41];
    uint32_t o2[3];
    Obj1 o1;
    uint32_t o0[3];
    uint32_t r3;

    if (*(uint32_t *)((uint8_t *)(uint32_t *)data_020b8e44[0] + 0x88) == 0) {
        return;
    }
    if ((uint32_t)a > 3) {
        a = 3;
    }
    func_0201cf34(data_020b93b8, o4);
    func_0200a630(o2, o4);
    func_0200a5dc(o0, o2);
    func_02051248(&o1, o0);
    func_0200a678(o0);
    if (o1.flag) {
        r3 = o1.w2;
    } else {
        r3 = (uint32_t)((uint8_t *)&o1 + 1);
    }
    func_02091b10(o3, (uint32_t)data_ov007_021c5618, a, r3);
    func_02075b3c(*(uint32_t *)((uint8_t *)(uint32_t *)data_020b8e44[0] + 0x88), o3);
    func_020059cc(&o1);
    func_0200a678(o2);
}
