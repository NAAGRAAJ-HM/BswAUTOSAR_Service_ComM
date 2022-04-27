#pragma once
/******************************************************************************/
/* File   : ComM_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ComM_Functionality{
   public:
      FUNC(void, COMM_CODE) GetState                  (void);
      FUNC(void, COMM_CODE) GetStatus                 (void);
      FUNC(void, COMM_CODE) GetInhibitionStatus       (void);
      FUNC(void, COMM_CODE) RequestComMode            (void);
      FUNC(void, COMM_CODE) GetMaxComMode             (void);
      FUNC(void, COMM_CODE) GetRequestedComMode       (void);
      FUNC(void, COMM_CODE) GetCurrentComMode         (void);
      FUNC(void, COMM_CODE) PreventWakeUp             (void);
      FUNC(void, COMM_CODE) LimitChannelToNoComMode   (void);
      FUNC(void, COMM_CODE) LimitECUToNoComMode       (void);
      FUNC(void, COMM_CODE) ReadInhibitCounter        (void);
      FUNC(void, COMM_CODE) ResetInhibitCounter       (void);
      FUNC(void, COMM_CODE) SetECUGroupClassification (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
