#include "ffc/types.h"

extern void func_0208763c(void *node);
extern void func_02087678(void *node);
extern void func_02056c4c(void *obj);
extern uint32_t func_0206cd68(void *obj);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c416c;
extern Pair data_ov007_021c4174;

void func_ov007_021a2f00(void *p)
{
    uint8_t *a = (uint8_t *)p;
    uint8_t *obj;
    uint8_t flag;
    uint8_t *node;
    int r4;

    obj = *(uint8_t **)(a + 0xf8);
    flag = obj[0x12];
    node = obj + 0x1c;
    if (flag) {
        func_0208763c(node);
    }
    r4 = (*(void **)(obj + 0x14) == 0);
    if (flag) {
        func_02087678(node);
    }
    if (r4) {
        Pair t = data_ov007_021c416c;
        *(Pair *)(a + 0xb8) = t;
        return;
    }

    obj = *(uint8_t **)(a + 0xf4);
    flag = obj[0x12];
    node = obj + 0x1c;
    if (flag) {
        func_0208763c(node);
    }
    r4 = (*(void **)(obj + 0x14) == 0);
    if (flag) {
        func_02087678(node);
    }
    if (r4) {
        func_02056c4c(*(void **)(a + 0xec));
        func_02056c4c(*(void **)(a + 0xf8));
        {
            uint32_t r = func_0206cd68(*(void **)(a + 0xcc));
            func_02056bc0(a + 0x14, (void *)r);
        }
        Pair t2 = data_ov007_021c4174;
        *(Pair *)(a + 0xb8) = t2;
    }
}
