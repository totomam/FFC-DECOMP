#include "ffc/types.h"

extern void func_020095b8(void *p);
extern void func_020686e8(void *a, void *b);
extern void *func_020059cc(void *object);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Local;

void func_0200c694(uint8_t *p)
{
    Local tmp;
    func_020095b8(&tmp);
    func_020686e8(*(void **)(p + 0x94), &tmp);
    func_020059cc(&tmp);
}
