#include "ffc/types.h"

extern int func_ov005_02198678(void *obj, uint8_t idx);
extern void func_02021338(uint32_t code);
extern void func_02056bc0(void *object, void *node);
extern void func_ov005_02198680(void *obj, uint8_t idx, int flag);
extern void func_ov005_02196bcc(void *p, int flag);

typedef struct Self {
    void **vt;
    uint8_t pad0[0xfc - 4];
    uint32_t f_fc;
    uint8_t pad1[0x114 - 0x100];
    uint32_t *list;
    uint8_t pad2[0x140 - 0x118];
    uint32_t count;
    uint8_t pad3[0x14a - 0x144];
    uint8_t flag;
} Self;

void func_ov005_021984c4(void *self, uint32_t val)
{
    Self *s = (Self *)self;
    uint16_t i;
    uint8_t idx;
    uint8_t buf[0x18];
    int flag;

    for (i = 0; i < 8; i++) {
        if (val == s->list[i]) {
            idx = (uint8_t)(i + (s->f_fc << 3));
            if (s->flag == 0) {
                return;
            }
            if (idx >= s->count) {
                return;
            }
            flag = (func_ov005_02198678(self, idx) == 0);
            if (flag) {
                ((void (*)(void *, uint32_t, void *))((*(void ***)self)[12]))(self, idx, buf);
                if (((int (*)(void *, void *))((*(void ***)self)[14]))(self, buf) == 0) {
                    func_02021338(0xc7);
                    return;
                }
                if (((int (*)(void *))((*(void ***)self)[13]))(self) == 0) {
                    func_02021338(0xc7);
                    func_02056bc0((uint8_t *)self + 0x14, ((void *(*)(void *))((*(void ***)self)[15]))(self));
                    return;
                }
            }
            func_ov005_02198680(self, idx, flag);
            func_ov005_02196bcc(((void **)s->list)[i], flag);
            return;
        }
    }
}
