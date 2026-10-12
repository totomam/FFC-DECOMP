#include "ffc/types.h"

typedef struct {
    int32_t quot;
    int32_t rem;
} DivRes;

extern DivRes func_0209a76c(int32_t a, int32_t b);

int32_t func_ov001_02179d24(int32_t day, int32_t month, int32_t year)
{
    if (day == 0 && month == 0 && year == 0) {
        return 1;
    }
    if (day < 0 || month < 0 || year < 0) {
        return 0;
    }
    if (month > 12) {
        return 0;
    }
    switch (month) {
    case 0:
        if (day != 0) {
            return 0;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day > 31) {
            return 0;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30) {
            return 0;
        }
        break;
    case 2:
        if ((year & 3) != 0) {
            if (func_0209a76c(year, 400).rem != 0) {
                if (day > 28) {
                    return 0;
                }
            } else if (day > 29) {
                return 0;
            }
        } else if (func_0209a76c(year, 100).rem != 0) {
            if (day > 29) {
                return 0;
            }
        } else if (func_0209a76c(year, 400).rem != 0) {
            if (day > 28) {
                return 0;
            }
        } else if (day > 29) {
            return 0;
        }
        break;
    }
    if (year < 1900) {
        return 0;
    }
    if (year > 2079) {
        return 0;
    }
    if (year != 2079) {
        return 1;
    }
    if (month > 6) {
        return 0;
    }
    if (month == 6 && day > 6) {
        return 0;
    }
    return 1;
}
