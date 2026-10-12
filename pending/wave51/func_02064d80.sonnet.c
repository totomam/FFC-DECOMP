#include "ffc/types.h"
extern uint32_t data_020b11b4[];
extern uint32_t data_020b11b8[];
typedef struct { uint32_t a, b; } P;
typedef struct { uint32_t u0, u4, mode, idx, u10; P pos; } E;
typedef struct { uint32_t bits, u4, x, y; uint32_t pad[6]; } Q;
typedef struct { uint8_t pad[0x24]; Q *q; uint8_t pad2[0x2f-0x28]; uint8_t f1, f2; uint8_t pad3[0x54-0x31]; int32_t base; uint8_t pad4[0x60-0x58]; E *e; } O;

void func_02064d80(O *p, int i, uint32_t a, uint32_t b) {
  P *pp = &p->e[i].pos;
  Q *q;
  uint32_t x, idx, va, vb, r3, r5;
  pp->a = a;
  pp->b = b;
  r5 = p->e[i].pos.b;
  r3 = p->e[i].pos.a;
  q = &p->q[p->e[i].idx];
  if (p->f1 == 0 && p->f2 == 0) goto done;
  x = q->bits;
  idx = ((x >> 30) << 2) | ((x << 16) >> 30);
  va = data_020b11b4[idx * 2];
  vb = data_020b11b8[idx * 2];
  if (p->e[i].mode == 3) { va <<= 1; vb <<= 1; }
  if (p->f1) r3 = va - r3;
  if (p->f2) r5 = vb - r5;
done:
  q->x = r3;
  q->y = r5 + p->base;
}
