/* FFC port HAL (P3): the DS address space, VBlank/IRQ emulation, input. */
#ifndef FFC_HAL_H
#define FFC_HAL_H
#include <stdint.h>

#define FFC_REG8(a) (*(volatile uint8_t *)(uintptr_t)(a))
#define FFC_REG16(a) (*(volatile uint16_t *)(uintptr_t)(a))
#define FFC_REG32(a) (*(volatile uint32_t *)(uintptr_t)(a))

#define FFC_REG_DISPSTAT 0x04000004u
#define FFC_REG_VCOUNT 0x04000006u
#define FFC_REG_KEYINPUT 0x04000130u
#define FFC_REG_EXTKEYIN 0x04000136u
#define FFC_REG_IME 0x04000208u
#define FFC_REG_IE 0x04000210u
#define FFC_REG_IF 0x04000214u
#define FFC_INTR_CHECK_BUF 0x02fe3ff8u /* HW_INTR_CHECK_BUF = DTCM end - 8 (DTCM at 0x02fe0000) */

#define FFC_IRQ_VBLANK 0x1u

/* The ROM file (FFC_ROM, default rom/baserom_usa.nds). */
extern const uint8_t *ffc_rom;
extern uint32_t ffc_rom_size;

void ffc_hal_init(void);
/* One frame: present, poll input, VBlank interrupt. */
void ffc_hal_vblank(void);
/* Raise interrupt bits and dispatch through the game's OS_IRQTable if IME/IE allow it. */
void ffc_hal_raise_irq(uint32_t mask);
uint64_t ffc_hal_frame(void);
/* Run DMA channel ch as programmed in its registers. */
void ffc_hal_dma_kick(uint32_t ch);

#endif
