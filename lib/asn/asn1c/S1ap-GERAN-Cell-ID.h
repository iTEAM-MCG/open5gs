/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_S1ap_GERAN_Cell_ID_H_
#define	_S1ap_GERAN_Cell_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-LAI.h"
#include "S1ap-RAC.h"
#include "S1ap-CI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* S1ap-GERAN-Cell-ID */
typedef struct S1ap_GERAN_Cell_ID {
	S1ap_LAI_t	 lAI;
	S1ap_RAC_t	 rAC;
	S1ap_CI_t	 cI;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_GERAN_Cell_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_GERAN_Cell_ID;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _S1ap_GERAN_Cell_ID_H_ */
#include <asn_internal.h>
