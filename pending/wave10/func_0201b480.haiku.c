#include "ffc/types.h"

extern void func_0201a3c8(void *p);
extern void func_0201b4ac(void *p);
extern void func_0201a3fc(void *p);

void func_0201b480(void *obj)
{
    uint8_t buf[0x14];
    uint8_t *p = (uint8_t *)obj;

    if (*(void **)(p + 0x10) == 0) {
        return;
    }
    buf[1] = 0;
    func_0201a3c8(buf);
    func_0201b4ac(obj);
    func_0201a3fc(buf);
}
