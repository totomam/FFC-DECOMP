#include "ffc/types.h"

extern void func_0203be8c(void *p);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0204f550(uint32_t x);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern uint32_t func_02056aec(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219e958(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213df18;

void func_ov007_0219ee24(uint8_t *p)
{
    void *node;
    uint32_t r4;
    uint8_t *q;

    func_0203be8c(p);
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0204f550(data_0213df18);
    func_0203c33c();
    func_0203c264();
    r4 = func_02056aec(p);
    node = func_0205681c(0xd4);
    if (node != 0) {
        node = func_ov007_0219e958(node, *(void **)(p + 0x80));
    }
    q = p + 0x14;
    func_02056bc0(q, node);
    func_02056bc0(q, (void *)r4);
}
