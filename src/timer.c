#include <seven/base.h>
#include <seven/hw/timer.h>
#include <seven/hw/irq.h>

#define REG_TM          REG32_ARRAY(0x04000100)
#define REG_TMVAL(num)  REG16_ARRAY_STRIDE(0x04000100, 4, num)
#define REG_TMCNT(num)  REG16_ARRAY_STRIDE(0x04000102, 4, num)

extern void timerSet(u32 num, u16 reload, u16 flags)
{
    if (num > 3)
    {
        return;
    }

    REG_TM[num] = reload | (flags << 16);
}

extern void timerEnable(u32 num)
{
    if (num > 3)
    {
        return;
    }

    REG_TMCNT(num) |= TIMER_ENABLE;
}

extern void timerDisable(u32 num)
{
    if (num > 3)
    {
        return;
    }

    REG_TMCNT(num) &= ~TIMER_ENABLE;
}

extern u16 timerGetValue(u32 num)
{
    if (num > 3)
    {
        return 0;
    }

    return REG_TMVAL(num);
}
