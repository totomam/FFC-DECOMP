#include "ffc/types.h"

extern void func_020696e0(void *object, uint8_t value);
extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b81c(uint32_t size);
extern void func_ov007_0219ebe4(void *object, int v);
extern void *func_0203bf54(uint32_t n);
extern char data_ov007_021c322c[];

void func_ov007_0219e978(void *a)
{
    uint8_t *p = (uint8_t *)a;
    void *obj;

    func_020696e0(a, 1);
    *(uint8_t *)(p + 0xd0) = 1;
    if (*(void **)(p + 0xb8) != 0) {
        *(uint32_t *)*(void **)(p + 0xb8) = 0;
    }
    *(void **)(p + 0xcc) = func_0203bb94(data_ov007_021c322c, 1, 0, 0);
    func_02056bc0(p + 0x48, *(void **)(p + 0xcc));
    obj = *(void **)(p + 0xcc);
    ((void (*)(void *))(*(void ***)obj)[10])(obj);
    obj = *(void **)(p + 0xcc);
    ((void (*)(void *, int))(*(void ***)obj)[8])(obj, 3);
    *(void **)(p + 0xbc) = func_0203b81c(0x20);
    func_ov007_0219ebe4(a, 1);
    func_02056bc0(p + 0x14, func_0203bf54(0x1e));
    func_02056bc0(p + 0x48, *(void **)(p + 0xbc));
}
