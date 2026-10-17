
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
  uint32_t c;
} T;
extern void func_020694ac(void *p, int a, int b);
extern uint32_t data_ov008_021a7908;
void *func_ov008_02199640(uint8_t *p)
{
  uint8_t i = 0;
  T *x;
  T *y;
  func_020694ac(p, 0, 0);
  *((uint32_t **) p) = &data_ov008_021a7908;
  x = (T *) (p + 0xcc);
  ((T *) (p + 0xcc))->a = 0;
  x->b = 0;
  x->c = 0;
  y = (T *) (p + 0xf0);
  y->b = (((T *) (p + 0xf0))->a = 0);
  y->c = 0;
  p[0x140] = 0;
  p[0x141] = 0;
  p[0x142] = 0;
  p[0x143] = 0xff;
  p[0x144] = 0;
  for (i = 0; i < 0x40; i++)
  {
    p[0x100 + i] = 0;
  }

  return p;
}
