
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02092a04(uint8_t *a, uint8_t *b, uint32_t n);
extern void func_020928f0(uint8_t *dst, uint8_t *src, uint32_t n);
inline int8_t inline_fn(uint32_t arg0, uint8_t *arg1, int arg2)
{
  return *((int8_t *) ((arg0 + ((uint32_t) arg1)) + arg2));
}

int func_ov000_021592ac(uint8_t *base, uint8_t *out, uint8_t *text, int ch)
{
  uint8_t *p;
  uint8_t *q;
  int len;
  p = func_02092a2c(text, ch);
  if (p == 0)
  {
    return -1;
  }
  for (;;)
  {
    if ((func_02092a04(p + 1, base, func_02092864(base)) == 0) && (ch == inline_fn(func_02092864(base), p, 1)))
    {
      break;
    }
    q = func_02092a2c(p + 1, ch);
    if (q == 0)
    {
      return -1;
    }
    p = func_02092a2c(q + 1, ch);
    if (p == 0)
    {
      return -1;
    }
  }

  p = func_02092a2c(p + 1, ch);
  if (p == 0)
  {
    return -1;
  }
  q = func_02092a2c(p + 1, ch);
  if (q != 0)
  {
    len = q - (p + 1);
  }
  else
  {
    len = func_02092864(p + 1);
  }
  if (out == 0)
  {
    return len;
  }
  func_020928f0(out, p + 1, len);
  out[len] = 0;
  return len;
}
