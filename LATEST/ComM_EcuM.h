#pragma once
/*****************************************************/
/* File   : ComM_EcuM.h                              */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_ComM.h"

#include "EcuM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_ComM_EcuM : public class_EcuM_Client{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, COMM_CODE) InitFunction   (void);
      FUNC(void, COMM_CODE) DeInitFunction (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_EcuM_Client *EcuM_Client_ptr_ComM;

/*****************************************************/
/* EOF                                               */
/*****************************************************/
