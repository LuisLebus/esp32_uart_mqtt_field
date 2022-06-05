/**
 * @file device.h
 * @author
 * @date
 * @brief
 */

#ifndef _DEVICE_H_
#define _DEVICE_H_

//=============================================================================
// [Inclusions] ===============================================================
#include <stdint.h>

//=============================================================================

//=============================================================================
// [External Defines] =========================================================

//=============================================================================

//=============================================================================
// [External Typedef] =========================================================

typedef struct
{
    uint32_t resets;
} device_state_t;

typedef struct
{
    char id[18];
    char sn[8];
    char version[24];
    char family[24];
    char model[24];
} device_config_t;

//=============================================================================

//=============================================================================
// [External Data Definitions] ================================================

// Const ---------------------------------------------
//----------------------------------------------------

// Vars ----------------------------------------------
//----------------------------------------------------

// Task Handlers -------------------------------------
//----------------------------------------------------

// Queue Handlers ------------------------------------
//----------------------------------------------------

// Event Group Handlers ------------------------------
//----------------------------------------------------

// Semaphore Handlers --------------------------------
//----------------------------------------------------

//=============================================================================

//=============================================================================
// [External Function Declarations] ===========================================

/**
 * @details
 * @param[in]
 * @param[in]
 * @return
 */
void device_init(void);


/**
 * @details
 * @param[in]
 * @param[in]
 * @return
 */
void device_reset(void);


/**
 * @details
 * @param[in]
 * @param[in]
 * @return
 */
void device_set_sn(char * sn);


/**
 * @details
 * @param[in]
 * @param[in]
 * @return
 */
void device_set_resets(uint32_t resets);


/**
 * @details
 * @param[in]
 * @param[in]
 * @return
 */
device_config_t device_get_config(void);


/**
 * @details
 * @param[in]
 * @param[in]
 * @return
 */
device_state_t device_get_state(void);

//=============================================================================

#endif /* _DEVICE_H_ */
