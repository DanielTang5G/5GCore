/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.7.0/36413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "S1AP_M4period.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_S1AP_M4period_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_S1AP_M4period_value2enum_1[] = {
	{ 0,	6,	"ms1024" },
	{ 1,	6,	"ms2048" },
	{ 2,	6,	"ms5120" },
	{ 3,	7,	"ms10240" },
	{ 4,	4,	"min1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_S1AP_M4period_enum2value_1[] = {
	4,	/* min1(4) */
	0,	/* ms1024(0) */
	3,	/* ms10240(3) */
	1,	/* ms2048(1) */
	2	/* ms5120(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_S1AP_M4period_specs_1 = {
	asn_MAP_S1AP_M4period_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1AP_M4period_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_S1AP_M4period_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_M4period = {
	"M4period",
	"M4period",
	&asn_OP_NativeEnumerated,
	asn_DEF_S1AP_M4period_tags_1,
	sizeof(asn_DEF_S1AP_M4period_tags_1)
		/sizeof(asn_DEF_S1AP_M4period_tags_1[0]), /* 1 */
	asn_DEF_S1AP_M4period_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_M4period_tags_1)
		/sizeof(asn_DEF_S1AP_M4period_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_S1AP_M4period_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1AP_M4period_specs_1	/* Additional specs */
};
