#include "ffc/types.h"

extern void func_ov002_02198f28(void *self);
extern void *func_0205681c(uint32_t size);
extern void *func_02075c00(void *p);
extern void *func_ov002_02198eac(void *obj, void *arg, void *param);
extern void func_02056bc0(void *object, void *node);
extern char data_ov002_021d4a14[];
extern char data_ov002_021d4a2c[];

void *func_ov002_02199000(void *p, void *param)
{
    uint8_t *self = (uint8_t *)p;
    uint8_t *base;
    void *tmp;
    void *node;

    func_ov002_02198f28(p);
    *(void **)self = data_ov002_021d4a14;
    *(void **)(self + 0x80) = data_ov002_021d4a2c;

    tmp = func_0205681c(0x5c);
    if (tmp != 0) {
        tmp = func_02075c00(tmp);
    }
    *(void **)(self + 0xb8) = tmp;

    node = func_0205681c(0xbc);
    if (node != 0) {
        void *arg = *(void **)(self + 0xb8);
        if (arg != 0) {
            arg = (uint8_t *)arg + 0x14;
        }
        node = func_ov002_02198eac(node, arg, param);
    }

    base = self + 0x48;
    func_02056bc0(base, *(void **)(self + 0xb8));
    func_02056bc0(base, node);
    return p;
}
