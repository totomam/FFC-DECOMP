
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
typedef struct 
{
  uint32_t a;
  uint32_t b;
} Pair;
typedef struct Node
{
  void *vt;
  uint8_t p04[0x15 - 0x04];
  uint8_t flag;
  uint8_t p16[0x1c - 0x16];
  uint32_t f1c;
  uint32_t p20;
  uint32_t f24;
  uint8_t p28[0x30 - 0x28];
  uint32_t f30;
  uint8_t p34[0x4c - 0x34];
  void *f4c;
} Node;
extern void func_ov003_0215c220(Pair *out, void *self);
extern void *func_0205681c(uint32_t size);
extern void func_02056c4c(void *x);
extern void func_020572d0(Node *n, Pair v, Pair p);
extern void func_02056bc0(void *object, void *node);
extern void *data_ov003_0217a240;
void func_ov003_0215c19c(void *self, Pair p, uint32_t c, uint32_t d)
{
  Node *n;
  func_02056c4c(*((void **) (0xc0 + ((uint8_t *) self))));
  n = (Node *) func_0205681c(0x50);
  if (n != 0)
  {
    Pair v;
    Pair r;
    func_ov003_0215c220(&r, self);
    v.a = r.a;
    v.b = r.b;
    v.a = r.a;
    func_020572d0(n, v, p);
    n->vt = &data_ov003_0217a240;
    n->f4c = self;
    n->f24 = c << 1;
    if (n->flag != 0)
    {
      if ((c << 1) == 0)
      {
        n->f1c = 1;
      }
      else
      {
        n->f1c = c << 5;
      }
    }
    n->f30 = d;
    n->f1c = 0x2000;
  }
  func_02056bc0(*((void **) (((uint8_t *) self) + 0xc0)), n);
}
