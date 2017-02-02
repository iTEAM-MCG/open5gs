/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_S1ap_MMEname_H_
#define	_S1ap_MMEname_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap-MMEname */
typedef PrintableString_t	 S1ap_MMEname_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_MMEname;
asn_struct_free_f S1ap_MMEname_free;
asn_struct_print_f S1ap_MMEname_print;
asn_constr_check_f S1ap_MMEname_constraint;
ber_type_decoder_f S1ap_MMEname_decode_ber;
der_type_encoder_f S1ap_MMEname_encode_der;
xer_type_decoder_f S1ap_MMEname_decode_xer;
xer_type_encoder_f S1ap_MMEname_encode_xer;
per_type_decoder_f S1ap_MMEname_decode_uper;
per_type_encoder_f S1ap_MMEname_encode_uper;
per_type_decoder_f S1ap_MMEname_decode_aper;
per_type_encoder_f S1ap_MMEname_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_MMEname_H_ */
#include <asn_internal.h>
