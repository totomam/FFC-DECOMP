#include "ffc/types.h"

extern void func_0203be8c(void *p);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203bea0(void);
extern void func_0203bf28(int a, int b, int c, int d, int e, int f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void *data_0213df18;
extern void func_0204f550(void *p);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void *func_02056aec(void *p);
extern int func_020215a4(int a, int b);
extern uint32_t func_0203b744(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov012_021d18ec(void *obj, void *w, uint8_t b84, uint8_t b85, int zero, uint8_t b86);
extern void func_02056bc0(void *object, void *node);

void func_ov012_021d268c(void *a)
{
    uint32_t r4;
    int r6;
    void *t_aec;
    void *node;

    func_0203be8c(a);
    func_0203bed8(5, 0, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0203bea0();
    r6 = 2;
    func_0203bf28(5, r6, 4, 1, 0, 0);
    func_0203c354();
    func_0203c270();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    t_aec = func_02056aec(a);
    r6 = func_020215a4(r6 - 3, 0x19);
    r4 = func_0203b744();
    node = func_0205681c(0x4d << 2);
    if (node != 0) {
        node = func_ov012_021d18ec(node, *(void **)((uint8_t *)a + 0x80), *(uint8_t *)((uint8_t *)a + 0x84), *(uint8_t *)((uint8_t *)a + 0x85), 0, *(uint8_t *)((uint8_t *)a + 0x86));
    }
    a = (uint8_t *)a + 0x14;
    func_02056bc0(a, node);
    func_02056bc0(a, (void *)r4);
    func_02056bc0(a, (void *)r6);
    func_02056bc0(a, t_aec);
}
