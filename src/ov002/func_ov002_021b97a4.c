#include "ffc/types.h"

extern void *data_020b8e44;
extern uint8_t data_ov002_021d617c[];
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void func_02033940(void *obj, void *a, uint32_t b, uint32_t c);
extern void *func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_02198ddc(void *a);
extern void *func_ov002_021c2edc(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

uint8_t *func_ov002_021b97a4(uint8_t *obj, void *a1, void *a2, uint32_t a3)
{
    uint8_t buf[12];
    void *r;
    void *node;

    r = func_020159c8(data_020b8e44, 0x157);
    func_02005988(buf, r);
    uint32_t flag;
    flag = 0;
    if (a3 == 0) {
        flag = 1;
    }
    func_02033940(obj, buf, 0, flag);
    func_020059cc(buf);
    *(void **)obj = (void *)data_ov002_021d617c;
    *(void **)(obj + 0xd8) = a2;
    *(void **)(obj + 0xdc) = a1;
    node = func_0205681c(0x18);
    if (node != 0) {
        void *v = func_ov002_02198ddc(*(void **)(obj + 0xdc));
        node = func_ov002_021c2edc(node, v);
    }
    func_02056bc0(obj + 0x14, node);
    return obj;
}
