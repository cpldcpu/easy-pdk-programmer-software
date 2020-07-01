#ifndef __PDK_IO_PFS154_H__
#define __PDK_IO_PFS154_H__

#if !defined(__PDK_IO_H__)
#  error "You must #include "pdk/io.h" instead of "pdk/io_pfs154.h" by itself."
#endif

#ifndef __PDK__IO_XXX_H_
#  define __PDK_IO_XXX_H_ "io_pfs154.h"
#else
#  error "Attempt to include more than one "pdk/io_XXX.h" file."
#endif 

#if !defined __SDCC_pdk14
#  error "PFS154 needs the PDK14 backend. You must compile with the -mpdk14 option."
#endif

#define ILRC_FREQ           55000

// Factory Calibration address locations
#define FACTORY_IHRCR_ADDR  0x07ed
#define FACTORY_BGTR_ADDR   0x07ee

// FUSE definitions
#define FUSE_WORD_ADDR      0x07ff
#define FUSE_RES_BITS_HIGH  0x30FC // - - 1 1   B B 0 D   1 1 1 1   1 1 0 S
// Blank IC Values          0x3FFD // - - 1 1   1 1 1 1   1 1 1 1   1 1 1 1 (Security Off, Normal IO Drive, Fast Boot-up)
#define FUSE_SECURITY_ON    0x0000 //(S)
#define FUSE_SECURITY_OFF   0x0001
#define FUSE_IO_DRV_LOW     0x0000 //(D)
#define FUSE_IO_DRV_NORMAL  0x0100
#define FUSE_BOOTUP_SLOW    0x0000 //(B)
#define FUSE_BOOTUP_FAST    0x0C00

// Register address definitions
#define FLAG_ADDR           0x00
//0x01
#define SP_ADDR             0x02
#define CLKMD_ADDR          0x03
#define INTEN_ADDR          0x04
#define INTRQ_ADDR          0x05
#define T16M_ADDR           0x06
//0x07
#define MISC_ADDR           0x08
#define TM2B_ADDR           0x09
#define EOSCR_ADDR          0x0a
#define IHRCR_ADDR          0x0b
#define INTEGS_ADDR         0x0c
#define PADIER_ADDR         0x0d
#define PBDIER_ADDR         0x0e
#define MISC2_ADDR          0x0f
#define PA_ADDR             0x10
#define PAC_ADDR            0x11
#define PAPH_ADDR           0x12
//0x13
#define PB_ADDR             0x14
#define PBC_ADDR            0x15
#define PBPH_ADDR           0x16
#define TM2S_ADDR           0x17
#define GPCC_ADDR           0x18
#define GPCS_ADDR           0x19
#define BGTR_ADDR           0x1a
#define MISCLVR_ADDR        0x1b
#define TM2C_ADDR           0x1c
#define TM2CT_ADDR          0x1d
//0x1e
//0x1f
#define PWMG0C_ADDR         0x20
#define PWMG0S_ADDR         0x21
#define PWMG0DTH_ADDR       0x22
#define PWMG0DTL_ADDR       0x23
#define PWMG0CUBH_ADDR      0x24
#define PWMG0CUBL_ADDR      0x25
#define PWMG1C_ADDR         0x26
#define PWMG1S_ADDR         0x27
#define PWMG1DTH_ADDR       0x28
#define PWMG1DTL_ADDR       0x29
#define PWMG1CUBH_ADDR      0x2a
#define PWHG1CUBL_ADDR      0x2b
#define PWMG2C_ADDR         0x2c
#define PWMG2S_ADDR         0x2d
#define PWMG2DTH_ADDR       0x2e
#define PWMG2DTL_ADDR       0x2f
#define PWMG2CUBH_ADDR      0x30
#define PWHM2CUBL_ADDR      0x31
#define TM3C_ADDR           0x32
#define TM3CT_ADDR          0x33
#define TM3S_ADDR           0x34
#define TM3B_ADDR           0x35
//0x36
//0x37
//0x38
#define ILRCR_ADDR          0x39
//0x3a
//0x3b
//0x3c
//0x3d
//0x3e
//0x3f


// FLAG definitions
#define FLAG_ZF_BIT                  0
#define FLAG_CF_BIT                  1
#define FLAG_AC_BIT                  2
#define FLAG_OV_BIT                  3

#define FLAG_ZF                      (1 << FLAG_ZF_BIT)
#define FLAG_CF                      (1 << FLAG_CF_BIT)
#define FLAG_AC                      (1 << FLAG_AC_BIT)
#define FLAG_OV                      (1 << FLAG_OV_BIT)

// CLKMD definitions
#define CLKMD_ENABLE_PRSTB           0x01
#define CLKMD_ENABLE_WATCHDOG        0x02
#define CLKMD_ENABLE_ILRC            0x04
#define CLKMD_ENABLE_IHRC            0x10
#define CLKMD_IHRC_DIV2              0x20
#define CLKMD_IHRC_DIV4              0x00
#define CLKMD_IHRC_DIV8              0x28
#define CLKMD_IHRC_DIV16             0x08
#define CLKMD_IHRC_DIV32             0x68
#define CLKMD_IHRC_DIV64             0x88
#define CLKMD_ILRC                   0xe0
#define CLKMD_ILRC_DIV4              0xc0
#define CLKMD_ILRC_DIV16             0x48
#define CLKMD_EOSC                   0xa0
#define CLKMD_EOSC_DIV2              0x80
#define CLKMD_EOSC_DIV4              0x60
#define CLKMD_EOSC_DIV8              0xa8

// INTEN definitions
#define INTEN_PA0                    0x01
#define INTEN_PB0                    0x02
#define INTEN_T16                    0x04
#define INTEN_COMP                   0x10
#define INTEN_PWMG                   0x20
#define INTEN_TM2                    0x40
#define INTEN_TM3                    0x80

// INTRQ definitions
#define INTRQ_PA0                    0x01
#define INTRQ_PB0                    0x02
#define INTRQ_T16                    0x04
#define INTRQ_COMP                   0x10
#define INTRQ_PWMG                   0x20
#define INTRQ_TM2                    0x40
#define INTRQ_TM3                    0x80

// T16 definitions
#define T16_INTSRC_8BIT              0x00
#define T16_INTSRC_9BIT              0x01
#define T16_INTSRC_10BIT             0x02
#define T16_INTSRC_11BIT             0x03
#define T16_INTSRC_12BIT             0x04
#define T16_INTSRC_13BIT             0x05
#define T16_INTSRC_14BIT             0x06
#define T16_INTSRC_15BIT             0x07
#define T16_CLK_DIV1                 0x00
#define T16_CLK_DIV4                 0x08
#define T16_CLK_DIV16                0x10
#define T16_CLK_DIV64                0x18
#define T16_CLK_DISABLE              0x00
#define T16_CLK_SYSCLK               0x20
#define T16_CLK_PA4_FALL             0x60
#define T16_CLK_IHRC                 0x80
#define T16_CLK_EOSC                 0xA0
#define T16_CLK_ILRC                 0xC0
#define T16_CLK_PA0_FALL             0xE0

// EOSC definitions
#define EOSC_LVD_BANDGAP_SHUTDOWN    0x01
#define EOSC_EXT_32KHZ               0x20
#define EOSC_EXT_1MHZ                0x40
#define EOSC_EXT_4MHZ                0x60
#define EOSC_EXT_ENABLE              0x80

// INTEGS definitions
#define INTEGS_PA0_BOTH              0x00
#define INTEGS_PA0_RISING            0x01
#define INTEGS_PA0_FALLING           0x02
#define INTEGS_PB0_BOTH              0x00
#define INTEGS_PB0_RISING            0x04
#define INTEGS_PB0_FALLING           0x08
#define INTEGS_T16_RISING            0x00
#define INTEGS_T16_FALLING           0x10

// PADIE definitions
#define PADIE_PA0_WAKEUP_ENABLE      0x01
#define PADIE_PA3_WAKEUP_ENABLE      0x08
#define PADIE_PA4_WAKEUP_ENABLE      0x10
#define PADIE_PA5_WAKEUP_ENABLE      0x20
#define PADIE_PA6_WAKEUP_ENABLE      0x40
#define PADIE_PA7_WAKEUP_ENABLE      0x80

// PBDIE definitions
#define PBDIE_PB0_WAKEUP_ENABLE      0x01
#define PBDIE_PB1_WAKEUP_ENABLE      0x02
#define PBDIE_PB2_WAKEUP_ENABLE      0x04
#define PBDIE_PB3_WAKEUP_ENABLE      0x08
#define PBDIE_PB4_WAKEUP_ENABLE      0x10
#define PBDIE_PB5_WAKEUP_ENABLE      0x20
#define PBDIE_PB6_WAKEUP_ENABLE      0x40
#define PBDIE_PB7_WAKEUP_ENABLE      0x80

// MISC definitions
#define MISC_WATCHDOG_8K_ILRC        0x00
#define MISC_WATCHDOG_16K_ILRC       0x01
#define MISC_WATCHDOG_64K_ILRC       0x02
#define MISC_WATCHDOG_256K_ILRC      0x03
#define MISC_LVR_DISABLE             0x04
#define MISC_LCD_ENABLE              0x10
#define MISC_FAST_WAKEUP_ENABLE      0x20

// MISC2 definitions
#define MISC2_COMP_EDGE_INT_BOTH     0x00
#define MISC2_COMP_EDGE_INT_RISE     0x20
#define MISC2_COMP_EDGE_INT_FALL     0x40
//#define MISC2_UNK_TM3                0x00
//#define MISC2_UNK_PWMG2              0x10
//#define MISC2_UNK_COMP               0x00
//#define MISC2_UNK_PWMG1              0x08

// MISCLVR definitions
#define MISCLVR_4V                   0x00
#define MISCLVR_3V5                  0x20
#define MISCLVR_3V                   0x40
#define MISCLVR_2V75                 0x60
#define MISCLVR_2V5                  0x80
#define MISCLVR_1V8                  0xA0
#define MISCLVR_2V2                  0xC0
#define MISCLVR_2V                   0xE0

// TM2C definitions
#define TM2C_CLK_DISABLE             0x00
#define TM2C_CLK_SYSCLK              0x10
#define TM2C_CLK_IHRC                0x20
#define TM2C_CLK_EOSC                0x30
#define TM2C_CLK_ILRC                0x40
#define TM2C_CLK_COMPOUT             0x50
#define TM2C_CLK_PA0_RISE            0x80
#define TM2C_CLK_PA0_FALL            0x90
#define TM2C_CLK_PB0_RISE            0xA0
#define TM2C_CLK_PB0_FALL            0xB0
#define TM2C_CLK_PA4_RISE            0xC0
#define TM2C_CLK_PA4_FALL            0xD0
#define TM2C_OUT_DISABLE             0x00
#define TM2C_OUT_PB2                 0x04
#define TM2C_OUT_PA3                 0x08
#define TM2C_OUT_PB4                 0x0C
#define TM2C_MODE_PERIOD             0x00
#define TM2C_MODE_PWM                0x02
#define TM2C_INVERT_OUT              0x01

// TM2S definitions
#define TM2S_PWM_RES_8BIT            0x00
#define TM2S_PWM_RES_6BIT            0x80
#define TM2S_PRESCALE_NONE           0x00
#define TM2S_PRESCALE_DIV4           0x20
#define TM2S_PRESCALE_DIV16          0x40
#define TM2S_PRESCALE_DIV64          0x60
#define TM2S_SCALE_NONE              0x00
#define TM2S_SCALE_DIV2              0x01
#define TM2S_SCALE_DIV3              0x02
#define TM2S_SCALE_DIV4              0x03
#define TM2S_SCALE_DIV5              0x04
#define TM2S_SCALE_DIV6              0x05
#define TM2S_SCALE_DIV7              0x06
#define TM2S_SCALE_DIV8              0x07
#define TM2S_SCALE_DIV9              0x08
#define TM2S_SCALE_DIV10             0x09
#define TM2S_SCALE_DIV11             0x0A
#define TM2S_SCALE_DIV12             0x0B
#define TM2S_SCALE_DIV13             0x0C
#define TM2S_SCALE_DIV14             0x0D
#define TM2S_SCALE_DIV15             0x0E
#define TM2S_SCALE_DIV16             0x0F
#define TM2S_SCALE_DIV17             0x10
#define TM2S_SCALE_DIV18             0x11
#define TM2S_SCALE_DIV19             0x12
#define TM2S_SCALE_DIV20             0x13
#define TM2S_SCALE_DIV21             0x14
#define TM2S_SCALE_DIV22             0x15
#define TM2S_SCALE_DIV23             0x16
#define TM2S_SCALE_DIV24             0x17
#define TM2S_SCALE_DIV25             0x18
#define TM2S_SCALE_DIV26             0x19
#define TM2S_SCALE_DIV27             0x1A
#define TM2S_SCALE_DIV28             0x1B
#define TM2S_SCALE_DIV29             0x1C
#define TM2S_SCALE_DIV30             0x1D
#define TM2S_SCALE_DIV31             0x1E
#define TM2S_SCALE_DIV32             0x1F

// TM3C definitions
#define TM3C_CLK_DISABLE             0x00
#define TM3C_CLK_SYSCLK              0x10
#define TM3C_CLK_IHRC                0x20
#define TM3C_CLK_EOSC                0x30
#define TM3C_CLK_ILRC                0x40
#define TM3C_CLK_COMPOUT             0x50
#define TM3C_CLK_PA0_RISE            0x80
#define TM3C_CLK_PA0_FALL            0x90
#define TM3C_CLK_PB0_RISE            0xA0
#define TM3C_CLK_PB0_FALL            0xB0
#define TM3C_CLK_PA4_RISE            0xC0
#define TM3C_CLK_PA4_FALL            0xD0
#define TM3C_OUT_DISABLE             0x00
#define TM3C_OUT_PB5                 0x04
#define TM3C_OUT_PB6                 0x08
#define TM3C_OUT_PB7                 0x0C
#define TM3C_MODE_PERIOD             0x00
#define TM3C_MODE_PWM                0x02
#define TM3C_INVERT_OUT              0x01

// TM3S definitions
#define TM3S_PWM_RES_8BIT            0x00
#define TM3S_PWM_RES_6BIT            0x80
#define TM3S_PRESCALE_NONE           0x00
#define TM3S_PRESCALE_DIV4           0x20
#define TM3S_PRESCALE_DIV16          0x40
#define TM3S_PRESCALE_DIV64          0x60
#define TM3S_SCALE_NONE              0x00
#define TM3S_SCALE_DIV2              0x01
#define TM3S_SCALE_DIV3              0x02
#define TM3S_SCALE_DIV4              0x03
#define TM3S_SCALE_DIV5              0x04
#define TM3S_SCALE_DIV6              0x05
#define TM3S_SCALE_DIV7              0x06
#define TM3S_SCALE_DIV8              0x07
#define TM3S_SCALE_DIV9              0x08
#define TM3S_SCALE_DIV10             0x09
#define TM3S_SCALE_DIV11             0x0A
#define TM3S_SCALE_DIV12             0x0B
#define TM3S_SCALE_DIV13             0x0C
#define TM3S_SCALE_DIV14             0x0D
#define TM3S_SCALE_DIV15             0x0E
#define TM3S_SCALE_DIV16             0x0F
#define TM3S_SCALE_DIV17             0x10
#define TM3S_SCALE_DIV18             0x11
#define TM3S_SCALE_DIV19             0x12
#define TM3S_SCALE_DIV20             0x13
#define TM3S_SCALE_DIV21             0x14
#define TM3S_SCALE_DIV22             0x15
#define TM3S_SCALE_DIV23             0x16
#define TM3S_SCALE_DIV24             0x17
#define TM3S_SCALE_DIV25             0x18
#define TM3S_SCALE_DIV26             0x19
#define TM3S_SCALE_DIV27             0x1A
#define TM3S_SCALE_DIV28             0x1B
#define TM3S_SCALE_DIV29             0x1C
#define TM3S_SCALE_DIV30             0x1D
#define TM3S_SCALE_DIV31             0x1E
#define TM3S_SCALE_DIV32             0x1F

// GPCC definitions
#define GPCC_COMP_PLUS_VINT_R        0x00
#define GPCC_COMP_PLUS_PA4           0x01
#define GPCC_COMP_MINUS_PA3          0x00
#define GPCC_COMP_MINUS_PA4          0x02
#define GPCC_COMP_MINUS_BANDGAP_1V2  0x04
#define GPCC_COMP_MINUS_VINT_R       0x06
#define GPCC_COMP_MINUS_PB6          0x08
#define GPCC_COMP_MINUS_PB7          0x0A
#define GPCC_COMP_OUT_INVERT         0x10
#define GPCC_COMP_OUT_TO_TM2CLK      0x20
#define GPCC_COMP_RESULT_NEGATIV     0x00
#define GPCC_COMP_RESULT_POSITIV     0x40
#define GPCC_COMP_ENABLE             0x80

// GPCS definitions
#define GPCS_COMP_CASE1              0x00
#define GPCS_COMP_CASE2              0x10
#define GPCS_COMP_CASE3              0x20
#define GPCS_COMP_CASE4              0x30
#define GPCS_COMP_WAKEUP_ENABLE      0x40
#define GPCS_COMP_OUTPUT_PA0         0x80

// PWMG0C definitions
#define PWMG0C_ENABLE                0x80
#define PWMG0C_OUT_STATUS            0x40
#define PWMG0C_OUT_INVERT            0x20
#define PWMG0C_RESET_COUNTER         0x10
#define PWMG0C_OUT_NONE              0x00
#define PWMG0C_OUT_PB5               0x02
#define PWMG0C_OUT_PA0               0x06
#define PWMG0C_OUT_PB4               0x08
#define PWMG0C_CLK_SYSCLK            0x00
#define PWMG0C_CLK_IHRC              0x01

// PWMG0S definitions
#define PWMG0_INT_AT_0               0x00
#define PWMG0_INT_AT_DUTY            0x80
#define PWMG0_PRESCALE_NONE          0x00
#define PWMG0_PRESCALE_DIV4          0x20
#define PWMG0_PRESCALE_DIV16         0x40
#define PWMG0_PRESCALE_DIV64         0x60
#define PWMG0_SCALE_NONE             0x00
#define PWMG0_SCALE_DIV2             0x01
#define PWMG0_SCALE_DIV3             0x02
#define PWMG0_SCALE_DIV4             0x03
#define PWMG0_SCALE_DIV5             0x04
#define PWMG0_SCALE_DIV6             0x05
#define PWMG0_SCALE_DIV7             0x06
#define PWMG0_SCALE_DIV8             0x07
#define PWMG0_SCALE_DIV9             0x08
#define PWMG0_SCALE_DIV10            0x09
#define PWMG0_SCALE_DIV11            0x0A
#define PWMG0_SCALE_DIV12            0x0B
#define PWMG0_SCALE_DIV13            0x0C
#define PWMG0_SCALE_DIV14            0x0D
#define PWMG0_SCALE_DIV15            0x0E
#define PWMG0_SCALE_DIV16            0x0F
#define PWMG0_SCALE_DIV17            0x10
#define PWMG0_SCALE_DIV18            0x11
#define PWMG0_SCALE_DIV19            0x12
#define PWMG0_SCALE_DIV20            0x13
#define PWMG0_SCALE_DIV21            0x14
#define PWMG0_SCALE_DIV22            0x15
#define PWMG0_SCALE_DIV23            0x16
#define PWMG0_SCALE_DIV24            0x17
#define PWMG0_SCALE_DIV25            0x18
#define PWMG0_SCALE_DIV26            0x19
#define PWMG0_SCALE_DIV27            0x1A
#define PWMG0_SCALE_DIV28            0x1B
#define PWMG0_SCALE_DIV29            0x1C
#define PWMG0_SCALE_DIV30            0x1D
#define PWMG0_SCALE_DIV31            0x1E
#define PWMG0_SCALE_DIV32            0x1F

// PWMG1C definitions
#define PWMG1C_ENABLE                0x80
#define PWMG1C_OUT_STATUS            0x40
#define PWMG1C_OUT_INVERT            0x20
#define PWMG1C_RESET_COUNTER         0x10
#define PWMG1C_OUT_NONE              0x00
#define PWMG1C_OUT_PB6               0x02
#define PWMG1C_OUT_PA4               0x06
#define PWMG1C_OUT_PB7               0x08
#define PWMG1C_CLK_SYSCLK            0x00
#define PWMG1C_CLK_IHRC              0x01

// PWMG1S definitions
#define PWMG1_INT_AT_0               0x00
#define PWMG1_INT_AT_DUTY            0x80
#define PWMG1_PRESCALE_NONE          0x00
#define PWMG1_PRESCALE_DIV4          0x20
#define PWMG1_PRESCALE_DIV16         0x40
#define PWMG1_PRESCALE_DIV64         0x60
#define PWMG1_SCALE_NONE             0x00
#define PWMG1_SCALE_DIV2             0x01
#define PWMG1_SCALE_DIV3             0x02
#define PWMG1_SCALE_DIV4             0x03
#define PWMG1_SCALE_DIV5             0x04
#define PWMG1_SCALE_DIV6             0x05
#define PWMG1_SCALE_DIV7             0x06
#define PWMG1_SCALE_DIV8             0x07
#define PWMG1_SCALE_DIV9             0x08
#define PWMG1_SCALE_DIV10            0x09
#define PWMG1_SCALE_DIV11            0x0A
#define PWMG1_SCALE_DIV12            0x0B
#define PWMG1_SCALE_DIV13            0x0C
#define PWMG1_SCALE_DIV14            0x0D
#define PWMG1_SCALE_DIV15            0x0E
#define PWMG1_SCALE_DIV16            0x0F
#define PWMG1_SCALE_DIV17            0x10
#define PWMG1_SCALE_DIV18            0x11
#define PWMG1_SCALE_DIV19            0x12
#define PWMG1_SCALE_DIV20            0x13
#define PWMG1_SCALE_DIV21            0x14
#define PWMG1_SCALE_DIV22            0x15
#define PWMG1_SCALE_DIV23            0x16
#define PWMG1_SCALE_DIV24            0x17
#define PWMG1_SCALE_DIV25            0x18
#define PWMG1_SCALE_DIV26            0x19
#define PWMG1_SCALE_DIV27            0x1A
#define PWMG1_SCALE_DIV28            0x1B
#define PWMG1_SCALE_DIV29            0x1C
#define PWMG1_SCALE_DIV30            0x1D
#define PWMG1_SCALE_DIV31            0x1E
#define PWMG1_SCALE_DIV32            0x1F

// PWMG2C definitions
#define PWMG2C_ENABLE                0x80
#define PWMG2C_OUT_STATUS            0x40
#define PWMG2C_OUT_INVERT            0x20
#define PWMG2C_RESET_COUNTER         0x10
#define PWMG2C_OUT_NONE              0x00
#define PWMG2C_OUT_PB3               0x02
#define PWMG2C_OUT_PA3               0x06
#define PWMG2C_OUT_PB2               0x08
#define PWMG2C_OUT_PA5               0x0A
#define PWMG2C_CLK_SYSCLK            0x00
#define PWMG2C_CLK_IHRC              0x01

// PWMG2S definitions
#define PWMG2_INT_AT_0               0x00
#define PWMG2_INT_AT_DUTY            0x80
#define PWMG2_PRESCALE_NONE          0x00
#define PWMG2_PRESCALE_DIV4          0x20
#define PWMG2_PRESCALE_DIV16         0x40
#define PWMG2_PRESCALE_DIV64         0x60
#define PWMG2_SCALE_NONE             0x00
#define PWMG2_SCALE_DIV2             0x01
#define PWMG2_SCALE_DIV3             0x02
#define PWMG2_SCALE_DIV4             0x03
#define PWMG2_SCALE_DIV5             0x04
#define PWMG2_SCALE_DIV6             0x05
#define PWMG2_SCALE_DIV7             0x06
#define PWMG2_SCALE_DIV8             0x07
#define PWMG2_SCALE_DIV9             0x08
#define PWMG2_SCALE_DIV10            0x09
#define PWMG2_SCALE_DIV11            0x0A
#define PWMG2_SCALE_DIV12            0x0B
#define PWMG2_SCALE_DIV13            0x0C
#define PWMG2_SCALE_DIV14            0x0D
#define PWMG2_SCALE_DIV15            0x0E
#define PWMG2_SCALE_DIV16            0x0F
#define PWMG2_SCALE_DIV17            0x10
#define PWMG2_SCALE_DIV18            0x11
#define PWMG2_SCALE_DIV19            0x12
#define PWMG2_SCALE_DIV20            0x13
#define PWMG2_SCALE_DIV21            0x14
#define PWMG2_SCALE_DIV22            0x15
#define PWMG2_SCALE_DIV23            0x16
#define PWMG2_SCALE_DIV24            0x17
#define PWMG2_SCALE_DIV25            0x18
#define PWMG2_SCALE_DIV26            0x19
#define PWMG2_SCALE_DIV27            0x1A
#define PWMG2_SCALE_DIV28            0x1B
#define PWMG2_SCALE_DIV29            0x1C
#define PWMG2_SCALE_DIV30            0x1D
#define PWMG2_SCALE_DIV31            0x1E
#define PWMG2_SCALE_DIV32            0x1F

#endif //__PDK_IO_PFS154_H__