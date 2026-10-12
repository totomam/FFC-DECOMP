#include "ffc/types.h"

extern void *func_0203b688(void);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int v);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov003_02164d40(void *p);
extern uint32_t func_0203b6fc(void);
extern void *func_02047920(void *p, void *a, uint16_t b, uint8_t c);
extern void *func_ov003_021665c8(void *p, void *a, uint32_t b, uint32_t c);
extern void *func_ov003_02164db0(void *p);
extern char data_ov003_0217b32c[];

void *func_ov003_0216c098(void *x, uint8_t *y) {
    void *obj;
    void *node;
    void *p;
    uint32_t extra;
    uint32_t kind;
    uint32_t sp0;
    uint16_t tag;

    obj = func_0203b688();
    p = func_0205681c(0x84);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(void **)p = data_ov003_0217b32c;
        *(void **)((uint8_t *)p + 0x80) = x;
    }
    func_02056bc0(obj, p);
    extra = 0;
    kind = 0;
    tag = *(uint16_t *)y;
    if (tag == 0x62) {
        kind = 1;
    } else if (tag == 0x73) {
        kind = 2;
        extra = *(uint32_t *)(y + *(uint32_t *)(y + 8) + 4);
    }
    if (tag == 0x61) {
        node = func_0205681c(0x14);
        if (node != 0) {
            node = func_ov003_02164d40(node);
        }
        func_02056bc0(obj, node);
    }
    sp0 = func_0203b6fc();
    node = func_0205681c(0x88);
    if (node != 0) {
        node = func_02047920(node, x, (uint16_t)*(uint32_t *)(y + *(uint32_t *)(y + 8)), (uint8_t)kind);
    }
    func_02056bc0((void *)sp0, node);
    tag = *(uint16_t *)y;
    if (tag == 0x73) {
        node = func_0205681c(0x90);
        if (node != 0) {
            node = func_ov003_021665c8(node, x, extra, *(uint32_t *)(y + *(uint32_t *)(y + 8)));
        }
        func_02056bc0((void *)sp0, node);
    }
    func_02056bc0(obj, (void *)sp0);
    tag = *(uint16_t *)y;
    if (tag == 0x61) {
        node = func_0205681c(0x14);
        if (node != 0) {
            node = func_ov003_02164db0(node);
        }
        func_02056bc0(obj, node);
    }
    return obj;
}
