
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
typedef struct Obj
{
  uint32_t f00;
  uint32_t f04;
  uint32_t f08;
  uint32_t f0c;
  uint32_t f10;
  uint32_t f14;
  uint32_t f18;
  uint32_t f1c;
  uint32_t f20;
  uint32_t f24;
  uint32_t f28;
  uint32_t f2c;
} Obj;
typedef struct Loc
{
  uint32_t pad;
  void *a;
  void *b;
  uint8_t flag;
} Loc;
extern void func_02084b2c(void *p, int v, uint32_t n);
extern void func_02019474(Loc *l, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;
inline uint8_t *inline_fn(uint8_t *arg0, int arg1)
{
  return arg0 + arg1;
}

void *func_ov004_02152cd4(Obj *p)
{
  Loc l;
  Loc *lp;
  uint32_t m;
  uint16_t n;
  func_02084b2c(p, 0, 0x30);
  p->f04 = 2;
  p->f20 = 2;
  p->f00 = 0;
  p->f08 = 0;
  p->f24 = 0x10;
  func_02019474(&l, data_020b8e44);
  lp = &l;
  p->f0c = *((uint16_t *) (((uint8_t *) func_02052d90(lp->a, lp->b)) + 4));
  p->f10 = *((uint16_t *) inline_fn((uint8_t *) func_02052d90(lp->a, lp->b), 6));
  n = *((uint16_t *) (((uint8_t *) func_02052d90(lp->a, lp->b)) + 8));
  m = *((uint16_t *) inline_fn((uint8_t *) func_02052d90(lp->a, lp->b), 8));
  p->f14 = m * n;
  p->f28 = *((uint16_t *) inline_fn((uint8_t *) func_02052d90(lp->a, lp->b), 0xa));
  p->f2c = *((uint16_t *) (((uint8_t *) func_02052d90(lp->a, lp->b)) + 0xc));
  if (lp->a != 0)
  {
    if (lp->flag)
    {
      func_02052d3c(lp->a, lp->b);
    }
    func_02052c04(lp->a);
  }
  func_02053290(lp);
  return p;
}
