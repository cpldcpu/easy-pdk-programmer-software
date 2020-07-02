#ifndef __PDK_PERIPH_TIMER3_H__
#define __PDK_PERIPH_TIMER3_H__

// TM3C (Timer3 Control) register definitions
#define TM3C_INVERT_OUT_BIT          0
#define TM3C_MODE_SEL_BIT            1
#define TM3C_OUTPUT_SEL_BIT0         2
#define TM3C_CLK_SRC_BIT0            4

#define TM3C_INVERT_OUT              (1 << TM3C_INVERT_OUT_BIT)

#define TM3C_MODE_PERIOD             0x00
#define TM3C_MODE_PWM                (1 << TM3C_MODE_SEL_BIT)

#define TM3C_OUT_DISABLE             0x00
#if defined(HAS_PORTB)
  #define TM3C_OUT_PB2                 (1 << TM3C_OUTPUT_SEL_BIT0)
#endif
#define TM3C_OUT_PA3                 (2 << TM3C_OUTPUT_SEL_BIT0)
#if defined(HAS_PORTB)
  #define TM3C_OUT_PB4                 (3 << TM3C_OUTPUT_SEL_BIT0)
#else
  #define TM3C_OUT_PA4                 (3 << TM3C_OUTPUT_SEL_BIT0)
#endif

#define TM3C_CLK_DISABLE             0x00
#define TM3C_CLK_SYSCLK              (1 << TM3C_CLK_SRC_BIT0)
#define TM3C_CLK_IHRC                (2 << TM3C_CLK_SRC_BIT0)
#if defined(HAS_EOSC)
  #define TM3C_CLK_EOSC                (3 << TM3C_CLK_SRC_BIT0)
#endif
#define TM3C_CLK_ILRC                (4 << TM3C_CLK_SRC_BIT0)
#define TM3C_CLK_COMPOUT             (5 << TM3C_CLK_SRC_BIT0)
//0x06 reserved
//0x07 reserved
#define TM3C_CLK_PA0_RISE            (8 << TM3C_CLK_SRC_BIT0)
#define TM3C_CLK_PA0_FALL            (9 << TM3C_CLK_SRC_BIT0)
#if defined(HAS_PORTB)
  #define TM3C_CLK_PB0_RISE            (10 << TM3C_CLK_SRC_BIT0)
  #define TM3C_CLK_PB0_FALL            (11 << TM3C_CLK_SRC_BIT0)
#endif
#define TM3C_CLK_PA4_RISE            (12 << TM3C_CLK_SRC_BIT0)
#define TM3C_CLK_PA4_FALL            (13 << TM3C_CLK_SRC_BIT0)

// TM3S (Timer3 Scalar) register definitions
#define TM3S_SCALE_BIT0              0
#define TM3S_PRESCALE_BIT0           5
#define TM3S_PWM_RES_SEL_BIT         7

#define TM3S_SCALE_NONE              0x00
#define TM3S_SCALE_DIV2              (1 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV3              (2 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV4              (3 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV5              (4 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV6              (5 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV7              (6 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV8              (7 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV9              (8 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV10             (9 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV11             (10 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV12             (11 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV13             (12 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV14             (13 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV15             (14 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV16             (15 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV17             (16 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV18             (17 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV19             (18 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV20             (19 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV21             (20 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV22             (21 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV23             (22 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV24             (23 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV25             (24 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV26             (25 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV27             (26 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV28             (27 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV29             (28 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV30             (29 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV31             (30 << TM3S_SCALE_BIT0)
#define TM3S_SCALE_DIV32             (31 << TM3S_SCALE_BIT0)

#define TM3S_PRESCALE_NONE           0x00
#define TM3S_PRESCALE_DIV4           (1 << TM3S_PRESCALE_BIT0)
#define TM3S_PRESCALE_DIV16          (2 << TM3S_PRESCALE_BIT0)
#define TM3S_PRESCALE_DIV64          (3 << TM3S_PRESCALE_BIT0)

#define TM3S_PWM_RES_8BIT            0x00
#define TM3S_PWM_RES_6BIT            (1 << TM3S_PWM_RES_SEL_BIT)

#endif //__PDK_PERIPH_TIMER3_H__
