/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-Containers"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PrivateIE_Container_H_
#define	_PrivateIE_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PrivateIE_Field;

/* PrivateIE-Container */
typedef struct PrivateIE_Container_5768P0 {
	A_SEQUENCE_OF(struct PrivateIE_Field) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrivateIE_Container_5768P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrivateIE_Container_5768P0;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrivateIE-Field.h"

#endif	/* _PrivateIE_Container_H_ */
#include <asn_internal.h>
