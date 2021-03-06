#ifndef _SMI_NAME_H_
#define _SMI_NAME_H_

enum SMI_DEST {SMI_DEST_ALL=0, SMI_DEST_EMI=1, SMI_DEST_INTERNAL=3, SMI_DEST_NONE=9};
enum SMI_RW {SMI_RW_ALL=0, SMI_READ_ONLY=1, SMI_WRITE_ONLY=2, SMI_RW_RESPECTIVE=3, SMI_RW_NONE=9};
enum SMI_BUS {SMI_BUS_GMC=0, SMI_BUS_AXI=1, SMI_BUS_NONE=9};
enum SMI_REQUEST {SMI_REQ_ALL=0, SMI_REQ_ULTRA=1, SMI_REQ_PREULTRA=2, SMI_NORMAL_ULTRA=3, SMI_REQ_NONE=9};

/*
typedef struct {
	unsigned long u4Master;   //SMI master 0~3
	unsigned long u4PortNo;
	unsigned long bBusType : 1;//0 for GMC, 1 for AXI
	unsigned long bDestType : 2;//0 for EMI+internal mem, 1 for EMI, 3 for internal mem
	unsigned long bRWType : 2;//0 for R+W, 1 for read, 2 for write
}SMIBMCfg;
*/

struct smi_desc {
	unsigned long port;
	char name[40];
	enum SMI_DEST desttype;
	enum SMI_RW rwtype;
	enum SMI_BUS bustype;
	//enum SMI_REQUEST requesttype;
};

/* mt6589 */
struct smi_desc larb0_desc[] = {
	{ 0,	"VENC_RCPU_0",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 1,	"VENC_BSDMA_VENC_MP4_BSDMA",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 2,	"VENC_REC_FRM_RPEL_0",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 3,	"VENC_REC_FRM_VENC_MP4_WDMA",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 4,	"VENC_SV_COMV_0",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 5,	"VENC_RD_COMV_VENC_MP4_MVQP",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 6,	"VENC_CUR_CHROMA_VENC_MP4_CDMA_ACP",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 7,	"VENC_REF_CHROMA_VENC_MP4_MVQP_ACP",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 8,	"VENC_CUR_LUMA_VENC_MP4_CDMA",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 9,	"VENC_REF_LUMA_VENC_MP4_MC",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC }
};
struct smi_desc larb1_desc[] = {
	{ 0,	"HW_VDEC_MC_EXT",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 1,	"HW_VDEC_PP_EXT",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 2,	"HW_VDEC_AVC_MV_EXT",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 3,	"HW_VDEC_PRED_RD_EXT",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 4,	"HW_VDEC_PRED_WR_EXT",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 5,	"HW_VDEC_VLD_EXT",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 6,	"HW_VDEC_VLD2_EXT",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC }
};
struct smi_desc larb2_desc[] = {
	{ 0,	"ROT_EXT",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 1,	"OVL_CH0",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 2,	"OVL_CH1",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 3,	"OVL_CH2",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 4,	"OVL_CH3",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 5,	"WDMA0",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 6,	"WDMA1",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 7,	"RDMA0",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 8,	"RDMA1",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 9,	"CMDQ",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 10,	"DBI",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 11,	"G2D",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC }
};
struct smi_desc larb3_desc[] = {
	{ 0,	"JPGDEC_WDMA",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 1,	"JPGENC_RDMA",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 2,	"VIPI",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 3,	"IMGI",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 4,	"DISPO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 5,	"DISPCO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 6,	"DISPVO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 7,	"VIDO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 8,	"VIDCO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 9,	"VIDVO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 10,	"VIP2I",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 11,	"GDMA_SMI_WR",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 12,	"JPGDEC_BSDMA",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 13,	"JPGENC_BSDMA",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 14,	"VIDO_ROT0",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC }
};
struct smi_desc larb4_desc[] = {
	{ 0,	"GDMA_SMI_RD",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 1,	"IMGCI",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 2,	"IMGO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 3,	"IMG2O",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 4,	"LSCI",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 5,	"FLKI",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 6,	"LCEI",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 7,	"LCSO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 8,	"ESFKO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 9,	"AAO",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 10,	"VIDCO_ROT0",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC },
	{ 11,	"FPC",	SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_GMC }
};
struct smi_desc common_desc[] = {
	{ 0,	"AXI_SMI_1",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 1,	"AXI_SMI_2",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 2,	"AXI_LARB0",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 3,	"AXI_LARB1",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 4,	"AXI_LARB2",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 5,	"AXI_LARB3",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 6,	"AXI_LARB4",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 7,	"AXI_AUDIO",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 8,	"AXI_GPU",	SMI_DEST_EMI, SMI_RW_RESPECTIVE, SMI_BUS_NONE }
};

#define SMI_LARB0_DESC_COUNT (sizeof(larb0_desc) / sizeof(struct smi_desc))
#define SMI_LARB1_DESC_COUNT (sizeof(larb1_desc) / sizeof(struct smi_desc))
#define SMI_LARB2_DESC_COUNT (sizeof(larb2_desc) / sizeof(struct smi_desc))
#define SMI_LARB3_DESC_COUNT (sizeof(larb3_desc) / sizeof(struct smi_desc))
#define SMI_LARB4_DESC_COUNT (sizeof(larb4_desc) / sizeof(struct smi_desc))
#define SMI_COMMON_DESC_COUNT (sizeof(common_desc) / sizeof(struct smi_desc))
#define SMI_ALLPORT_COUNT (SMI_LARB0_DESC_COUNT+SMI_LARB1_DESC_COUNT+SMI_LARB2_DESC_COUNT+SMI_LARB3_DESC_COUNT+SMI_LARB4_DESC_COUNT+SMI_COMMON_DESC_COUNT)

#endif // _SMI_NAME_H_
