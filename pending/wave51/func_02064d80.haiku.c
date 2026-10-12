#include "ffc/types.h"

extern uint32_t data_020b11b4[];
extern uint32_t data_020b11b8[];

void func_02064d80(uint8_t *p, int i, uint32_t a, uint32_t b) {
  uint8_t *e;
  uint8_t *q;
  uint32_t x, idx, va, vb, r3, r5, f;
  int off;

  off = i * 0x1c;
  e = *(uint8_t **)(p + 0x60) + off;
  *(uint32_t *)(e + 0x14) = a;
  *(uint32_t *)(e + 0x18) = b;
  e = *(uint8_t **)(p + 0x60) + off;
  r5 = *(uint32_t *)(e + 0x18);
  r3 = *(uint32_t *)(e + 0x14);
  q = *(uint8_t **)(p + 0x24) + *(uint32_t *)(*(uint8_t **)(p + 0x60) + off + 0xc) * 0x28;
  f = p[0x2f];
  if (f == 0) {
    if (p[0x30] == 0) {
      goto done;
    }
  }
  x = *(uint32_t *)q;
  idx = ((x >> 30) << 2) | ((x >> 14) & 3);
  va = data_020b11b4[idx * 2];
  vb = data_020b11b8[idx * 2];
  if (*(uint32_t *)(e + 0x8) == 3) {
    va <<= 1;
    vb <<= 1;
  }
  if (f != 0) {
    r3 = va - r3;
  }
  if (p[0x30] != 0) {
    r5 = vb - r5;
  }
done:
  *(uint32_t *)(q + 0x8) = r3;
  *(uint32_t *)(q + 0xc) = r5 + *(uint32_t *)(p + 0x54);
}
