#include "ffc/types.h"

extern void func_0203bea0(void *obj);
extern void func_0203bf28(int a, int b, int c, int d, int e, int f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void func_0204f550(uint32_t v);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov011_021bd80c(void *obj, void *node, uint8_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213df18;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020aea5c;

void func_0203a83c(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    void *node;
    void *mem;

    func_0203bea0(obj);
    func_0203bf28(5, 2, 4, 1, 0, 0);
    func_0203c354();
    func_0203c270();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();

    mem = func_0205681c(0x128);
    node = mem;
    if (mem != 0) {
        node = func_ov011_021bd80c(mem, p + 0x8c, *(uint8_t *)(p + 0x88), *(uint32_t *)(p + 0x94), 0);
    }
    func_02056bc0(p + 0x14, node);
    *(Pair *)(p + 0x80) = data_020aea5c;
}
