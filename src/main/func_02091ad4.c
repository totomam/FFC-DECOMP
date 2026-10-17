
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern uint32_t func_02091420(void *fn, void *ctx, int32_t a, int32_t b, uint32_t c);
extern char func_020919fc[];
int func_02091ad4(char *buf, uint32_t size, int32_t a2, int32_t a3)
{
  struct 
  {
    char *buf;
    uint32_t size;
    uint32_t n;
  } ctx;
  uint32_t r;
  char *p;
  ctx.buf = buf;
  ctx.size = size;
  ctx.n = 0;
  r = func_02091420((void *) func_020919fc, &ctx, a2, a3, 0);
  if (buf != 0)
  {
    if (r < size)
    {
      buf[r] = 0;
    }
    else
      if (size != 0)
    {
      p = buf + size;
      p[-1] = 0;
    }
  }
}
