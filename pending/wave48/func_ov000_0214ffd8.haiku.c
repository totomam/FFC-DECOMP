#include "ffc/types.h"

extern void *func_ov000_0214fa54(void);
extern void func_02084a0c(uint32_t v, void *dst, uint32_t n);
extern void func_02084a58(void *dst, void *src, uint32_t n);
extern void func_02084e04(void *src, void *dst, uint32_t n);
extern int func_02084dd4(void *a, void *b, uint32_t n);
extern const uint8_t data_ov000_02169630[];
extern const uint8_t data_ov000_02169634[];

void func_ov000_0214ffd8(uint8_t *a, uint8_t *b)
{
    uint8_t *c = (uint8_t *)func_ov000_0214fa54();
    uint8_t buf[9];
    uint32_t sum;
    uint32_t i;
    uint8_t *src;
    uint8_t *dst;
    uint32_t n1;
    uint32_t n2;

    func_02084a0c(0, b, 0xc0);
    func_02084a58(a, b, 0x40);

    *(uint16_t *)(b + 0x3e) = 0;
    if (c[0x12df] == 1) {
        *(uint16_t *)b = 0x20;
    } else {
        *(uint16_t *)b = 0x40;
    }

    sum = 0;
    src = a + 0x40;
    dst = b + 0x40;
    uint8_t *p = buf;
    { uint8_t v; v = data_ov000_02169630[0]; p[5] = v; }
    { uint8_t v; v = data_ov000_02169630[1]; p[6] = v; }
    { uint8_t v; v = data_ov000_02169630[2]; p[7] = v; }
    { uint8_t v; v = data_ov000_02169630[3]; p[8] = v; }
    { uint8_t v; v = data_ov000_02169634[0]; p[0] = v; }
    { uint8_t v; v = data_ov000_02169634[1]; p[1] = v; }
    { uint8_t v; v = data_ov000_02169634[2]; p[2] = v; }
    { uint8_t v; v = data_ov000_02169634[3]; p[3] = v; }
    { uint8_t v; v = data_ov000_02169634[4]; p[4] = v; }

    for (i = 0; i < *(uint16_t *)(a + 0x3e); i = (uint16_t)(i + 1)) {
            uint8_t t = src[0];
            uint8_t l = src[1];
            if (t == 0x32 || t == 0x2a || t == 0x2f || t == 7 || t == 0x30) {
                n1 = l + 2;
                func_02084e04(src, dst, (uint8_t)n1);
                dst += n1;
                sum = (uint8_t)(sum + (uint8_t)n1);
                (*(uint16_t *)(b + 0x3e))++;
            } else if (t == 0xdd) {
                if (func_02084dd4(src + 2, buf + 5, 4) == 0 ||
                    func_02084dd4(src + 2, buf, 5) == 0) {
                    n2 = l + 2;
                    func_02084e04(src, dst, (uint8_t)n2);
                    dst += n2;
                    sum = (uint8_t)(sum + (uint8_t)n2);
                    (*(uint16_t *)(b + 0x3e))++;
                }
            }
            src += l + 2;
    }

    if (c[0x12df] == 1) {
        *(uint16_t *)b = *(uint16_t *)b + (uint16_t)sum;
    } else {
        *(uint16_t *)b = *(uint16_t *)b + sum;
    }
}
