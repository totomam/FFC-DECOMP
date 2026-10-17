
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern void func_02037500(uint32_t *p, int8_t v);
typedef struct 
{
  uint32_t flag : 1;
  uint32_t pad : 31;
  uint32_t size;
  uint16_t *data;
} S;
typedef struct 
{
  uint8_t f : 1;
  uint8_t n : 7;
} B;
void func_0205117c(uint32_t *p, S *q)
{
  uint16_t *r4;
  uint16_t v;
  uint32_t i;
  for (i = 0; i < 3; i++)
  {
    p[i] = 0;
  }

  if (!q->flag)
  {
    r4 = (uint16_t *) (((uint8_t *) q) + 2);
  }
  else
  {
    r4 = q->data;
  }
  goto check;
  body:
  v = *r4;

  if (0xff00 & v)
  {
    func_02037500(p, (int8_t) (v >> 8));
  }
  if (v & 0xff)
  {
    func_02037500(p, (int8_t) v);
  }
  r4++;
  check:
  {
    uint32_t n;
    uint16_t *b;
    if (!q->flag)
    {
      b = (uint16_t *) (((uint8_t *) q) + 2);
      n = ((B *) q)->n;
    }
    else
    {
      b = q->data;
      n = q->size;
    }
    if (r4 != (b + n))
    {
      goto body;
    }
  }

}
