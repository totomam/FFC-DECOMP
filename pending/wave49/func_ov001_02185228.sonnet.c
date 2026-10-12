#include "ffc/types.h"

extern void func_ov001_02184444(void *obj, uint32_t n, void *p);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov001_02184184(void *obj, const void *s);
extern void *func_ov000_0214f148(void *p);
extern void func_ov001_02184160(void *obj, uint32_t v);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void func_ov001_021846f8(void *self, void *buf, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_ov000_0216552c(void *a, void *b, uint32_t c, uint32_t d, void *e, uint32_t f);
extern uint32_t func_ov000_0216591c(void);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, const void *d, uint32_t e);
extern void func_ov000_02165350(uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e);

extern int32_t data_ov001_021955f8;
extern void *data_ov001_021955fc[];
extern char data_ov001_02193b94[];
extern char data_ov001_02193ba0[];
extern char data_ov001_02193bac[];
extern char data_ov001_02193bb4[];
extern char data_ov001_02193bb8[];
extern char data_ov001_02193bbc[];
extern char data_ov001_02193bcc[];
extern char data_ov001_02193bd8[];
extern char data_ov001_02193be4[];
extern char data_ov001_02193bf0[];

typedef struct { uint8_t buf[0x578]; int32_t len; } S;

void func_ov001_02185228(uint8_t *self, uint32_t flag)
{
    S O;
    S D;
    uint8_t p14[0x14];
    int32_t i;
    O.len = 0;
    func_ov001_02184444(O.buf, 3, self + 0x84);
    if (data_ov001_021955f8 > 0) {
        i = 0;
        do {
            func_02086ad4(p14, (uint32_t)data_ov001_02193b94, i);
            func_ov001_02184184(O.buf, p14);
            func_ov001_02184184(O.buf, func_ov000_0214f148(data_ov001_021955fc[i]));
            i++;
        } while (i < data_ov001_021955f8);
    }
    func_ov001_02184184(O.buf, data_ov001_02193ba0);
    func_ov001_02184160(O.buf, *(uint32_t *)(self + 0xc8));
    func_ov001_02184184(O.buf, data_ov001_02193bac);
    func_ov001_02184184(O.buf, *(uint32_t *)(self + 0xd0) ? data_ov001_02193bb4 : data_ov001_02193bb8);
    if (flag) {
        func_ov001_02184184(O.buf, data_ov001_02193bbc);
        func_ov001_02184160(O.buf, flag);
    }
    func_ov001_02184184(O.buf, data_ov001_02193bcc);
    func_ov001_02184184(O.buf, self + 4);
    if (*(uint32_t *)(self + 0xa8)) {
        func_ov001_02184184(O.buf, data_ov001_02193bd8);
        func_ov001_02184160(O.buf, *(uint32_t *)(self + 0x10c));
        func_ov001_02184184(O.buf, data_ov001_02193be4);
        func_ov001_02184160(O.buf, *(uint16_t *)(self + 0x110));
    }
    if (flag != 2) {
        func_02090380(D.buf, O.buf, O.len);
        D.len = O.len;
        func_ov001_021846f8(self, D.buf, 0xff, 0, 0xff, 0, 0xff, 0);
        if (0x578 - D.len < 1) {
            D.len = O.len;
            func_ov001_021846f8(self, D.buf, 0xff, 0, 0, 0, 0, 0);
        }
        func_02090380(O.buf, D.buf, D.len);
        O.len = D.len;
    } else {
        if (0x578 - O.len >= 1) {
            O.buf[O.len++] = 0;
        }
    }
    func_ov000_0216552c(*(void **)self, O.buf, O.len, 0, self + 0xd4, 8);
    *(uint32_t *)(self + 0xb4) = func_ov000_0216591c();
    *(uint32_t *)(self + 0xb8) = *(uint32_t *)(self + 0xb4);
    if (flag) {
        *(uint32_t *)(self + 0xbc) = 0;
    }
    func_ov000_021652a8(3, 0, 0x10, data_ov001_02193bf0, O.len);
    func_ov000_02165350(3, 0, 0x20, O.buf, O.len);
}
