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

typedef struct { uint8_t pad[0x80]; void *obj; } S;
static inline void *get(S *s) { return s->obj; }

void func_ov003_0216e52c(S *p)
{
    S *t = (S*)((uint8_t*)p + 0); if (t && t->obj != 0) {
        void *r4 = func_02056aec();
        void *r6 = func_ov003_0216e620(get(p), data_ov003_0217b384);
        void *r1 = func_02056aa4(get(p));
        uint8_t *q = (uint8_t*)p + 0x14;
        func_02056bc0(q, r1);
        func_02056bc0(q, r6);
        func_02056bc0(q, r4);
        return;
    }
    func_02056bc0((uint8_t*)p + 0x14, func_02056aec());
}
