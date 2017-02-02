/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_S1ap_UERadioCapability_H_
#define	_S1ap_UERadioCapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap-UERadioCapability */
typedef OCTET_STRING_t	 S1ap_UERadioCapability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_UERadioCapability;
asn_struct_free_f S1ap_UERadioCapability_free;
asn_struct_print_f S1ap_UERadioCapability_print;
asn_constr_check_f S1ap_UERadioCapability_constraint;
ber_type_decoder_f S1ap_UERadioCapability_decode_ber;
der_type_encoder_f S1ap_UERadioCapability_encode_der;
xer_type_decoder_f S1ap_UERadioCapability_decode_xer;
xer_type_encoder_f S1ap_UERadioCapability_encode_xer;
per_type_decoder_f S1ap_UERadioCapability_decode_uper;
per_type_encoder_f S1ap_UERadioCapability_encode_uper;
per_type_decoder_f S1ap_UERadioCapability_decode_aper;
per_type_encoder_f S1ap_UERadioCapability_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_UERadioCapability_H_ */
#include <asn_internal.h>
