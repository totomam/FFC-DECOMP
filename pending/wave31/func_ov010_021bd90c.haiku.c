#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203c114(void *a, void *b);
extern void *func_02056b10(void *owner);
extern void *func_0203b708(void *a);
extern void func_02056bc0(void *object, void *node);
extern void *data_0209de58;
extern void *data_0209de54;
extern void *data_0209de5c;

void func_ov010_021bd90c(uint8_t *self)
{
    uint32_t *p;
    void *r4;
    void *r6;
    void *r7;
    void *r1;

    p = *(uint32_t **)(self + 0xe0);
    *p = 9;
    r4 = func_02056aec();
    r6 = func_0203c114(data_0209de58, data_0209de54);
    r7 = func_02056b10(*(void **)(self + 0xf0));
    r1 = func_0203b708(data_0209de5c);
    func_02056bc0(self + 0x14, r1);
    func_02056bc0(self + 0x14, r7);
    func_02056bc0(self + 0x14, r6);
    func_02056bc0(self + 0x14, r4);
}
