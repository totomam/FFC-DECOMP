#include "ffc/types.h"

extern void func_02084b2c(void *p, uint32_t v, uint32_t n);
extern void func_0201ce28(void *a, void *b);
extern void *func_02052d90(void *mar, uint32_t index);
extern int func_0201c00c(void *a, uint16_t b);
extern void func_0202a9ac(void *cursor);
extern void *data_020b93b8;

void func_02043608(uint8_t *self) {
    uint32_t head, cursor, i, j, n, v;
    uint8_t *mar, *e, *sub;

    if (self[0x133] == 0) return;
    self[0x133] = 0;
    func_02084b2c(*(void **)(self + 0xd4), 0, (*(uint32_t *)(self + 0xd0) + 7) >> 3);
    func_0201ce28(data_020b93b8, self + 0xc8);
    head = (uint32_t)(self + 0x94);
    cursor = *(uint32_t *)(self + 0x9c);
    while (cursor != head) {
        for (i = 0; i < ((uint32_t *)func_02052d90(*(void **)(cursor + 0x14), *(uint32_t *)(cursor + 0x18)))[1]; i++) {
            mar = func_02052d90(*(void **)(cursor + 0x14), *(uint32_t *)(cursor + 0x18));
            e = mar + ((uint32_t *)(mar + *(uint32_t *)(mar + 8)))[i];
            if (func_0201c00c(data_020b93b8, *(uint16_t *)(e + 2)) == 0) {
                n = *(uint32_t *)(e + 4);
                for (j = 0; j < n; j++) {
                    sub = e + ((uint32_t *)(e + *(uint32_t *)(e + 8)))[j];
                    if (*(uint16_t *)sub == 5 && *(uint32_t *)(sub + 4) <= 1) {
                        v = *(uint32_t *)(sub + *(uint32_t *)(sub + 8));
                        ((uint8_t *)*(void **)(self + 0xd4))[v >> 3] |= (uint8_t)(1 << (v & 7));
                        break;
                    }
                }
            }
        }
        func_0202a9ac(&cursor);
    }
}
