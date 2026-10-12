/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" int func_ov005_02198678(void *obj, uint8_t idx);
extern "C" void func_02021338(uint32_t code);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void func_ov005_02198680(void *obj, uint8_t idx, int flag);
extern "C" void func_ov005_02196bcc(void *p, int flag);
struct Self {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void get(uint8_t i, void *b);
    virtual int chk();
    virtual int ok(void *b);
    virtual void *node();
    uint8_t pad0[0xfc - 4];
    uint32_t f_fc;
    uint8_t pad1[0x114 - 0x100];
    uint32_t *list;
    uint8_t pad2[0x140 - 0x118];
    uint32_t count;
    uint8_t pad3[0x14a - 0x144];
    uint8_t flag;
};
extern "C" void func_ov005_021984c4(Self *s, uint32_t val)
{
    uint16_t i;
    uint8_t idx;
    uint8_t buf[0x18];
    int flag;
    for (i = 0; i < 8; i++) {
        if (val == s->list[i]) {
            idx = (uint8_t)(i + (s->f_fc << 3));
            if (s->flag == 0) return;
            if (idx >= s->count) return;
            flag = (func_ov005_02198678(s, idx) == 0);
            if (flag) {
                s->get(idx, buf);
                if (s->ok(buf) == 0) { func_02021338(0xc7); return; }
                if (s->chk() == 0) {
                    func_02021338(0xc7);
                    func_02056bc0((uint8_t *)s + 0x14, s->node());
                    return;
                }
            }
            func_ov005_02198680(s, idx, flag);
            func_ov005_02196bcc(((void **)s->list)[i], flag);
            return;
        }
    }
}
