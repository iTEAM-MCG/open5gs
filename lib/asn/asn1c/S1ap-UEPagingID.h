/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_S1ap_UEPagingID_H_
#define	_S1ap_UEPagingID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-S-TMSI.h"
#include "S1ap-IMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_UEPagingID_PR {
	S1ap_UEPagingID_PR_NOTHING,	/* No components present */
	S1ap_UEPagingID_PR_s_TMSI,
	S1ap_UEPagingID_PR_iMSI,
	/* Extensions may appear below */
	
} S1ap_UEPagingID_PR;

/* S1ap-UEPagingID */
typedef struct S1ap_UEPagingID {
	S1ap_UEPagingID_PR present;
	union S1ap_UEPagingID_u {
		S1ap_S_TMSI_t	 s_TMSI;
		S1ap_IMSI_t	 iMSI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_UEPagingID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_UEPagingID;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_UEPagingID_H_ */
#include <asn_internal.h>
