#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_0206cb98(void *obj);
extern void func_020559d4(void *obj);
extern void *func_0206cdf0(void *obj, uint16_t v);
extern void *func_0206c290(void *obj);
extern void *func_02056aec(void *obj);
extern void *func_0203b72c(void);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c4270;
extern Pair data_ov007_021c4278;

void func_ov007_021a519c(uint8_t *p)
{
    if (func_0206cb98(*(void **)(p + 0xc8)) != 0) {
        *(Pair *)(p + 0xb8) = data_ov007_021c4270;
        return;
    }

    func_020559d4(p + 0x80);

    if (p[0x115] != 0) {
        void *r6 = func_0206cdf0(*(void **)(p + 0xc8), *(uint16_t *)(p + 0xe0));
        void *r7 = func_0206c290(*(void **)(p + 0xc8));
        void *tmp = func_02056aec(*(void **)(p + 0xfc));
        void *t = func_0203b72c();
        uint8_t *q = p + 0x14;
        func_02056bc0(q, t);
        func_02056bc0(q, tmp);
        func_02056bc0(q, r7);
        func_02056bc0(q, r6);
        *(Pair *)(p + 0xb8) = data_ov007_021c4278;
    }
}
