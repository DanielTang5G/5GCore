/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.7.0/38413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_Paging_Time_Window_H_
#define	_NGAP_Paging_Time_Window_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_Paging_Time_Window {
	NGAP_Paging_Time_Window_s1	= 0,
	NGAP_Paging_Time_Window_s2	= 1,
	NGAP_Paging_Time_Window_s3	= 2,
	NGAP_Paging_Time_Window_s4	= 3,
	NGAP_Paging_Time_Window_s5	= 4,
	NGAP_Paging_Time_Window_s6	= 5,
	NGAP_Paging_Time_Window_s7	= 6,
	NGAP_Paging_Time_Window_s8	= 7,
	NGAP_Paging_Time_Window_s9	= 8,
	NGAP_Paging_Time_Window_s10	= 9,
	NGAP_Paging_Time_Window_s11	= 10,
	NGAP_Paging_Time_Window_s12	= 11,
	NGAP_Paging_Time_Window_s13	= 12,
	NGAP_Paging_Time_Window_s14	= 13,
	NGAP_Paging_Time_Window_s15	= 14,
	NGAP_Paging_Time_Window_s16	= 15
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_Paging_Time_Window;

/* NGAP_Paging-Time-Window */
typedef long	 NGAP_Paging_Time_Window_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_Paging_Time_Window_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_Paging_Time_Window;
extern const asn_INTEGER_specifics_t asn_SPC_Paging_Time_Window_specs_1;
asn_struct_free_f Paging_Time_Window_free;
asn_struct_print_f Paging_Time_Window_print;
asn_constr_check_f Paging_Time_Window_constraint;
jer_type_encoder_f Paging_Time_Window_encode_jer;
per_type_decoder_f Paging_Time_Window_decode_aper;
per_type_encoder_f Paging_Time_Window_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_Paging_Time_Window_H_ */
#include <asn_internal.h>