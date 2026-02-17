#include "Can.h"

#pragma ghs section text=".RamCodeSection"

/* stab function required for unresolved symbol */

V_DEF_FUNC(extern, void, APPL_CODE) ApplCanInterruptDisable( uint8 Controller )
{

}

V_DEF_FUNC(extern, void, APPL_CODE) ApplCanInterruptRestore( uint8 Controller )
{

}

#pragma ghs section text=default
