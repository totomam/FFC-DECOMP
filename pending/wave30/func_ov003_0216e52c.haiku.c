#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} DataPair;

extern DataPair data_ov003_0217b384;
extern void *func_02056aec(void);
extern void *func_ov003_0216e620(void *obj, DataPair v);
extern void *func_02056aa4(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0216e52c(uint8_t *p)
{
    uint8_t *s = p;
    void *v = *(void **)(s + 0x80);
    if (v != 0) {
        void *r4 = func_02056aec();
        void *r6 = func_ov003_0216e620(*(void **)(p + 0x80), data_ov003_0217b384);
        void *r1 = func_02056aa4(*(void **)(p + 0x80));
        uint8_t *q = p + 0x14;
        func_02056bc0(q, r1);
        func_02056bc0(q, r6);
        func_02056bc0(q, r4);
        return;
    }
    {
        void *n = func_02056aec();
        func_02056bc0(p + 0x14, n);
    }
}
