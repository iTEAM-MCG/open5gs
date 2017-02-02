/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_S1ap_ServedGUMMEIsItem_H_
#define	_S1ap_ServedGUMMEIsItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-ServedPLMNs.h"
#include "S1ap-ServedGroupIDs.h"
#include "S1ap-ServedMMECs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* S1ap-ServedGUMMEIsItem */
typedef struct S1ap_ServedGUMMEIsItem {
	S1ap_ServedPLMNs_t	 servedPLMNs;
	S1ap_ServedGroupIDs_t	 servedGroupIDs;
	S1ap_ServedMMECs_t	 servedMMECs;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_ServedGUMMEIsItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_ServedGUMMEIsItem;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _S1ap_ServedGUMMEIsItem_H_ */
#include <asn_internal.h>
