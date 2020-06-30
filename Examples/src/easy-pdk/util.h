#ifndef __EASY_PDK_UTIL_H__
#define __EASY_PDK_UTIL_H__

//macros so we can use defines in assembler strings
#define _STRINGIFY(x) #x
#define _ASMV(x) "_"_STRINGIFY(x)
#define _ASMD(x) _STRINGIFY(x)
#define _ASME(x) _ ## x
#define _ASMS(x) _ASME(x)

//definitions for built in opcodess
#define __nop()      __asm__("nop\n")
#define __engint()   __asm__("engint\n")
#define __disgint()  __asm__("disgint\n")
#define __stopsys()  __asm__("stopsys\n")
#define __stopexe()  __asm__("stopexe\nnop\n")
#define __wdreset()  __asm__("wdreset\n")
#define __set0(x,y)  __asm__("set0 "_ASMV(x)", #"_ASMD(y)"\n")
#define __set1(x,y)  __asm__("set1 "_ASMV(x)", #"_ASMD(y)"\n")

#endif //__EASY_PDK_UTIL_H__