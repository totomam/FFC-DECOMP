#include "ffc/types.h"

typedef struct {
    uint8_t *buf;
    int32_t limit;
    int32_t pos;
} FfcBuf;

extern uint8_t *func_ov000_021653e4(uint8_t *buf, int32_t newsize);
extern void func_ov001_0217ef6c(void *ctx, const char *msg);
extern int32_t func_ov000_021654e8(uint32_t h, uint8_t *dst, int32_t n, int32_t flag);
extern int32_t func_ov000_021655a0(uint32_t h);
extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, const char *fmt, ...);
extern uint8_t *func_ov000_021653d4(int32_t n);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void func_ov000_021653f4(void *p);
extern const char data_ov001_021905a4[];
extern const char data_ov001_02190618[];
extern const char data_ov001_02190644[];
extern uint32_t data_ov001_02194c20[];
extern const char data_ov001_02190668[];
extern const char data_ov001_0219067c[];

int func_ov001_0217850c(void *ctx, uint32_t h, FfcBuf *s, int32_t *acc_out, int32_t *flag_out, uint32_t tag)
{
    uint8_t *buf = s->buf;
    int32_t pos = s->pos;
    int32_t limit = s->limit;
    int32_t acc = 0;
    int32_t flag = 0;
    int32_t r5;

    do {
        if (pos + 0x4000 > limit) {
            limit = pos + 0x4000;
            buf = func_ov000_021653e4(buf, limit + 1);
            if (buf == 0) {
                func_ov001_0217ef6c(ctx, data_ov001_021905a4);
                return 1;
            }
            s->buf = buf;
            s->limit = limit;
        }

        r5 = func_ov000_021654e8(h, buf + pos, limit - pos, 0);
        if (r5 == -1) {
            int32_t e = func_ov000_021655a0(h);
            if (e != -6 && e != -26 && e != -76) {
                func_ov001_0217ef6c(ctx, data_ov001_02190618);
                return 3;
            }
        } else if (r5 == 0) {
            flag = 1;
            func_ov000_021652a8(1, 0, 0x10, data_ov001_02190644, tag);
        } else {
            uint8_t *tmp = func_ov000_021653d4(r5 + 1);
            uint32_t c;
            func_02090380(tmp, buf + pos, r5);
            tmp[r5] = 0;
            c = data_ov001_02194c20[1];
            data_ov001_02194c20[1] = c + 1;
            func_ov000_021652a8(1, 0, 0x20, data_ov001_02190668, c, tag, tmp);
            func_ov000_021653f4(tmp);
            acc += r5;
            pos += r5;
        }

        buf[pos] = 0;
    } while (r5 >= 0 && flag == 0 && acc < 0x20000);

    if (acc != 0) {
        func_ov000_021652a8(1, 0, 0x20, data_ov001_0219067c, tag, acc);
    }

    s->buf = buf;
    s->pos = pos;
    s->limit = limit;
    *acc_out = acc;
    *flag_out = flag;
    return 0;
}
