#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern void *func_0203b688(void);
extern void *func_ov003_0214bc38(uint8_t *a, S8 s, uint8_t *b, uint32_t c, uint32_t d, uint8_t e, uint32_t f, uint32_t g, uint32_t h);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int v);
extern void func_02056bc0(void *object, void *node);
extern S8 data_ov003_0217990c;
extern char data_ov003_02179644[];

void func_ov003_0214bbb8(uint8_t *a, uint8_t *b, uint32_t c, uint32_t d, uint8_t e, uint32_t f, uint32_t g, uint32_t h)
{
    void *t7 = func_0203b688();
    void *n = func_ov003_0214bc38(a, data_ov003_0217990c, b, c, d, e, f, g, h);
    void *obj = func_0205681c(0x88);
    if (obj != 0) {
        func_02056c9c(obj, 0);
        *(char **)obj = data_ov003_02179644;
        *(uint8_t **)((uint8_t *)obj + 0x80) = a;
        *(uint8_t **)((uint8_t *)obj + 0x84) = b;
    }
    func_02056bc0(t7, obj);
    func_02056bc0(t7, n);
    func_02056bc0(a + 0x48, t7);
}
