#include "ffc/types.h"

extern void func_ov003_0215ac70(void *a, uint32_t *b, uint32_t *c);
extern void *func_020424e0(void *p);
extern void *func_ov003_0214649c(void);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02165838(void *obj, void *x, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203c634(void *obj, void *a, uint32_t n, void *c, void *d, uint32_t e, uint32_t f);
extern void *func_ov003_0214c18c(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_ov003_0214c7f4(void *a, void *b, void *c, void *d, uint32_t e, uint32_t f, void *g);
typedef struct { uint32_t a, b; } DataPair;
extern uint32_t data_020aef80[2];

void func_0203f158(uint8_t *self) {
    uint32_t a = 0;
    uint32_t b = 0;
    uint8_t *tmp;
    void *mar;
    void *obj;
    void *p;
    void *n;
    void *r6;
    void *r7;
    void *x;
    uint32_t mode;
    uint8_t *q;
    uint32_t v0;
    uint32_t v1;

    func_ov003_0215ac70(self + 0xa4, &a, &b);
    func_020424e0(*(void **)(self + 0x88));
    tmp = (uint8_t *)func_ov003_0214649c();
    mar = func_02052d90(*(void **)(tmp + 0xe4), *(uint32_t *)(tmp + 0xe8));
    mode = 2;
    if (((uint8_t *)mar)[8] != 0) {
        mode = 3;
    }
    r7 = func_0203b6fc();
    obj = func_0205681c(0x38);
    if (obj != 0) {
        obj = func_ov003_02165838(obj, *(void **)(self + 0x88), mode);
    }
    func_02056bc0(r7, obj);

    p = func_0205681c(0xe4);
    if (p != 0) {
        p = func_0203c634(p, *(void **)(self + 0x88), 3, self + 0xa4, self + 0xc4, 1, 0);
    }

    obj = func_020424e0(*(void **)(self + 0x88));
    n = func_ov003_0214c18c(obj, *(void **)(self + 0xc0), 0, a, b, 0x2a);

    r6 = func_0203b6fc();
    func_02056bc0(r6, n);
    func_02056bc0(r6, p);

    obj = func_020424e0(*(void **)(self + 0x88));
    x = func_ov003_0214c7f4(obj, *(void **)(self + 0xc0), r7, *(void **)(self + 0x8c), 0x19, a, b);
    q = self + 0x14;
    func_02056bc0(q, x);
    func_02056bc0(q, r6);

    *(DataPair *)(self + 0x80) = *(DataPair *)data_020aef80;
}
