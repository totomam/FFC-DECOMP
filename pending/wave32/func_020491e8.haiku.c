#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_0203755c(void *object);
extern void func_020213f0(uint32_t v);
extern void func_020211d4(uint32_t v, uint32_t zero);
extern void *func_0205681c(uint32_t size);
extern void *func_ov008_021a7064(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020afec0;

void func_020491e8(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    void *node;

    func_0203755c(obj);
    func_020213f0(*(uint32_t *)(p + 0x8c));
    func_020211d4(*(uint32_t *)(p + 0x90), 0);
    node = func_0205681c(0x84);
    if (node) {
        node = func_ov008_021a7064(node, p + 0x88);
    }
    func_02056bc0(p + 0x14, node);
    *(Pair *)(p + 0x80) = data_020afec0;
}
