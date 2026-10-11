#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021af150(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
typedef struct {uint32_t a,b;} S;
extern S data_ov007_021c42d0;

void func_ov007_021a5854(uint8_t *p)
{
    void *node = func_0205681c(0x15c);
    if (node != 0) {
        node = func_ov007_021af150(node, p + 0xc8);
    }
    func_02056bc0(p + 0x14, node);
    S *q = (S *)(p + 0xb8);
    *q = data_ov007_021c42d0;
}
