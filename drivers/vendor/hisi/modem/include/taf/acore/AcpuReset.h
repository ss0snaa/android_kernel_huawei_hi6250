
#ifndef _ACPU_RESET_H_
#define _ACPU_RESET_H_

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "mdrv.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  1 ȫ�ֱ�������
*****************************************************************************/

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define  RNIC_RESET_TIMEOUT_LEN                     (5000)                      /* RNIC��λ��ʱ�䳤�� */

#define  AT_RESET_TIMEOUT_LEN                       (6000)                      /* AT��λ��ʱ�䳤�� */

#define  ADS_RESET_TIMEOUT_LEN                      (5000)                      /* ADS��λ��ʱ�䳤�� */

#define  NAS_ADS_UL_FUNC_PROC_NAME                  "NAS_ADSUL"                 /* ADSULע������������� */
#define  NAS_ADS_DL_FUNC_PROC_NAME                  "NAS_ADSDL"                 /* ADSDLע������������� */
#define  NAS_RNIC_FUNC_PROC_NAME                    "NAS_RNIC"                  /* RNICע������������� */
#define  NAS_AT_FUNC_PROC_NAME                      "NAS_AT"                    /* ATע������������� */
/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


enum ACPU_RESET_PRIORITY_ENUM
{
    ACPU_RESET_PRIORITY_RNIC            = 4,                                    /* RNIC */
    ACPU_RESET_PRIORITY_ADS_UL          = 20,                                   /* ADS UL */
    ACPU_RESET_PRIORITY_ADS_DL,                                                 /* ADS DL */
    ACPU_RESET_PRIORITY_AT,                                                     /* AT */
    ACPU_RESET_PRIORITY_BUTT
};
typedef VOS_INT32 ACPU_RESET_PRIORITY_ENUM_INT32;


enum AT_RESET_REPORT_CMD_ENUM
{
    AT_RESET_REPORT_CAUSE_CCPU_START = 0,
    AT_RESET_REPORT_CAUSE_CCPU_END,
    AT_RESET_REPORT_CAUSE_HIFI_START,
    AT_RESET_REPORT_CAUSE_HIFI_END,
    AT_RESET_REPORT_CMD_BUTT
};
typedef VOS_INT32 AT_RESET_REPORT_CAUSE_ENUM_UINT32;

/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/



enum AT_RESET_MSG_ID_ENUM
{
    /* ��AT��AT������Ϣ�У�ʹ��(AT_MSG_STRU)ucType���б���ʲô��Ϣ�Ĵ���
       �Ѿ�ʹ�õ���:0x00��ʾAT�����·���0x01Ϊ����ϱ���0x02Ϊ���������
       ���������ӵ�AT��AT����ϢIDֵ��0x10��ʼ */
    ID_CCPU_AT_RESET_START_IND          = 0x10,                                 /* CCPU��λǰ��AT����Ϣָʾ */
    ID_CCPU_AT_RESET_END_IND            = 0x11,                                 /* CCPU��λ���AT����Ϣָʾ */
    ID_HIFI_AT_RESET_START_IND          = 0x12,                                 /* HIFI��λǰ��AT����Ϣָʾ */
    ID_HIFI_AT_RESET_END_IND            = 0x13,                                 /* HIFI��λ���AT����Ϣָʾ */

    ID_AT_RESET_MSG_ID_ENUM_BUTT
};
typedef VOS_UINT32  AT_RESET_MSG_ID_ENUM_UINT8;

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

#endif /* end of AcpuReset.h */

