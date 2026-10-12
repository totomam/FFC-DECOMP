#include "ffc/types.h"

extern const char data_ov000_0216b108[];
extern const char data_ov000_0216b110[];
extern const char data_ov000_0216b118[];
extern uint32_t func_02086b04(uint8_t *dst, uint32_t size, const char *fmt, const char *a, uint32_t b, const char *c);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02084ca4(const uint8_t *src, uint8_t *dst, uint32_t n);
extern void func_ov001_02176104(void *ctx, uint32_t id, uint8_t *text);

void func_ov000_0215ed20(void *ctx, uint8_t ch, uint32_t id, const uint8_t *text)
{
    uint8_t buf[0x200];
    uint8_t *p;
    uint32_t len;
    uint32_t n;

    len = func_02086b04(buf, 0x200, data_ov000_0216b108, data_ov000_0216b110, 0x5a, data_ov000_0216b118);
    buf[len] = ch;
    p = buf + 1;
    p[len] = 0;
    p = p + len;
    if (text != 0) {
        n = func_02092864(text);
        func_02084ca4(text, p, n);
        p[n] = 0;
    }
    func_ov001_02176104(ctx, id, buf);
}
