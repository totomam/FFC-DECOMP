#include "ffc/types.h"

extern int func_ov001_02175030(uint8_t *p, uint8_t *text, int len);
extern int func_ov001_021750d4(uint8_t *p, uint8_t *text, int len);
extern int func_ov001_021750b0(uint8_t *p);
extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern void func_ov000_021652a8(int a, int b, int c, void *d, ...);
extern uint8_t data_ov001_0218ffe0[];
extern uint8_t data_ov001_0218fff0[];
extern uint8_t data_ov001_02190008[];
extern uint8_t data_ov001_02190020[];
extern uint8_t data_ov001_02190034[];

int func_ov001_02175114(uint8_t *p, uint8_t *text, int len)
{
    int32_t *w = (int32_t *)p;
    int res;
    int m;
    uint8_t *r;

    if (w[0x4e] != 0) {
        if (len > 0) {
            do {
                if (w[0x54] == 0) {
                    r = func_02092a2c(text, 10);
                    if (r != 0) {
                        func_ov001_021750d4(p, text, (int)(r - text));
                        r = r + 1;
                        len -= (int)(r - text);
                        text = r;
                        res = func_ov001_021750b0(p);
                        w[0x53] = res;
                        if (res == -1) {
                            w[0x49] = 1;
                            w[0x10] = 7;
                            return 0;
                        }
                        if (res == 0) {
                            w[0x54] = 3;
                            func_ov000_021652a8(8, 0, 0x20, data_ov001_0218ffe0);
                        } else {
                            w[0x54] = 1;
                            func_ov000_021652a8(8, 0, 0x20, data_ov001_0218fff0, res);
                        }
                    } else {
                        func_ov001_021750d4(p, text, len);
                        return 1;
                    }
                } else if (w[0x54] == 1) {
                    m = w[0x53];
                    if (m >= len) {
                        m = len;
                    }
                    func_ov000_021652a8(8, 0, 0x20, data_ov001_02190008, m);
                    if (func_ov001_02175030(p, text, m) == 0) {
                        return 0;
                    }
                    text += m;
                    len -= m;
                    w[0x53] -= m;
                    if (w[0x53] == 0) {
                        w[0x54] = 2;
                    }
                } else if (w[0x54] == 2) {
                    r = func_02092a2c(text, 10);
                    if (r == 0) {
                        return 1;
                    }
                    r = r + 1;
                    len -= (int)(r - text);
                    text = r;
                    p[0x13c] = 0;
                    w[0x52] = 0;
                    w[0x53] = 0;
                    w[0x54] = 0;
                    func_ov000_021652a8(8, 0, 0x20, data_ov001_02190020);
                } else if (w[0x54] == 3) {
                    w[0x49] = 1;
                    func_ov000_021652a8(8, 0, 0x20, data_ov001_02190034);
                    return 1;
                } else {
                    return 0;
                }
            } while (len > 0);
        }
        return 1;
    }
    return func_ov001_02175030(p, text, len);
}
