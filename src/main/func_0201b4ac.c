#include "ffc/types.h"

extern void func_0201ac38(int x);
extern int func_0209a978(int a, int b);
extern void *func_02056830(uint32_t size);
extern void func_02084b2c(void *p, int c, int n);
extern void func_0201ad64(void *self, int a, int b, void *p);
extern void func_02056858(void *p);

void func_0201b4ac(void *param)
{
    uint8_t *s = (uint8_t *)param;
    void *buf;
    int n;
    void *obj;

    func_0201ac38(0);
    n = func_0209a978(*(int32_t *)(s + 0x20) + 0x1df, 0x1e0);
    buf = func_02056830((uint32_t)(n * 0x1e0));
    n = func_0209a978(*(int32_t *)(s + 0x20) + 0x1df, 0x1e0);
    func_02084b2c(buf, 0, n * 0x1e0);
    obj = *(void **)(s + 0x18);
    ((void (*)(void *, void *))(*(void ***)obj)[3])(obj, buf);
    func_0201ad64(param, 0, *(int32_t *)(s + 0x20), buf);
    func_02056858(buf);
    func_0201ac38(1);
}
