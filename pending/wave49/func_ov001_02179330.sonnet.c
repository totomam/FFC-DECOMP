#include "ffc/types.h"

extern void func_ov001_0217ef7c(uint8_t *base, uint8_t *out);
extern void func_ov001_02178324(void *self, uint8_t *dst, const void *src);
extern void func_ov001_02178340(void *self, uint8_t *dst, uint32_t val);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov000_02165c2c(uint32_t tag);
extern int32_t func_ov000_02165c48(int32_t a, int32_t b);
extern void func_ov000_02165e50(const uint8_t *src, uint8_t *dst, uint32_t len, int32_t flag);
extern const uint8_t data_ov001_02190a40[];
extern const uint8_t data_ov001_02190a4c[];
extern const uint8_t data_ov001_02190a54[];
extern const uint8_t data_ov001_02190a5c[];
extern const uint8_t data_ov001_021909f0[];
extern const uint8_t data_ov001_021909fc[];
extern const uint8_t data_ov001_02190a08[];
extern const uint8_t data_ov001_02190990[];
extern const uint8_t data_ov001_02190a6c[];
extern const uint8_t data_ov001_021909c4[];
extern const uint8_t data_ov001_02190a30[];
extern const uint8_t data_ov001_02190a38[];

uint32_t func_ov001_02179330(void *self, int8_t *arg1)
{
    uint8_t *base = *(uint8_t **)self;
    uint8_t out[0x2c];
    uint8_t xored[0x41];
    uint8_t text[0x5b];
    uint32_t len;
    uint32_t i;

    func_ov001_0217ef7c(base + 0x177, out);
    func_ov001_02178324(self, base + 0x210, data_ov001_02190a40);
    func_ov001_02178324(self, base + 0x210, data_ov001_02190a4c);
    func_ov001_02178324(self, base + 0x210, base + 0x144);
    func_ov001_02178324(self, base + 0x210, data_ov001_02190a54);
    func_ov001_02178324(self, base + 0x210, base + 0x110);
    func_ov001_02178324(self, base + 0x210, data_ov001_02190a5c);
    func_ov001_02178324(self, base + 0x210, out);
    func_ov001_02178324(self, base + 0x210, data_ov001_021909f0);
    func_ov001_02178340(self, base + 0x210, *(uint32_t *)(base + 0x60c));
    func_ov001_02178324(self, base + 0x210, data_ov001_021909fc);
    func_ov001_02178324(self, base + 0x210, (const void *)0x02170990);
    func_ov001_02178324(self, base + 0x210, data_ov001_02190a08);
    func_ov001_02178340(self, base + 0x210, *(uint32_t *)(base + 0x610));
    func_ov001_02178324(self, base + 0x210, data_ov001_02190990);
    func_ov001_02178324(self, base + 0x210, base + 0x12f);

    if (arg1[0x2c2]) {
        len = func_02092864((const uint8_t *)arg1 + 0x2c2);
        func_ov000_02165c2c(0x79707367);
        for (i = 0; i < len; i++) {
            int8_t k = (int8_t)func_ov000_02165c48(0, 0xff);
            xored[i] = (uint8_t)(arg1[0x2c2 + i] ^ k);
        }
        xored[i] = 0;
        func_ov000_02165e50(xored, text + 1, len, 1);
        func_ov001_02178324(self, base + 0x210 + 0, data_ov001_02190a6c);
        func_ov001_02178324(self, base + 0x210, text + 1);
    }

    func_ov001_02178324(self, base + 0x210, data_ov001_021909c4);
    func_ov001_02178340(self, base + 0x210, *(uint32_t *)(base + 0x1a4));
    func_ov001_02178324(self, base + 0x210, data_ov001_02190a30);
    func_ov001_02178324(self, base + 0x210, data_ov001_02190a38);
    return 0;
}
