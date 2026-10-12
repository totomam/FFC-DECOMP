#include "ffc/types.h"

extern void func_02035f58(void *p);
extern void func_02036438(void *object, uint32_t value);
extern void func_020364ec(void *object, uint32_t value);
extern void *data_020b93b8;
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void *func_0205681c(uint32_t size);
extern void *func_0203af74(void *a, uint32_t b, uint32_t c);
extern void *func_ov009_021a0394(void *a, void *b, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_02035fd0(void *object);

void *func_02047340(uint8_t *p) {
    uint8_t s1[0x60];
    uint8_t s2[0x60];
    void *r6;
    void *q;
    void *node;
    uint32_t w;

    func_02035f58(s1);
    func_02035f58(s2);
    w = *(uint32_t *)(p + 0x94);
    func_02036438(s1, w);
    func_020364ec(s1, 0);
    func_0201f36c(data_020b93b8, *(uint32_t *)(p + 0x94), s2);

    r6 = func_0205681c(0x1cc);
    if (r6) {
        r6 = func_0203af74(r6, *(uint32_t *)(p + 0x94), 0);
    }

    q = func_0205681c(0x22c);
    if (q) {
        q = func_ov009_021a0394(q, s1, s2, 0, 0, 0);
    }

    node = func_0203b688();
    func_02056bc0(node, q);
    func_02056bc0(node, r6);
    func_02035fd0(s2);
    func_02035fd0(s1);
    return node;
}
