
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern uint32_t data_020b93b8;
extern uint32_t func_0201c1f0(uint32_t a, uint32_t b, uint32_t c);
int func_ov003_0216b028(uint8_t *p)
{
  uint32_t vals[2] = {0, 0};
  uint32_t *v = vals;
  uint32_t i;
  uint32_t *q;
  uint32_t off;
  for (i = 0; ((0, i)) < 2; i++)
  {
    if ((i == 1) && (5 >= ((uint16_t) ((*((uint16_t *) p)) + 0xffef))))
    {
      q = p + 8;
      vals[1] = *((uint32_t *) ((p + (*((uint32_t *) q))) + 4));
    }
    else
    {
      off = *((uint32_t *) (p + 8));
      q = (uint32_t *) (p + off);
      v[i] = func_0201c1f0(data_020b93b8, ((uint32_t *) (p + off))[i] >> 24, 0xffffff & q[i]);
    }
  }

  switch (*((uint16_t *) p))
  {
    case 11:

    case 17:
      if (vals[0] == vals[1])
    {
      return 1;
    }
      return 0;

    case 12:

    case 18:
      if (vals[0] != vals[1])
    {
      return 1;
    }
      return 0;

    case 13:

    case 19:
      if (vals[0] < vals[1])
    {
      return 1;
    }
      return 0;

    case 14:

    case 20:
      if (vals[0] <= vals[1])
    {
      return 1;
    }
      return 0;

    case 15:

    case 21:
      if (vals[0] > vals[1])
    {
      return 1;
    }
      return 0;

    case 16:

    case 22:
      if (vals[0] >= vals[1])
    {
      return 1;
    }
      return 0;

    default:
      return (vals[0] > vals[1]) * 0;

  }

}
