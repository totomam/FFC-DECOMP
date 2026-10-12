#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern uint32_t func_0207348c(void *a, void *b, void *c, void *d, void *e);
extern void func_02056bc0(void *object, void *node);
extern void *func_02075540(void *a, void *b);
extern uint8_t data_020b0b68[];
extern uint8_t data_020b0b7c[];

void *func_020759bc(uint8_t *p, void *b, void *c, void *d, void *e) {
  uint8_t *o = (uint8_t *)func_0205681c(0x34);
  uint32_t r1;
  void *res;
  if (o != 0) {
    *(uint32_t *)(o + 0xc) &= ~0xffu;
    *(uint32_t *)o = (uint32_t)data_020b0b68;
    func_02087620(o + 0x1c);
    o[0x10] = o[0x10] & ~0xff;
    o[0x11] = o[0x11] & ~0xff;
    o[0x12] = o[0x12] & ~0xff;
    *(uint32_t *)(o + 0x14) = 0;
    *(uint32_t **)(o + 0x18) = (uint32_t *)(o + 0x14);
    *(uint32_t *)o = (uint32_t)data_020b0b7c;
    o[0x11] = (o[0x11] & ~0xff) | 1;
  }
  r1 = func_0207348c(*(void **)(*(uint8_t **)(p + 0x40) + 0x2c), b, c, d, e);
  func_02056bc0(o, (void *)r1);
  res = func_0205681c(0x8c);
  if (res != 0) {
    res = func_02075540(res, *(void **)(p + 0x40));
  }
  func_02056bc0(o, res);
  return o;
}
