

#ifndef __CNAS_XCC_SND_XSD_H__
#define __CNAS_XCC_SND_XSD_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "PsCommonDef.h"

#include "xsd_xcc_pif.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
#if (FEATURE_ON == FEATURE_UE_MODE_CDMA)

VOS_VOID CNAS_XCC_SndXsdStartCnf(
    XCC_XSD_START_RESULT_ENUM_UINT32    enRslt
);

VOS_VOID CNAS_XCC_SndXsdPowerOffCnf(
    XCC_XSD_POWER_OFF_RESULT_ENUM_UINT32    enRslt
);

VOS_VOID CNAS_XCC_SndXsdDeregisterInd(
    XSD_XCC_DEREGISTER_REASON_ENUM_UINT8                    enCause
);

#endif

#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of CnasXccSndXsd.h */
