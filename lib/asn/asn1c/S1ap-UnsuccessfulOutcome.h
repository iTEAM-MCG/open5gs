/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Descriptions"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_S1ap_UnsuccessfulOutcome_H_
#define	_S1ap_UnsuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-ProcedureCode.h"
#include "S1ap-Criticality.h"
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap-UnsuccessfulOutcome */
typedef struct S1ap_UnsuccessfulOutcome {
	S1ap_ProcedureCode_t	 procedureCode;
	S1ap_Criticality_t	 criticality;
	ANY_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_UnsuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_UnsuccessfulOutcome;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_UnsuccessfulOutcome_H_ */
#include <asn_internal.h>
