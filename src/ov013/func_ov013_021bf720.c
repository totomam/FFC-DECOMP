#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} S8;

extern void func_020095b8(void *out, uint32_t v);
extern void func_ov013_021bf768(void *obj, int32_t a, void *tmp, S8 s);
extern void *func_020059cc(void *object);
extern uint8_t data_ov013_021c4550[];

void *func_ov013_021bf720(void *obj, int32_t a, uint32_t b, S8 s)
{
    struct { uint32_t a, b, c; } tmp;
    func_020095b8(&tmp, b);
    func_ov013_021bf768(obj, a, &tmp, s);
    func_020059cc(&tmp);
    *(uint8_t **)obj = data_ov013_021c4550;
    return obj;
}
