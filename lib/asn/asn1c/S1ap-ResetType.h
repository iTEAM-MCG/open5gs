/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_S1ap_ResetType_H_
#define	_S1ap_ResetType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-ResetAll.h"
#include "S1ap-UE-associatedLogicalS1-ConnectionListRes.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_ResetType_PR {
	S1ap_ResetType_PR_NOTHING,	/* No components present */
	S1ap_ResetType_PR_s1_Interface,
	S1ap_ResetType_PR_partOfS1_Interface,
	/* Extensions may appear below */
	
} S1ap_ResetType_PR;

/* S1ap-ResetType */
typedef struct S1ap_ResetType {
	S1ap_ResetType_PR present;
	union S1ap_ResetType_u {
		S1ap_ResetAll_t	 s1_Interface;
		S1ap_UE_associatedLogicalS1_ConnectionListRes_t	 partOfS1_Interface;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_ResetType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_ResetType;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_ResetType_H_ */
#include <asn_internal.h>
