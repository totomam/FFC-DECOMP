
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern void func_ov003_0215c634(int32_t a, int32_t b, int32_t *x, int32_t *y);
extern uint32_t func_020817c8(int32_t first, int32_t second);
uint32_t func_ov003_0215c66c(int32_t a, int32_t b, int32_t c, ...)
{
  struct 
  {
    int32_t pad[14];
    int32_t x;
    int32_t y;
  } l;
  uint32_t r;
  uint32_t s;
  int32_t k;
  func_ov003_0215c634(a, b, &l.y, &l.x);
  k = 0x1000;
  k = k - (*((volatile int32_t *) (&c)));
  r = func_020817c8(l.x << 12, k);
  s = func_020817c8(l.y << 12, *((volatile int32_t *) (&c)));
  return ((s + r) << 4) >> 16;
}
