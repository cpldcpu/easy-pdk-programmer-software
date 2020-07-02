#ifndef __PDK_PERIPH_PWMG_B_H__
#define __PDK_PERIPH_PWMG_B_H__

// PWMGCLK (PWMG Clock) register definitions
#define PWMGCLK_CLK_SRC_BIT          0
#define PWMGCLK_PRESCALE_BIT0        4
#define PWMGCLK_ENABLE_BIT           7

#define PWMGCLK_CLK_SYSCLK           0x00
#define PWMGCLK_CLK_IHRC             (1 << PWMGCLK_CLK_SRC_BIT)

#define PWMGCLK_PRESCALE_NONE        0x00
#define PWMGCLK_PRESCALE_DIV2        (1 << PWMGCLK_PRESCALE_BIT0)
#define PWMGCLK_PRESCALE_DIV4        (2 << PWMGCLK_PRESCALE_BIT0)
#define PWMGCLK_PRESCALE_DIV8        (3 << PWMGCLK_PRESCALE_BIT0)
#define PWMGCLK_PRESCALE_DIV16       (4 << PWMGCLK_PRESCALE_BIT0)
#define PWMGCLK_PRESCALE_DIV32       (5 << PWMGCLK_PRESCALE_BIT0)
#define PWMGCLK_PRESCALE_DIV64       (6 << PWMGCLK_PRESCALE_BIT0)
#define PWMGCLK_PRESCALE_DIV128      (7 << PWMGCLK_PRESCALE_BIT0)

#define PWMGCLK_PWMG_ENABLE          (1 << PWMGCLK_ENABLE_BIT)

// PWMG0C (PWMG0 Control) register definitions
#define PWMG0C_X_OR_BIT              0
#define PWMG0C_OUT_PIN_SEL_BIT0      1
#define PWMG0C_X_OR_ENABLE_BIT       4
#define PWMG0C_INVERT_OUT_BIT        5
#define PWMG0C_STATUS_OUT_BIT        6

#define PWMG0C_GEN_XOR               0x00
#define PWMG0C_GEN_OR                (1 << PWMG0C_X_OR_BIT)

#define PWMG0C_OUT_NONE              0x00
#define PWMG0C_OUT_PB5               (1 << PWMG0C_OUT_PIN_SEL_BIT0)
#define PWMG0C_OUT_PC2               (2 << PWMG0C_OUT_PIN_SEL_BIT0)
#define PWMG0C_OUT_PA0               (3 << PWMG0C_OUT_PIN_SEL_BIT0)
#define PWMG0C_OUT_PB4               (4 << PWMG0C_OUT_PIN_SEL_BIT0)
#define PWMG0C_OUT_PB6               (5 << PWMG0C_OUT_PIN_SEL_BIT0)

#define PWMG0C_OUT_PWMG0             0x00
#define PWMG0C_OUT_PWMG0_X_OR_PWMG1  (1 << PWMG0C_X_OR_ENABLE_BIT)

#define PWMG0C_INVERT_OUT            (1 << PWMG0C_INVERT_OUT_BIT)
#define PWMG0C_STATUS_OUT            (1 << PWMG0C_STATUS_OUT_BIT)

// PWMG1C (PWMG1 Control) register definitions
#define PWMG1C_OUT_PIN_SEL_BIT0      1
#define PWMG1C_PWMG1_2_SEL_BIT       4
#define PWMG1C_INVERT_OUT_BIT        5
#define PWMG1C_STATUS_OUT_BIT        6

#define PWMG1C_OUT_NONE              0x00
#define PWMG1C_OUT_PB6               (1 << PWMG1C_OUT_PIN_SEL_BIT0)
#define PWMG1C_OUT_PC3               (2 << PWMG1C_OUT_PIN_SEL_BIT0)
#define PWMG1C_OUT_PA4               (3 << PWMG1C_OUT_PIN_SEL_BIT0)
#define PWMG1C_OUT_PB7               (4 << PWMG1C_OUT_PIN_SEL_BIT0)

#define PWMG1C_OUT_PWMG1             0x00
#define PWMG1C_OUT_PWMG2             (1 << PWMG1C_PWMG1_2_SEL_BIT)

#define PWMG1C_INVERT_OUT            (1 << PWMG1C_INVERT_OUT_BIT)
#define PWMG1C_STATUS_OUT            (1 << PWMG1C_STATUS_OUT_BIT)

// PWMG2C (PWMG2 Control) register definitions
#define PWMG2C_OUT_PIN_SEL_BIT0      1
#define PWMG2C_PWMG2_DIV2_SEL_BIT    4
#define PWMG2C_INVERT_OUT_BIT        5
#define PWMG2C_STATUS_OUT_BIT        6

#define PWMG2C_GEN_XOR               0x00
#define PWMG2C_GEN_OR                (1 << PWMG2C_X_OR_BIT)

#define PWMG2C_OUT_NONE              0x00
#define PWMG2C_OUT_PB3               (1 << PWMG2C_OUT_PIN_SEL_BIT0)
#define PWMG2C_OUT_PC0               (2 << PWMG2C_OUT_PIN_SEL_BIT0)
#define PWMG2C_OUT_PA3               (3 << PWMG2C_OUT_PIN_SEL_BIT0)
#define PWMG2C_OUT_PB2               (4 << PWMG2C_OUT_PIN_SEL_BIT0)
#define PWMG2C_OUT_PA5               (5 << PWMG2C_OUT_PIN_SEL_BIT0)
#define PWMG2C_OUT_PB5               (6 << PWMG2C_OUT_PIN_SEL_BIT0)

#define PWMG2C_OUT_PWMG2             0x00
#define PWMG2C_OUT_PWMG2_DIV2        (1 << PWMG2C_PWMG2_DIV2_SEL_BIT)

#define PWMG2C_INVERT_OUT            (1 << PWMG2C_INVERT_OUT_BIT)
#define PWMG2C_STATUS_OUT            (1 << PWMG2C_STATUS_OUT_BIT)

#endif //__PDK_PERIPH_PWMG_B_H__