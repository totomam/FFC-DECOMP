#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern void func_020159c8(void *a, uint32_t b);
extern uint8_t data_020b8e70[];

void func_02017ec8(void *a, uint32_t idx) {
    uint8_t *p = func_02052d90(*(void **)(data_020b8e70 + 0x70), *(void **)(data_020b8e70 + 0x74));
    uint8_t *q = p + ((uint32_t *)(p + *(uint32_t *)(p + 0x24)))[idx];
    uint16_t r5 = *(uint16_t *)(q + 0x30);
    uint8_t *s = func_02052d90(*(void **)(data_020b8e70 + 0x70), *(void **)(data_020b8e70 + 0x74));
    func_020159c8(a, *(uint16_t *)(s + 6) + r5);
}
