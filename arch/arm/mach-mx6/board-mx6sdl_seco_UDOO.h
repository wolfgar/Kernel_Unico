#include <mach/iomux-mx6dl.h>


#ifdef CONFIG_UDOO_DUAL_REVB
	#define REVB
#endif

#define INTERNAL_SERIAL_ENABLED

/******************************************************************
*	 CUSTOM MACRO DEFINITION
*
*    IOMUXPAD explanation
*	 (mux address, pad address, mux, 0x0000, 0, pad values)
******************************************************************/

// SAM3X erase
#define MX6DL_PAD_DISP0_DAT0__GPIO_4_21_PULLDOWN	\
		(IOMUX_PAD(0x03C4, 0x00B0, 5, 0x0000, 0, 0x30B1))  
// arduino pinout pin 12
#define MX6DL_PAD_GPIO_3__GPIO_1_3_PULLDOWN \
		(IOMUX_PAD(0x05F8, 0x0228, 5, 0x0000, 0, 0x30B1))
// Touch interrupt rev.C
#define MX6DL_PAD_SD2_DAT2__GPIO_1_13_47KPULLUPPED \
		(MX6DL_PAD_SD2_DAT2__GPIO_1_13 | MUX_PAD_CTRL(PAD_CTL_PUS_47K_UP))
// Touch interrupt rev.B
#define MX6DL_PAD_SD1_CLK__GPIO_1_20_47KPULLUPPED \
		(MX6DL_PAD_SD1_CLK__GPIO_1_20 | MUX_PAD_CTRL(PAD_CTL_PUS_47K_UP))
// SAM3X otg vbus_enable
#define MX6DL_PAD_GPIO_16__GPIO_7_11_CORRECT \
		(IOMUX_PAD(0x05E4, 0x0214, 5, 0x0000, 0, 0xB0B1))

// internal gpios definition
#define MX6DL_PAD_SD2_DAT0__GPIO_MODE			IMX_GPIO_NR(1, 15)
#define MX6DL_PAD_SD2_DAT2__GPIO_MODE			IMX_GPIO_NR(1, 13) 
#define MX6DL_PAD_EIM_EB2__GPIO_MODE			IMX_GPIO_NR(2, 30) 
#define MX6DL_PAD_EIM_EB3__GPIO_MODE			IMX_GPIO_NR(2, 31)
#define MX6DL_PAD_SD3_DAT5__GPIO_MODE			IMX_GPIO_NR(7, 0) 
#define MX6DL_PAD_DISP0_DAT5__GPIO_MODE			IMX_GPIO_NR(4, 26) 
#define MX6DL_PAD_GPIO_0__GPIO_MODE				IMX_GPIO_NR(1, 0) 
#define MX6DL_PAD_GPIO_2__GPIO_MODE				IMX_GPIO_NR(1, 2)  
#define MX6DL_PAD_GPIO_4__GPIO_MODE				IMX_GPIO_NR(1, 4)  
#define MX6DL_PAD_EIM_WAIT__GPIO_MODE			IMX_GPIO_NR(5, 0)  
#define MX6DL_PAD_GPIO_16__GPIO_MODE			IMX_GPIO_NR(7, 11) 
#define MX6DL_PAD_GPIO_17__GPIO_MODE			IMX_GPIO_NR(7, 12)  
#define MX6DL_PAD_NANDF_CS0__GPIO_MODE			IMX_GPIO_NR(6, 11)
#define MX6DL_PAD_NANDF_D5__GPIO_MODE			IMX_GPIO_NR(2, 5)  
#define MX6DL_PAD_SD4_DAT7__GPIO_MODE			IMX_GPIO_NR(2, 15) 
#define MX6DL_PAD_CSI0_DAT19__GPIO_MODE			IMX_GPIO_NR(6, 5)  
#define MX6DL_PAD_CSI0_DAT18__GPIO_MODE			IMX_GPIO_NR(6, 4) 
#define MX6DL_PAD_DISP0_DAT0__GPIO_MODE			IMX_GPIO_NR(4, 21) 
#define MX6DL_PAD_CSIO_DAT18__GPIO_MODE			IMX_GPIO_NR(6, 4) 
#define MX6DL_PAD_CSIO_PIXCLK__GPIO_MODE		IMX_GPIO_NR(5, 18) 
#define MX6DL_PAD_CSIO_DAT17__GPIO_MODE			IMX_GPIO_NR(6, 3)  
#define MX6DL_PAD_NANDF_D4__GPIO_MODE			IMX_GPIO_NR(2, 4)  
#define MX6DL_PAD_EIM_A19__GPIO_MODE			IMX_GPIO_NR(2, 19) 
#define MX6DL_PAD_SD2_CMD__GPIO_MODE 			IMX_GPIO_NR(1, 11)

#define MX6DL_PAD_KEY_ROW0__GPIO_MODE			IMX_GPIO_NR(4, 7)
#define MX6DL_PAD_KEY_COL0__GPIO_MODE			IMX_GPIO_NR(4, 6)

// external pinout gpios definition
#define	MX6DL_PAD_CSI0_DAT11__GPIO_MODE  		IMX_GPIO_NR(5, 29)
#define	MX6DL_PAD_CSI0_DAT10__GPIO_MODE 	  	IMX_GPIO_NR(5, 28)

#define MX6DL_PAD_SD1_CLK__GPIO_MODE			IMX_GPIO_NR(1, 20)	
#define MX6DL_PAD_SD1_DAT0__GPIO_MODE			IMX_GPIO_NR(1, 16)	

#define	MX6DL_PAD_SD1_DAT1__GPIO_MODE   		IMX_GPIO_NR(1, 17)
#define	MX6DL_PAD_SD1_CMD__GPIO_MODE   			IMX_GPIO_NR(1, 18)
#define	MX6DL_PAD_SD4_DAT1__GPIO_MODE   		IMX_GPIO_NR(2, 9)	
#define	MX6DL_PAD_SD4_DAT2__GPIO_MODE   		IMX_GPIO_NR(2, 10)

#define	MX6DL_PAD_SD1_DAT3__GPIO_MODE   		IMX_GPIO_NR(1, 21)  
#define	MX6DL_PAD_SD1_DAT2__GPIO_MODE   		IMX_GPIO_NR(1, 19)
#define	MX6DL_PAD_GPIO_1__GPIO_MODE   			IMX_GPIO_NR(1, 1)
#define	MX6DL_PAD_GPIO_9__GPIO_MODE   			IMX_GPIO_NR(1, 9)	
#define	MX6DL_PAD_GPIO_3__GPIO_MODE   			IMX_GPIO_NR(1, 3)
#define	MX6DL_PAD_SD4_DAT0__GPIO_MODE   		IMX_GPIO_NR(2, 8)

#define	MX6DL_PAD_EIM_D21__GPIO_MODE   			IMX_GPIO_NR(3, 21)
#define	MX6DL_PAD_EIM_D28__GPIO_MODE   			IMX_GPIO_NR(3, 28)
#define	MX6DL_PAD_CSI0_DAT13__GPIO_MODE   		IMX_GPIO_NR(5, 31)	
#define	MX6DL_PAD_CSI0_DAT12__GPIO_MODE   		IMX_GPIO_NR(5, 30)
#define	MX6DL_PAD_CSI0_DAT15__GPIO_MODE   		IMX_GPIO_NR(6, 1)
#define	MX6DL_PAD_CSI0_DAT14__GPIO_MODE   		IMX_GPIO_NR(6, 0)
#define	MX6DL_PAD_CSI0_DAT16__GPIO_MODE   		IMX_GPIO_NR(6, 2)	
#define	MX6DL_PAD_CSI0_DAT4__GPIO_MODE   		IMX_GPIO_NR(5, 22)
#define	MX6DL_PAD_DISP0_DAT4__GPIO_MODE   		IMX_GPIO_NR(4, 25)
#define	MX6DL_PAD_DISP0_DAT5__GPIO_MODE   		IMX_GPIO_NR(4, 26)
#define	MX6DL_PAD_DISP0_DAT6__GPIO_MODE   		IMX_GPIO_NR(4, 27)
#define	MX6DL_PAD_DISP0_DAT7__GPIO_MODE   		IMX_GPIO_NR(4, 28)
#define	MX6DL_PAD_DISP0_DAT8__GPIO_MODE  	 	IMX_GPIO_NR(4, 29)
#define	MX6DL_PAD_DISP0_DAT9__GPIO_MODE   		IMX_GPIO_NR(4, 30)
#define	MX6DL_PAD_DISP0_DAT10__GPIO_MODE  	 	IMX_GPIO_NR(4, 31)
#define	MX6DL_PAD_DISP0_DAT11__GPIO_MODE  	 	IMX_GPIO_NR(5, 5)
#define	MX6DL_PAD_DISP0_DAT12__GPIO_MODE  	 	IMX_GPIO_NR(5, 6)
#define	MX6DL_PAD_DISP0_DAT13__GPIO_MODE 	  	IMX_GPIO_NR(5, 7)
#define	MX6DL_PAD_DISP0_DAT14__GPIO_MODE   		IMX_GPIO_NR(5, 8)
#define	MX6DL_PAD_DISP0_DAT15__GPIO_MODE   		IMX_GPIO_NR(5, 9)
#define	MX6DL_PAD_DISP0_DAT16__GPIO_MODE   		IMX_GPIO_NR(5, 10)
#define	MX6DL_PAD_DISP0_DAT17__GPIO_MODE   		IMX_GPIO_NR(5, 11)
#define	MX6DL_PAD_DISP0_DAT18__GPIO_MODE   		IMX_GPIO_NR(5, 12)
#define	MX6DL_PAD_DISP0_DAT19__GPIO_MODE  	 	IMX_GPIO_NR(5, 13)
#define	MX6DL_PAD_DISP0_DAT20__GPIO_MODE   		IMX_GPIO_NR(5, 14)
#define	MX6DL_PAD_DISP0_DAT21__GPIO_MODE   		IMX_GPIO_NR(5, 15)
#define	MX6DL_PAD_EIM_A16__GPIO_MODE   			IMX_GPIO_NR(2, 22)
#define	MX6DL_PAD_GPIO_18__GPIO_MODE 			IMX_GPIO_NR(7, 13)
#define	MX6DL_PAD_NANDF_D0__GPIO_MODE  		 	IMX_GPIO_NR(2, 0)	
#define	MX6DL_PAD_NANDF_D1__GPIO_MODE  		 	IMX_GPIO_NR(2, 1)	
#define	MX6DL_PAD_NANDF_D2__GPIO_MODE  		 	IMX_GPIO_NR(2, 2)	
#define	MX6DL_PAD_NANDF_D3__GPIO_MODE  		 	IMX_GPIO_NR(2, 3)	
#define	MX6DL_PAD_GPIO_19__GPIO_MODE   			IMX_GPIO_NR(4, 5)	
#define	MX6DL_PAD_DISP0_DAT22__GPIO_MODE		IMX_GPIO_NR(5, 16) 	
#define	MX6DL_PAD_DISP0_DAT23__GPIO_MODE		IMX_GPIO_NR(5, 17) 	
#define	MX6DL_PAD_EIM_D25__GPIO_MODE   			IMX_GPIO_NR(3, 25)	
#define	MX6DL_PAD_KEY_ROW1__GPIO_MODE   		IMX_GPIO_NR(4, 9) 	
#define	MX6DL_PAD_KEY_COL1__GPIO_MODE   		IMX_GPIO_NR(4, 8)	
#define	MX6DL_PAD_EIM_OE__GPIO_MODE   			IMX_GPIO_NR(2, 25)	
#define	MX6DL_PAD_EIM_CS1__GPIO_MODE   			IMX_GPIO_NR(2, 24)	
#define	MX6DL_PAD_EIM_CS0__GPIO_MODE   			IMX_GPIO_NR(2, 23) 	
#define	MX6DL_PAD_EIM_D24__GPIO_MODE   			IMX_GPIO_NR(3, 24)
#define MX6DL_PAD_GPIO_7__GPIO_MODE				IMX_GPIO_NR(1, 7)	
#define MX6DL_PAD_GPIO_8__GPIO_MODE				IMX_GPIO_NR(1, 8)	


static iomux_v3_cfg_t mx6sdl_seco_UDOO_pads[] = {

#ifdef REVB
	MX6DL_PAD_SD2_CMD__GPIO_1_11,	 			//	for audio reset
#endif	
        
        /* AUDMUX */
	MX6DL_PAD_DI0_PIN2__AUDMUX_AUD6_TXD,  		//  for AUDIO AUDMUX port 6
	MX6DL_PAD_DI0_PIN3__AUDMUX_AUD6_TXFS, 		//  for AUDIO AUDMUX port 6
	MX6DL_PAD_DI0_PIN4__AUDMUX_AUD6_RXD,  		//  for AUDIO AUDMUX port 6
	MX6DL_PAD_DI0_PIN15__AUDMUX_AUD6_TXC, 		//  for AUDIO AUDMUX port 6
        
        /* UART2 for debug */
	MX6DL_PAD_EIM_D26__UART2_TXD,				//	DUART_TXD - for UART2
	MX6DL_PAD_EIM_D27__UART2_RXD,				//	DUART_RXD - for UART2

		/* USDHC3 -> eMMC ONBOARD */
	MX6DL_PAD_SD3_CLK__USDHC3_CLK_50MHZ,		//	eMMC_CMD   
	MX6DL_PAD_SD3_CMD__USDHC3_CMD_50MHZ,		//	eMMC_CLK
	MX6DL_PAD_SD3_DAT0__USDHC3_DAT0_50MHZ,		//	eMMC_DAT0
	MX6DL_PAD_SD3_DAT1__USDHC3_DAT1_50MHZ,		//	eMMC_DAT1
	MX6DL_PAD_SD3_DAT2__USDHC3_DAT2_50MHZ,		//	eMMC_DAT2
	MX6DL_PAD_SD3_DAT3__USDHC3_DAT3_50MHZ,		//	eMMC_DAT3
	MX6DL_PAD_SD3_RST__USDHC3_RST,				//	eMMC_RESETN

	MX6DL_PAD_GPIO_6__GPIO_1_6,			//    - gpio generic
        
        /* ECSPI1 */
	MX6DL_PAD_EIM_D16__ECSPI1_SCLK,      		//	to SPI
	MX6DL_PAD_EIM_D17__ECSPI1_MISO,      		//	to SPI
	MX6DL_PAD_EIM_D18__ECSPI1_MOSI,      		//	to SPI
	MX6DL_PAD_EIM_D19__GPIO_3_19,				//	to SPI  CS1
        
        /* ENET */
	MX6DL_PAD_ENET_MDIO__ENET_MDIO,				//  to ENET
	MX6DL_PAD_ENET_MDC__ENET_MDC,				//  to ENET
	MX6DL_PAD_RGMII_TXC__ENET_RGMII_TXC,		//  to ENET
	MX6DL_PAD_RGMII_TD0__ENET_RGMII_TD0,		//  to ENET
	MX6DL_PAD_RGMII_TD1__ENET_RGMII_TD1,		//  to ENET
	MX6DL_PAD_RGMII_TD2__ENET_RGMII_TD2,		//  to ENET
	MX6DL_PAD_RGMII_TD3__ENET_RGMII_TD3,		//  to ENET
	MX6DL_PAD_RGMII_TX_CTL__ENET_RGMII_TX_CTL,	//  to ENET
	MX6DL_PAD_ENET_REF_CLK__ENET_TX_CLK,		// 	to ENET
	MX6DL_PAD_RGMII_RXC__ENET_RGMII_RXC,		// 	to ENET
	MX6DL_PAD_RGMII_RD0__ENET_RGMII_RD0,		//  to ENET
	MX6DL_PAD_RGMII_RD1__ENET_RGMII_RD1,		//  to ENET
	MX6DL_PAD_RGMII_RD2__ENET_RGMII_RD2,		//  to ENET
	MX6DL_PAD_RGMII_RD3__ENET_RGMII_RD3,		//  to ENET
	MX6DL_PAD_RGMII_RX_CTL__ENET_RGMII_RX_CTL,	//  to ENET
	MX6DL_PAD_ENET_TX_EN__GPIO_1_28,			//  Micrel RGMII Phy Interrupt - to ENET
	MX6DL_PAD_EIM_D23__GPIO_3_23,				//  RGMII reset      

        /* WEIM BUS */      
    MX6DL_PAD_EIM_EB0__WEIM_WEIM_EB_0,			//  for CPLD logic
	MX6DL_PAD_EIM_EB1__WEIM_WEIM_EB_1,			//  for CPLD logic
      
    MX6DL_PAD_EIM_RW__WEIM_WEIM_RW,				//  for CPLD logic
	MX6DL_PAD_EIM_OE__WEIM_WEIM_OE,				//  for CPLD logic
	MX6DL_PAD_EIM_LBA__WEIM_WEIM_LBA,			//  for CPLD logic
       
    MX6DL_PAD_EIM_DA0__WEIM_WEIM_DA_A_0,			//  for CPLD logic
	MX6DL_PAD_EIM_DA1__WEIM_WEIM_DA_A_1,			//  for CPLD logic
	MX6DL_PAD_EIM_DA2__WEIM_WEIM_DA_A_2,			//  for CPLD logic
	MX6DL_PAD_EIM_DA3__WEIM_WEIM_DA_A_3,			//  for CPLD logic
	MX6DL_PAD_EIM_DA4__WEIM_WEIM_DA_A_4,			//  for CPLD logic
	MX6DL_PAD_EIM_DA5__WEIM_WEIM_DA_A_5,			//  for CPLD logic
	MX6DL_PAD_EIM_DA6__WEIM_WEIM_DA_A_6,			//  for CPLD logic
	MX6DL_PAD_EIM_DA7__WEIM_WEIM_DA_A_7,			//  for CPLD logic
	MX6DL_PAD_EIM_DA8__WEIM_WEIM_DA_A_8,			//  for CPLD logic
	MX6DL_PAD_EIM_DA9__WEIM_WEIM_DA_A_9,			//  for CPLD logic
	MX6DL_PAD_EIM_DA10__WEIM_WEIM_DA_A_10,		//  for CPLD logic
	MX6DL_PAD_EIM_DA11__WEIM_WEIM_DA_A_11,		//  for CPLD logic
	MX6DL_PAD_EIM_DA12__WEIM_WEIM_DA_A_12,		//  for CPLD logic
	MX6DL_PAD_EIM_DA13__WEIM_WEIM_DA_A_13,		//  for CPLD logic
	MX6DL_PAD_EIM_DA14__WEIM_WEIM_DA_A_14,		//  for CPLD logic
	MX6DL_PAD_EIM_DA15__WEIM_WEIM_DA_A_15,		//  for CPLD logic
        
        /* GPIO2 */ 
	MX6DL_PAD_EIM_A18__GPIO_2_20,				//  for CPLD logic
	MX6DL_PAD_EIM_A19__GPIO_2_19,				//  for CPLD logic
	MX6DL_PAD_EIM_A20__GPIO_2_18,				//	for CPLD logic
	MX6DL_PAD_EIM_A21__GPIO_2_17,				//	for CPLD logic
	MX6DL_PAD_EIM_A22__GPIO_2_16,				//	for CPLD logic
	MX6DL_PAD_EIM_A23__GPIO_6_6,				//  for CPLD logic
	MX6DL_PAD_EIM_A24__GPIO_5_4,				//  for CPLD logic
	MX6DL_PAD_EIM_WAIT__GPIO_5_0,				//  for CPLD logic
                 
    /************ I2C BUS ************/
		/* I2C1 */
	MX6DL_PAD_EIM_D21__I2C1_SCL,				//	I2C1_SCL - SMB
	MX6DL_PAD_EIM_D28__I2C1_SDA,				//	I2C1_SDA - SMB

	MX6DL_PAD_KEY_COL3__I2C2_SCL,				//	I2C2_SCL
	MX6DL_PAD_KEY_ROW3__I2C2_SDA,				//	I2C2_SDA

	MX6DL_PAD_GPIO_5__I2C3_SCL,                 //  I2C3_SCL
    MX6DL_PAD_GPIO_6__I2C3_SDA,					// 	I2C3_SDA

	/* 
	*	internal pinmuxing
	*/
#ifdef REVB
	MX6DL_PAD_SD2_DAT0__GPIO_1_15,					
	MX6DL_PAD_SD1_CLK__GPIO_1_20_47KPULLUPPED,		
	MX6DL_PAD_SD3_DAT5__GPIO_7_0,		
	MX6DL_PAD_GPIO_7__GPIO_1_7,			
	MX6DL_PAD_GPIO_0__GPIO_1_0,			
	MX6DL_PAD_GPIO_2__GPIO_1_2,			
	MX6DL_PAD_GPIO_4__GPIO_1_4,			
	MX6DL_PAD_GPIO_8__GPIO_1_8,			
	MX6DL_PAD_GPIO_16__GPIO_7_11_CORRECT,
	MX6DL_PAD_GPIO_17__GPIO_7_12,		
	MX6DL_PAD_NANDF_CS2__CCM_CLKO2,	
	MX6DL_PAD_NANDF_D5__GPIO_2_5,		
	MX6DL_PAD_SD4_DAT7__GPIO_2_15,		
	MX6DL_PAD_CSI0_DAT19__GPIO_6_5,		
	MX6DL_PAD_CSI0_DAT18__GPIO_6_4,		
	MX6DL_PAD_DISP0_DAT0__GPIO_4_21_PULLDOWN, 
	MX6DL_PAD_CSI0_PIXCLK__GPIO_5_18,	
	MX6DL_PAD_CSI0_DAT17__GPIO_6_3,		
	MX6DL_PAD_EIM_A19__GPIO_2_19,		
#else  // from rev.C on
	MX6DL_PAD_SD2_DAT0__GPIO_1_15,					// touch reset
	MX6DL_PAD_SD2_DAT2__GPIO_1_13_47KPULLUPPED,		// touch interrupt
	MX6DL_PAD_EIM_EB2__GPIO_2_30,					// audio reset
	MX6DL_PAD_EIM_EB3__GPIO_2_31,					// ethernet power
	MX6DL_PAD_SD3_DAT5__GPIO_7_0,					// sd card detect
	MX6DL_PAD_DISP0_DAT5__GPIO_4_26,				// sel_dbg_uart
	MX6DL_PAD_DISP0_DAT0__GPIO_4_21_PULLDOWN, 		// SAM3X erase (active high)
	MX6DL_PAD_GPIO_0__GPIO_1_0,						// SAM3X reset (active low)
	MX6DL_PAD_GPIO_16__GPIO_7_11_CORRECT,			// SAM3X vbus_en
	MX6DL_PAD_SD4_DAT7__GPIO_2_15,					// SAM3X usb host
	MX6DL_PAD_GPIO_2__GPIO_1_2,						// panel on 
	MX6DL_PAD_GPIO_4__GPIO_1_4,						// backlight on
	MX6DL_PAD_GPIO_17__GPIO_7_12,					// usb hub reset
	MX6DL_PAD_NANDF_CS2__CCM_CLKO2,					// usb hub clock 24mhz
	MX6DL_PAD_NANDF_CS0__GPIO_6_11,					// Vtt suspend
	MX6DL_PAD_NANDF_D5__GPIO_2_5, 					// sdcard power
	MX6DL_PAD_CSI0_DAT19__GPIO_6_5, 				// camera reset 
	MX6DL_PAD_CSI0_DAT18__GPIO_6_4,					// camera enable
	MX6DL_PAD_CSI0_PIXCLK__GPIO_5_18,				// input monitoring serial
	MX6DL_PAD_CSI0_DAT17__GPIO_6_3,					// input monitoring serial
	MX6DL_PAD_NANDF_D4__GPIO_2_4,					// 5v enable
	MX6DL_PAD_EIM_A19__GPIO_2_19,					// writeprotect_spi_flash
	MX6DL_PAD_EIM_WAIT__GPIO_5_0,					// usb otg selector
#endif

// UART4 - internal serial imx6 --> sam3x (/dev/ttymxc3)
#ifdef INTERNAL_SERIAL_ENABLED
	MX6DL_PAD_KEY_ROW0__UART4_RXD,		
	MX6DL_PAD_KEY_COL0__UART4_TXD,		
#else
	MX6DL_PAD_KEY_ROW0__GPIO_4_7,		// gpio input
	MX6DL_PAD_KEY_COL0__GPIO_4_6,		// gpio input 
#endif

	/* 
	*	external pinmuxing
	*
	*/
#ifdef REVB
	MX6DL_PAD_DISP0_DAT4__GPIO_4_25,
	MX6DL_PAD_DISP0_DAT5__GPIO_4_26,
#else
    MX6DL_PAD_SD1_CLK__GPIO_1_20,							// pin 2
		// MX6DL_PAD_SD1_CLK__USDHC1_CLK,  
		// MX6DL_PAD_SD1_DAT1__ECSPI5_SCLK,  

	MX6DL_PAD_SD1_DAT0__GPIO_1_16,							// pin 3
		// MX6DL_PAD_SD1_DAT0__USDHC1_DAT0,   
		// MX6DL_PAD_SD1_DAT1__ECSPI5_MISO, 
#endif

	MX6DL_PAD_CSI0_DAT11__GPIO_5_29,						// pin 0
		//MX6DL_PAD_CSI0_DAT11__UART1_RXD,
	MX6DL_PAD_CSI0_DAT10__GPIO_5_28,						// pin 1
		//MX6DL_PAD_CSI0_DAT10__UART1_TXD,
	MX6DL_PAD_SD1_DAT1__GPIO_1_17,							// pin 4
		// MX6DL_PAD_SD1_DAT1__USDHC1_DAT1,             
		// MX6DL_PAD_SD1_DAT1__PWM3_PWMO,
		// MX6DL_PAD_SD1_DAT1__ECSPI5_SS0,
		// MX6DL_PAD_SD1_DAT1__GPT_CAPIN2,	
	MX6DL_PAD_SD1_CMD__GPIO_1_18,							// pin 5
		// MX6DL_PAD_SD1_CMD__USDHC1_CMD,		    
		// MX6DL_PAD_SD1_CMD__PWM4_PWMO,
		// MX6DL_PAD_SD1_CMD__ECSPI5_MOSI,	
	MX6DL_PAD_SD4_DAT1__GPIO_2_9,							// pin 6
		// MX6DL_PAD_SD4_DAT1__PWM3_PWMO,	
	MX6DL_PAD_SD4_DAT2__GPIO_2_10,							// pin 7
		// MX6DL_PAD_SD4_DAT2__PWM4_PWMO,
	MX6DL_PAD_SD1_DAT3__GPIO_1_21,  						// pin 8
		// MX6DL_PAD_SD1_DAT3__PWM1_PWMO,      
		// MX6DL_PAD_SD1_DAT3__USDHC1_DAT3,	
		// MX6DL_PAD_SD1_DAT3__ECSPI5_SS2,
		// MX6DL_PAD_SD1_DAT3__WDOG2_WDOG_RST_B_DEB,	
	MX6DL_PAD_SD1_DAT2__GPIO_1_19,							// pin 9
		// MX6DL_PAD_SD1_DAT2__PWM2_PWMO,      
		// MX6DL_PAD_SD1_DAT2__USDHC1_DAT2,	
		// MX6DL_PAD_SD1_DAT2__ECSPI5_SS1,
		// MX6DL_PAD_SD1_DAT2__GPT_CMPOUT2,		
	MX6DL_PAD_GPIO_1__GPIO_1_1,								// pin 10
		// MX6DL_PAD_GPIO_1__PWM2_PWMO,        
		// MX6DL_PAD_GPIO_1__USDHC1_CD,
		// MX6DL_PAD_GPIO_1__WDOG2_WDOG_B,	
	MX6DL_PAD_GPIO_9__GPIO_1_9,								// pin 11
		// MX6DL_PAD_GPIO_9__PWM1_PWMO,	   
		// MX6DL_PAD_GPIO_9__USDHC1_WP,		
	MX6DL_PAD_GPIO_3__GPIO_1_3_PULLDOWN,					// pin 12
	MX6DL_PAD_SD4_DAT0__GPIO_2_8,							// pin 13

	MX6DL_PAD_CSI0_DAT4__GPIO_5_22,							// pin 14
	MX6DL_PAD_CSI0_DAT16__GPIO_6_2,							// pin 15
		// MX6DL_PAD_CSI0_DAT16__UART4_RTS,
	MX6DL_PAD_CSI0_DAT14__GPIO_6_0,							// pin 16
	    // MX6DL_PAD_CSI0_DAT14__UART5_TXD,
	MX6DL_PAD_CSI0_DAT15__GPIO_6_1,							// pin 17
		// MX6DL_PAD_CSI0_DAT15__UART5_RXD,
	MX6DL_PAD_CSI0_DAT12__GPIO_5_30,						// pin 18
		// MX6DL_PAD_CSI0_DAT12__UART4_TXD,
	MX6DL_PAD_CSI0_DAT13__GPIO_5_31,						// pin 19
		// MX6DL_PAD_CSI0_DAT13__UART4_RXD,
	MX6DL_PAD_EIM_D28__GPIO_3_28,							// pin 20
		// MX6DL_PAD_EIM_D28__I2C1_SDA,
	MX6DL_PAD_EIM_D21__GPIO_3_21,							// pin 21
		// MX6DL_PAD_EIM_D21__I2C1_SCL,
		// MX6DL_PAD_EIM_D21__SPDIF_IN1,

	MX6DL_PAD_DISP0_DAT6__GPIO_4_27,						// pin 22
	MX6DL_PAD_DISP0_DAT7__GPIO_4_28,						// pin 23
	MX6DL_PAD_DISP0_DAT8__GPIO_4_29,						// pin 24
	MX6DL_PAD_DISP0_DAT9__GPIO_4_30,						// pin 25
	MX6DL_PAD_DISP0_DAT10__GPIO_4_31,						// pin 26
	MX6DL_PAD_DISP0_DAT11__GPIO_5_5,						// pin 27
	MX6DL_PAD_DISP0_DAT12__GPIO_5_6,						// pin 28
	MX6DL_PAD_DISP0_DAT13__GPIO_5_7,						// pin 29
		// MX6DL_PAD_DISP0_DAT13__AUDMUX_AUD5_RXFS,
	MX6DL_PAD_DISP0_DAT14__GPIO_5_8,						// pin 30
		// MX6DL_PAD_DISP0_DAT14__AUDMUX_AUD5_RXC,
	MX6DL_PAD_DISP0_DAT15__GPIO_5_9,						// pin 31
		// MX6DL_PAD_DISP0_DAT15__ECSPI2_SS1,
	MX6DL_PAD_DISP0_DAT16__GPIO_5_10,						// pin 32
		// MX6DL_PAD_DISP0_DAT16__AUDMUX_AUD5_TXC,
	MX6DL_PAD_DISP0_DAT17__GPIO_5_11,						// pin 33
		// MX6DL_PAD_DISP0_DAT17__AUDMUX_AUD5_TXD,
	MX6DL_PAD_DISP0_DAT18__GPIO_5_12,						// pin 34
		// MX6DL_PAD_DISP0_DAT18__AUDMUX_AUD5_TXFS,
	MX6DL_PAD_DISP0_DAT19__GPIO_5_13,						// pin 35
		// MX6DL_PAD_DISP0_DAT19__AUDMUX_AUD5_RXD,
	MX6DL_PAD_DISP0_DAT20__GPIO_5_14,						// pin 36
		// MX6DL_PAD_DISP0_DAT20__ECSPI1_SCLK,
	MX6DL_PAD_DISP0_DAT21__GPIO_5_15,						// pin 37
		// MX6DL_PAD_DISP0_DAT21__ECSPI1_MOSI,	
	MX6DL_PAD_EIM_A16__GPIO_2_22,							// pin 38
	MX6DL_PAD_GPIO_18__GPIO_7_13,							// pin 39
	MX6DL_PAD_NANDF_D0__GPIO_2_0,							// pin 40
		// MX6DL_PAD_NANDF_D0__USDHC1_DAT4,
	MX6DL_PAD_NANDF_D1__GPIO_2_1,							// pin 41
		// MX6DL_PAD_NANDF_D1__USDHC1_DAT5,
	MX6DL_PAD_NANDF_D2__GPIO_2_2,							// pin 42
		// MX6DL_PAD_NANDF_D2__USDHC1_DAT6,
	MX6DL_PAD_NANDF_D3__GPIO_2_3,							// pin 43
		// MX6DL_PAD_NANDF_D3__USDHC1_DAT7,
	MX6DL_PAD_GPIO_19__GPIO_4_5,							// pin 44
		// MX6DL_PAD_GPIO_19__SPDIF_OUT1,
		// MX6DL_PAD_GPIO_19__CCM_CLKO,	
	MX6DL_PAD_DISP0_DAT22__GPIO_5_16,						// pin 45
		// MX6DL_PAD_DISP0_DAT22__ECSPI1_MISO,
	MX6DL_PAD_DISP0_DAT23__GPIO_5_17,						// pin 46
		// MX6DL_PAD_DISP0_DAT23__ECSPI1_SS0,
	MX6DL_PAD_EIM_D25__GPIO_3_25,							// pin 47
		// MX6DL_PAD_EIM_D25__UART3_RXD,
	MX6DL_PAD_KEY_ROW1__GPIO_4_9,							// pin 48
		// MX6DL_PAD_KEY_ROW1__UART5_RXD,
	MX6DL_PAD_KEY_COL1__GPIO_4_8,							// pin 49
		// MX6DL_PAD_KEY_COL1__UART5_TXD,      
		// MX6DL_PAD_KEY_COL1__USDHC1_VSELECT,
	MX6DL_PAD_EIM_OE__GPIO_2_25,							// pin 50
		// MX6DL_PAD_EIM_OE__ECSPI2_MISO,
	MX6DL_PAD_EIM_CS1__GPIO_2_24,							// pin 51
		// MX6DL_PAD_EIM_CS1__ECSPI2_MOSI,
	MX6DL_PAD_EIM_CS0__GPIO_2_23, 							// pin 52
		// MX6DL_PAD_EIM_CS0__ECSPI2_SCLK,
	MX6DL_PAD_EIM_D24__GPIO_3_24,							// pin 53
		// MX6DL_PAD_EIM_D24__ECSPI2_SS2,      
		// MX6DL_PAD_EIM_D24__UART3_TXD,  
		// MX6DL_PAD_EIM_D24__ECSPI1_SS2,

	MX6DL_PAD_GPIO_7__GPIO_1_7,								// cantx
		// MX6Q_PAD_GPIO_7__CAN1_TXCAN,
	MX6DL_PAD_GPIO_8__GPIO_1_8,								// canrx
		// MX6Q_PAD_GPIO_8__CAN1_RXCAN,
};

static unsigned int mx6dl_set_in_outputmode_low[] = {
	MX6DL_PAD_SD2_DAT0__GPIO_MODE, 
	MX6DL_PAD_CSI0_DAT19__GPIO_MODE,
	MX6DL_PAD_EIM_A19__GPIO_MODE,
	MX6DL_PAD_SD4_DAT7__GPIO_MODE,	
	MX6DL_PAD_CSIO_DAT18__GPIO_MODE, 
#ifdef REVB
	MX6DL_PAD_GPIO_8__GPIO_MODE, 
#endif

};

static unsigned int mx6dl_set_in_outputmode_high[] = {
	MX6DL_PAD_GPIO_0__GPIO_MODE,
	MX6DL_PAD_GPIO_16__GPIO_MODE,  
	MX6DL_PAD_NANDF_D5__GPIO_MODE,	
#ifndef REVB
	MX6DL_PAD_NANDF_CS0__GPIO_MODE,
	MX6DL_PAD_EIM_WAIT__GPIO_MODE,	
	MX6DL_PAD_EIM_EB3__GPIO_MODE, 	
#else
	MX6DL_PAD_SD2_CMD__GPIO_MODE,  
#endif
};


static unsigned int mx6dl_set_in_inputmode[] = {
	MX6DL_PAD_SD2_DAT2__GPIO_MODE,
	MX6DL_PAD_SD3_DAT5__GPIO_MODE,
	MX6DL_PAD_DISP0_DAT0__GPIO_MODE,	
	MX6DL_PAD_DISP0_DAT5__GPIO_MODE,  			
	MX6DL_PAD_CSIO_PIXCLK__GPIO_MODE,	
	MX6DL_PAD_CSIO_DAT17__GPIO_MODE,	
#ifdef REVB
	MX6DL_PAD_NANDF_D4__GPIO_MODE, 
	MX6DL_PAD_DISP0_DAT4__GPIO_MODE, 
#else
	MX6DL_PAD_GPIO_8__GPIO_MODE,
	MX6DL_PAD_SD1_DAT0__GPIO_MODE,
#endif

#ifndef INTERNAL_SERIAL_ENABLED	
	MX6DL_PAD_KEY_ROW0__GPIO_MODE,
	MX6DL_PAD_KEY_COL0__GPIO_MODE,
#endif

	MX6DL_PAD_GPIO_7__GPIO_MODE,
	MX6DL_PAD_CSI0_DAT10__GPIO_MODE,
	MX6DL_PAD_CSI0_DAT11__GPIO_MODE,	
	MX6DL_PAD_SD1_CLK__GPIO_MODE,
	
	MX6DL_PAD_SD1_DAT1__GPIO_MODE,   		
	MX6DL_PAD_SD1_CMD__GPIO_MODE,   		
	MX6DL_PAD_SD4_DAT1__GPIO_MODE,   			
	MX6DL_PAD_SD4_DAT2__GPIO_MODE,
	MX6DL_PAD_SD1_DAT3__GPIO_MODE,
  
	MX6DL_PAD_SD1_DAT2__GPIO_MODE,   		
	MX6DL_PAD_GPIO_1__GPIO_MODE,   		
	MX6DL_PAD_GPIO_9__GPIO_MODE,   			
	MX6DL_PAD_GPIO_3__GPIO_MODE,   		
	MX6DL_PAD_SD4_DAT0__GPIO_MODE,   		

	MX6DL_PAD_EIM_D21__GPIO_MODE,   
	MX6DL_PAD_EIM_D28__GPIO_MODE,   		
	MX6DL_PAD_CSI0_DAT13__GPIO_MODE,   
	MX6DL_PAD_CSI0_DAT12__GPIO_MODE,  
	MX6DL_PAD_CSI0_DAT15__GPIO_MODE, 
 	
	MX6DL_PAD_CSI0_DAT4__GPIO_MODE, 
	MX6DL_PAD_CSI0_DAT14__GPIO_MODE,   
	MX6DL_PAD_CSI0_DAT16__GPIO_MODE,  
	MX6DL_PAD_DISP0_DAT6__GPIO_MODE,   
	MX6DL_PAD_DISP0_DAT7__GPIO_MODE,
   	
	MX6DL_PAD_DISP0_DAT8__GPIO_MODE,   	
	MX6DL_PAD_DISP0_DAT9__GPIO_MODE,  
	MX6DL_PAD_DISP0_DAT10__GPIO_MODE,   
	MX6DL_PAD_DISP0_DAT11__GPIO_MODE,   	
	MX6DL_PAD_DISP0_DAT12__GPIO_MODE, 
  
	MX6DL_PAD_DISP0_DAT13__GPIO_MODE,   
	MX6DL_PAD_DISP0_DAT14__GPIO_MODE,   
	MX6DL_PAD_DISP0_DAT15__GPIO_MODE,   	
	MX6DL_PAD_DISP0_DAT16__GPIO_MODE,   
	MX6DL_PAD_DISP0_DAT17__GPIO_MODE,
  
	MX6DL_PAD_DISP0_DAT18__GPIO_MODE,   
	MX6DL_PAD_DISP0_DAT19__GPIO_MODE,   
	MX6DL_PAD_DISP0_DAT20__GPIO_MODE,   
	MX6DL_PAD_DISP0_DAT21__GPIO_MODE,   	
	MX6DL_PAD_EIM_A16__GPIO_MODE,

	MX6DL_PAD_GPIO_18__GPIO_MODE, 	
	MX6DL_PAD_NANDF_D0__GPIO_MODE,   		
	MX6DL_PAD_NANDF_D1__GPIO_MODE,   
	MX6DL_PAD_NANDF_D2__GPIO_MODE,   
	MX6DL_PAD_NANDF_D3__GPIO_MODE, 
  	
	MX6DL_PAD_GPIO_19__GPIO_MODE,   		
	MX6DL_PAD_DISP0_DAT22__GPIO_MODE, 
	MX6DL_PAD_DISP0_DAT23__GPIO_MODE, 	
	MX6DL_PAD_EIM_D25__GPIO_MODE,   		
	MX6DL_PAD_KEY_ROW1__GPIO_MODE,
    	
	MX6DL_PAD_KEY_COL1__GPIO_MODE,  	
	MX6DL_PAD_EIM_OE__GPIO_MODE,   	
	MX6DL_PAD_EIM_CS1__GPIO_MODE,   	
	MX6DL_PAD_EIM_CS0__GPIO_MODE,    		
	MX6DL_PAD_EIM_D24__GPIO_MODE,  

	MX6DL_PAD_GPIO_8__GPIO_MODE,
	MX6DL_PAD_GPIO_7__GPIO_MODE,
};

#define MX6DL_USDHC_PAD_SETTING(id, speed)	\
mx6dl_sd##id##_##speed##mhz[] = {		\
	MX6DL_PAD_SD##id##_CLK__USDHC##id##_CLK_##speed##MHZ,	\
	MX6DL_PAD_SD##id##_CMD__USDHC##id##_CMD_##speed##MHZ,	\
	MX6DL_PAD_SD##id##_DAT0__USDHC##id##_DAT0_##speed##MHZ,	\
	MX6DL_PAD_SD##id##_DAT1__USDHC##id##_DAT1_##speed##MHZ,	\
	MX6DL_PAD_SD##id##_DAT2__USDHC##id##_DAT2_##speed##MHZ,	\
	MX6DL_PAD_SD##id##_DAT3__USDHC##id##_DAT3_##speed##MHZ,	\
}
