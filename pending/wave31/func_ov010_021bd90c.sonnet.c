#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203c114(void *a, void *b);
extern void *func_02056b10(void *owner);
extern void *func_0203b708(void *a);
extern void func_02056bc0(void *object, void *node);
extern void *data_0209de58;
extern void *data_0209de54;
extern void *data_0209de5c;

typedef struct S { uint8_t pad[0x14]; uint8_t list[0xcc]; uint32_t *e0; uint8_t p2[0xc]; void *f0; } S;

void func_ov010_021bd90c(S *self)
{
    void *r4, *r6, *r7, *n;
    *self->e0 = 9;
    r4 = func_02056aec();
    r6 = func_0203c114(data_0209de58, data_0209de54);
    r7 = func_02056b10(self->f0);
    n = func_0203b708(data_0209de5c);
    func_02056bc0(self->pad + 0x14, n);
    func_02056bc0(self->pad + 0x14, r7);
    func_02056bc0(self->pad + 0x14, r6);
    func_02056bc0(self->pad + 0x14, r4);
}
