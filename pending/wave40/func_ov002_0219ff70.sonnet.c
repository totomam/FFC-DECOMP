#include "ffc/types.h"

extern void *func_0203b6fc(void *p);
extern void *func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_02055a2c(void *p);
extern void *func_0203b720(void);
extern void *func_0203b688(void);
extern uint8_t data_020abe18[];

typedef struct {
    void *vt;
    void *f4;
    uint32_t f8;
    uint32_t fc;
    void *f10;
} Node;

void *func_ov002_0219ff70(uint8_t *p) {
    void *obj = func_0203b6fc(p);
    uint8_t *n = (uint8_t *)func_0203bd04(0x10143, 0, 0, 1);
    void *r5;
    void *r4;
    Node *node;

    func_02056bc0(obj, n);
    node = (Node *)func_0205681c(0x14);
    if (node != 0) {
        if (n != 0) {
            n += 0x14;
        }
        node->f8 = 0;
        node->fc = 0x10142;
        node->vt = (void *)data_020abe18;
        node->f10 = n;
    }
    r5 = p + 0xf0;
    func_02056bc0(obj, func_02055a2c(*(void **)r5));
    r4 = func_0203b720();
    r5 = func_0203b688();
    func_02056bc0(r5, r4);
    func_02056bc0(r5, obj);
    return r5;
}
