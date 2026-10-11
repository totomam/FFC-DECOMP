#include "ffc/types.h"

extern void func_02077c50(void *dst, void *src);
extern void func_02077c6c(void *dst, void *src);
extern void func_02077f04(void *obj, void *buf);

void func_02077fd8(uint8_t *self, uint8_t *src) {
    uint8_t buf[8];
    uint8_t *obj = self + 0x24;
    uint8_t *s = src - 0x10;
    func_02077c50(buf, s);
    func_02077c6c(obj + 8, s);
    func_02077f04(obj, buf);
}
