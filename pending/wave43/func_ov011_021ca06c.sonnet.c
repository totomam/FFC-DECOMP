/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern uint32_t data_020b93b8;
extern void func_0201cf34(uint32_t a, void *buf);
extern void func_0201ce70(uint32_t a, void *buf);
extern void *func_02056aec(void *object);
extern void func_02056bc0(void *object, void *node);
void func_ov011_021ca06c(uint8_t *p);
}

struct O {
    uint8_t pad[0x88];
    uint32_t f;
    uint32_t n;
    uint16_t *d;
    int32_t *q;
    int isL() { return ((f << 31) >> 31) ? 1 : 0; }
    uint32_t size() { return isL() ? n : (((uint8_t *)&f)[0] >> 1) & 0x7f; }
    uint16_t *data() { return isL() ? d : (uint16_t *)((uint8_t *)&f + 2); }
};

void func_ov011_021ca06c(uint8_t *pp)
{
    O *p = (O *)pp;
    uint16_t buf[0x98 / 2];
    uint32_t i = 0;
    uint16_t *b = buf;
    func_0201cf34(data_020b93b8, b);
    int l;
    while (l = p->isL(), i < (l ? p->n : (uint32_t)((uint8_t)p->f << 24) >> 25)) {
        b[i] = (l ? p->d : (uint16_t *)((uint8_t *)&p->f + 2))[i];
        i++;
    }
    func_0201ce70(data_020b93b8, buf);
    void *r = func_02056aec(p);
    func_02056bc0(pp + 0x14, r);
    int32_t *q = p->q;
    if (q != 0) {
        *q = 1;
    }
}
