/*******************************************************************************
* File Name: P4_0_Debug.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_P4_0_Debug_H) /* Pins P4_0_Debug_H */
#define CY_PINS_P4_0_Debug_H

#include "cytypes.h"
#include "cyfitter.h"
#include "P4_0_Debug_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    P4_0_Debug_Write(uint8 value) ;
void    P4_0_Debug_SetDriveMode(uint8 mode) ;
uint8   P4_0_Debug_ReadDataReg(void) ;
uint8   P4_0_Debug_Read(void) ;
uint8   P4_0_Debug_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define P4_0_Debug_DRIVE_MODE_BITS        (3)
#define P4_0_Debug_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - P4_0_Debug_DRIVE_MODE_BITS))
#define P4_0_Debug_DRIVE_MODE_SHIFT       (0x00u)
#define P4_0_Debug_DRIVE_MODE_MASK        (0x07u << P4_0_Debug_DRIVE_MODE_SHIFT)

#define P4_0_Debug_DM_ALG_HIZ         (0x00u << P4_0_Debug_DRIVE_MODE_SHIFT)
#define P4_0_Debug_DM_DIG_HIZ         (0x01u << P4_0_Debug_DRIVE_MODE_SHIFT)
#define P4_0_Debug_DM_RES_UP          (0x02u << P4_0_Debug_DRIVE_MODE_SHIFT)
#define P4_0_Debug_DM_RES_DWN         (0x03u << P4_0_Debug_DRIVE_MODE_SHIFT)
#define P4_0_Debug_DM_OD_LO           (0x04u << P4_0_Debug_DRIVE_MODE_SHIFT)
#define P4_0_Debug_DM_OD_HI           (0x05u << P4_0_Debug_DRIVE_MODE_SHIFT)
#define P4_0_Debug_DM_STRONG          (0x06u << P4_0_Debug_DRIVE_MODE_SHIFT)
#define P4_0_Debug_DM_RES_UPDWN       (0x07u << P4_0_Debug_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define P4_0_Debug_MASK               P4_0_Debug__MASK
#define P4_0_Debug_SHIFT              P4_0_Debug__SHIFT
#define P4_0_Debug_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define P4_0_Debug_PS                     (* (reg32 *) P4_0_Debug__PS)
/* Port Configuration */
#define P4_0_Debug_PC                     (* (reg32 *) P4_0_Debug__PC)
/* Data Register */
#define P4_0_Debug_DR                     (* (reg32 *) P4_0_Debug__DR)
/* Input Buffer Disable Override */
#define P4_0_Debug_INP_DIS                (* (reg32 *) P4_0_Debug__PC2)


#if defined(P4_0_Debug__INTSTAT)  /* Interrupt Registers */

    #define P4_0_Debug_INTSTAT                (* (reg32 *) P4_0_Debug__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins P4_0_Debug_H */


/* [] END OF FILE */
