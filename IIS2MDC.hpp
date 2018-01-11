/*
 * name:        IIS2MDC
 * description: High-accuracy, ultra-low-power, 3-axis digital output magnetometer
 * manuf:       STMicroelectronics
 * version:     Version 0.1
 * url:         http://www.st.com/resource/en/datasheet/iis2mdc.pdf
 * date:        2018-01-11
 * author       https://chisl.io/
 * file:        IIS2MDC.hpp
 */

/*                                                                                                       *
 *                                   THIS FILE IS AUTOMATICALLY CREATED                                  *
 *                                    D O     N O T     M O D I F Y  !                                   *
 *                                                                                                       */

#include <cinttypes>

/* Derive from class IIS2MDC_Base and implement the read and write functions! */

/* IIS2MDC: High-accuracy, ultra-low-power, 3-axis digital output magnetometer */
class IIS2MDC_Base
{
public:
	/* Pure virtual functions that need to be implemented in derived class: */
	virtual uint8_t read8(uint16_t address, uint16_t n=8) = 0;  // 8 bit read
	virtual void write(uint16_t address, uint8_t value, uint16_t n=8) = 0;  // 8 bit write
	virtual uint16_t read16(uint16_t address, uint16_t n=16) = 0;  // 16 bit read
	virtual void write(uint16_t address, uint16_t value, uint16_t n=16) = 0;  // 16 bit write
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG OFFSET_X                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG OFFSET_X:
	 * 8.1
	 * These registers comprise a 16-bit register and represent X hard-iron offset in order to compensate
	 * environmental effects (data in two’s complement). These values act on the magnetic output data value
	 * in order to delete the environmental offset.
	 */
	struct OFFSET_X
	{
		static const uint16_t __address = 69;
		
		/* Bits OFFSET_X: */
		struct OFFSET_X_
		{
			/* Mode:rw */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register OFFSET_X */
	void setOFFSET_X(uint16_t value)
	{
		write(OFFSET_X::__address, value, 16);
	}
	
	/* Get register OFFSET_X */
	uint16_t getOFFSET_X()
	{
		return read16(OFFSET_X::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG OFFSET_Y                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG OFFSET_Y:
	 * 8.2
	 * These registers comprise a 16-bit register and represent Y hard-iron offset in order to compensate
	 * environmental effects (data in two’s complement). These values act on the magnetic output data value
	 * in order to delete the environmental offset.
	 */
	struct OFFSET_Y
	{
		static const uint16_t __address = 71;
		
		/* Bits OFFSET_Y: */
		struct OFFSET_Y_
		{
			/* Mode:rw */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register OFFSET_Y */
	void setOFFSET_Y(uint16_t value)
	{
		write(OFFSET_Y::__address, value, 16);
	}
	
	/* Get register OFFSET_Y */
	uint16_t getOFFSET_Y()
	{
		return read16(OFFSET_Y::__address, 16);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG OFFSET_Z_                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG OFFSET_Z_:
	 * 8.3
	 * These registers comprise a 16-bit register and represent Z hard-iron offset in order to compensate
	 * environmental effects (data in two’s complement). These values act on the magnetic output data value
	 * in order to delete the environmental offset.
	 */
	struct OFFSET_Z_
	{
		static const uint16_t __address = 73;
		
		/* Bits OFFSET_Z_: */
		struct OFFSET_Z__
		{
			/* Mode:rw */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register OFFSET_Z_ */
	void setOFFSET_Z_(uint16_t value)
	{
		write(OFFSET_Z_::__address, value, 16);
	}
	
	/* Get register OFFSET_Z_ */
	uint16_t getOFFSET_Z_()
	{
		return read16(OFFSET_Z_::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG WHO_AM_I                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG WHO_AM_I:
	 * 8.4
	 * The identification register is used to identify the device.
	 */
	struct WHO_AM_I
	{
		static const uint16_t __address = 79;
		
		/* Bits WHO_AM_I: */
		struct WHO_AM_I_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b01000000; // 8'b1000000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register WHO_AM_I */
	void setWHO_AM_I(uint8_t value)
	{
		write(WHO_AM_I::__address, value, 8);
	}
	
	/* Get register WHO_AM_I */
	uint8_t getWHO_AM_I()
	{
		return read8(WHO_AM_I::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CFG_REG_A                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CFG_REG_A:
	 * 8.5
	 * The configuration register is used to configure the output data rate and the measurement configuration.
	 */
	struct CFG_REG_A
	{
		static const uint16_t __address = 96;
		
		/* Bits COMP_TEMP_EN: */
		/* 1.   For proper operation, this bit must be set to '1'.  */
		struct COMP_TEMP_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t DISABLED = 0b0; // temperature compensation disabled
			static const uint8_t ENABLED = 0b1; // temperature compensation enabled
		};
		/* Bits REBOOT: */
		struct REBOOT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t NORMAL_MODE = 0b0; // normal mode
			static const uint8_t REBOOT_MEMORY = 0b1; // reboot memory content
		};
		/* Bits SOFT_RST: */
		/*
		 * When this bit is set, the configuration registers and user registers are reset.
		 * Flash registers keep their values.
		 */
		struct SOFT_RST
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits LP: */
		/* Enables low-power mode.  */
		struct LP
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t HIGH_RES_MODE = 0b0; // high-resolution mode 
			static const uint8_t LOW_POWER_MODE = 0b1; // low-power mode enabled 
		};
		/* Bits ODR: */
		/* Output data rate configuration (see Table 25: Output data rate configuration).  */
		struct ODR
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00001100; // [2,3]
			static const uint8_t ODR_10_Hz = 0b00; // 10Hz (default)
			static const uint8_t ODR_20_Hz = 0b01; // 20Hz
			static const uint8_t ODR_50_Hz = 0b10; // 50Hz
			static const uint8_t ODR_100_Hz = 0b11; // 100Hz
		};
		/* Bits MD: */
		/* These bits select the mode of operation of the device (see Table 26: Mode of operation).  */
		struct MD
		{
			static const uint8_t dflt = 0b11; // 2'b11
			static const uint8_t mask = 0b00000011; // [0,1]
			/*
			 * Continuous mode. In continuous mode the device continuously performs
			 * measurements and places the result in the data register. The data-ready
			 * signal is generated when a new data set is ready to be read. This signal can be available on the external
			 * pin by setting the DRDY_on_PIN bit in CFG_REG_C (62h).
			 */
			static const uint8_t CONTINUOUS_MODE = 0b00;
			static const uint8_t SINGLE_MODE = 0b01; // Single mode. When single mode is selected, the device performs a single measurement, sets DRDY high and returns to idle mode. Mode register return to idle mode bit values. §
			static const uint8_t IDLE_MODE = 0b10; // Idle mode. Device is placed in idle mode. I2C and SPI active.
			static const uint8_t IDLE_MODE2 = 0b11; // Idle mode. Device is placed in idle mode. I2C and SPI active (default).
		};
	};
	
	/* Set register CFG_REG_A */
	void setCFG_REG_A(uint8_t value)
	{
		write(CFG_REG_A::__address, value, 8);
	}
	
	/* Get register CFG_REG_A */
	uint8_t getCFG_REG_A()
	{
		return read8(CFG_REG_A::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CFG_REG_B                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CFG_REG_B:
	 * 8.6
	 */
	struct CFG_REG_B
	{
		static const uint16_t __address = 97;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits OFF_CANC_ONE_SHOT: */
		/*
		 * Enables offset cancellation in single measurement mode. The OFF_CANC bit must be set to 1 when enabling
		 * offset cancellation in single measurement mode.
		 */
		struct OFF_CANC_ONE_SHOT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DISABLED = 0b0; // offset cancellation in single measurement mode disabled
			static const uint8_t ENABLED = 0b1; // offset cancellation in single measurement mode enabled
		};
		/* Bits INT_on_DataOFF: */
		/*
		 * If ‘1’, the interrupt block recognition checks data after the hard-iron correction to discover
		 * the interrupt.
		 */
		struct INT_on_DataOFF
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits Set_FREQ: */
		/* Selects the frequency of the set pulse.  */
		struct Set_FREQ
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t EVERY_63 = 0b0; // set pulse is released every 63 ODR
			static const uint8_t AT_POWER_ON = 0b1; // set pulse is released only at power-on after PD condition
		};
		/* Bits OFF_CANC: */
		/* Enables offset cancellation.  */
		struct OFF_CANC
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t DISABLED = 0b0; // offset cancellation disabled
			static const uint8_t ENABLED = 0b1; // offset cancellation enabled
		};
		/* Bits LPF: */
		/* Enables low-pass filter (see Table 29).  */
		struct LPF
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t DISABLED = 0b0; // digital filter disabled, BW ODR/2Hz
			static const uint8_t ENABLED = 0b1; // digital filter enabled, BW ODR/4Hz
		};
	};
	
	/* Set register CFG_REG_B */
	void setCFG_REG_B(uint8_t value)
	{
		write(CFG_REG_B::__address, value, 8);
	}
	
	/* Get register CFG_REG_B */
	uint8_t getCFG_REG_B()
	{
		return read8(CFG_REG_B::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CFG_REG_C                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CFG_REG_C:
	 * 8.7
	 */
	struct CFG_REG_C
	{
		static const uint16_t __address = 98;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits INT_on_PIN: */
		/*
		 * If '1', the INTERRUPT signal (INT bit in INT_SOURCE_REG (64h)) is driven
		 * on the INT/DRDY pin. The INT/DRDY pin is configured in push-pull output mode.
		 */
		struct INT_on_PIN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits I2C_DIS: */
		/* If ‘1’, the I2C interface is inhibited. Only the SPI interface can be used.  */
		struct I2C_DIS
		{
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits BDU: */
		/*
		 * If enabled, reading of incorrect data is avoided when the user reads asynchro­ nously.
		 * In fact if the read request arrives during an update of the output data, a latch is possible,
		 * reading incoherent high and low parts of the same register. Only one part is updated and the other
		 * one remains old.
		 */
		struct BDU
		{
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits BLE: */
		/* If ‘1’, an inversion of the low and high parts of the data occurs.  */
		struct BLE
		{
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits reserved_1: */
		/* This bit must be set to ‘0’ for the correct operation of the device.  */
		struct reserved_1
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits Self_test: */
		/* If ‘1’, the self-test is enabled.  */
		struct Self_test
		{
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits DRDY_on_PIN: */
		/*
		 * If '1', the data-ready signal (Zyxda bit in STATUS_REG (67h)) is driven on the INT/DRDY pin.
		 * The INT/DRDY pin is configured in push-pull output mode.
		 */
		struct DRDY_on_PIN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register CFG_REG_C */
	void setCFG_REG_C(uint8_t value)
	{
		write(CFG_REG_C::__address, value, 8);
	}
	
	/* Get register CFG_REG_C */
	uint8_t getCFG_REG_C()
	{
		return read8(CFG_REG_C::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG INT_CTRL_REG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG INT_CTRL_REG:
	 * 8.8
	 * The interrupt control register is used to enable and to configure the interrupt recognition.
	 */
	struct INT_CTRL_REG
	{
		static const uint16_t __address = 99;
		
		/* Bits XIEN: */
		struct XIEN
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t DISABLED = 0b0; // 
			static const uint8_t ENABLED = 0b1; // 
		};
		/* Bits YIEN: */
		struct YIEN
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t DISABLED = 0b0; // 
			static const uint8_t ENABLED = 0b1; // 
		};
		/* Bits ZIEN: */
		struct ZIEN
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t DISABLED = 0b0; // 
			static const uint8_t ENABLED = 0b1; // 
		};
		/* Bits reserved_0: */
		/* This bit must be set to ‘0’ for the correct operation of the device.  */
		struct reserved_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00011000; // [3,4]
		};
		/* Bits IEA: */
		/*
		 * Controls the polarity of the INT bit (INT_SOURCE_REG (64h)) when an interrupt occurs.
		 * If IEA = 0, then INT = 0 signals an interrupt. If IEA = 1, then INT = 1 signals an interrupt.
		 */
		struct IEA
		{
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits IEL: */
		/*
		 * Controls whether the INT bit (INT_SOURCE_REG (64h)) is latched or pulsed.
		 * If IEL = 0, then INT is pulsed. If IEL = 1, then INT is latched.
		 * Once latched, INT remains in the same state until INT_SOURCE_REG (64h) is read.
		 */
		struct IEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t PULSED = 0b0; // 
			static const uint8_t LATCHED = 0b1; // 
		};
		/* Bits IEN: */
		/* Interrupt enable. When set, enables the interrupt generation. The INT bit is in INT_SOURCE_REG (64h).  */
		struct IEN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t DISABLED = 0b0; // 
			static const uint8_t ENABLED = 0b1; // 
		};
	};
	
	/* Set register INT_CTRL_REG */
	void setINT_CTRL_REG(uint8_t value)
	{
		write(INT_CTRL_REG::__address, value, 8);
	}
	
	/* Get register INT_CTRL_REG */
	uint8_t getINT_CTRL_REG()
	{
		return read8(INT_CTRL_REG::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG INT_SOURCE_REG                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG INT_SOURCE_REG:
	 * 8.9
	 * When interrupt latched is selected, reading this register resets all the bits in this register.
	 */
	struct INT_SOURCE_REG
	{
		static const uint16_t __address = 100;
		
		/* Bits P_TH_S_X: */
		/* X-axis value exceeds the threshold positive side  */
		struct P_TH_S_X
		{
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits P_TH_S_Y: */
		/* Y-axis value exceeds the threshold positive side  */
		struct P_TH_S_Y
		{
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits P_TH_S_Z: */
		/* Z-axis value exceeds the threshold positive side  */
		struct P_TH_S_Z
		{
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits N_TH_S_X: */
		/* X-axis value exceeds the threshold negative side  */
		struct N_TH_S_X
		{
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits N_TH_S_Y: */
		/* Y-axis value exceeds the threshold negative side   */
		struct N_TH_S_Y
		{
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits N_TH_S_Z: */
		/* Z-axis value exceeds the threshold negative side  */
		struct N_TH_S_Z
		{
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits MROI: */
		/*
		 * MROI flag generation is alway enabled.This flag is reset by reading
		 * INT_SOURCE_REG (64h).
		 */
		struct MROI
		{
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits INT: */
		/* This bit signals when the interrupt event occurs.  */
		struct INT
		{
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register INT_SOURCE_REG */
	void setINT_SOURCE_REG(uint8_t value)
	{
		write(INT_SOURCE_REG::__address, value, 8);
	}
	
	/* Get register INT_SOURCE_REG */
	uint8_t getINT_SOURCE_REG()
	{
		return read8(INT_SOURCE_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG INT_THS_L_REG                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG INT_THS_L_REG:
	 * 8.10-11
	 * These registers set the threshold value for the output to generate the interrupt (INT bit in
	 * INT_SOURCE_REG (64h)). This threshold is common to all three (axes) output values and is
	 * unsigned unipolar. The threshold value is correlated to the current gain and it is unsigned
	 * because the threshold is considered as an absolute value, but crossing the threshold is detected
	 * for both positive and negative sides.
	 */
	struct INT_THS_L_REG
	{
		static const uint16_t __address = 101;
		
		/* Bits INT_THS_L_REG: */
		struct INT_THS_L_REG_
		{
			/* Mode:rw */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register INT_THS_L_REG */
	void setINT_THS_L_REG(uint16_t value)
	{
		write(INT_THS_L_REG::__address, value, 16);
	}
	
	/* Get register INT_THS_L_REG */
	uint16_t getINT_THS_L_REG()
	{
		return read16(INT_THS_L_REG::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG STATUS_REG                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG STATUS_REG:
	 * 8.12
	 * The status register is an 8-bit read-only register. This register is used to indicate device status.
	 */
	struct STATUS_REG
	{
		static const uint16_t __address = 103;
		
		/* Bits Zyxor: */
		/* X-, Y- and Z-axis data overrun.  */
		struct Zyxor
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t DATA_OVERWRITTEN = 0b1; // a new set of data has overwritten the previous set
		};
		/* Bits zor: */
		/* Z-axis data overrun.  */
		struct zor
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t DATA_OVERWRITTEN = 0b1; // new data for the Z-axis has overwritten the previous data
		};
		/* Bits yor: */
		/* Y-axis data overrun.  */
		struct yor
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t DATA_OVERWRITTEN = 0b1; // new data for the Y-axis has overwritten the previous data
		};
		/* Bits xor_: */
		/* X-axis data overrun.  */
		struct xor_
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t DATA_OVERWRITTEN = 0b1; // new data for the X-axis has overwritten the previous data
		};
		/* Bits Zyxda: */
		/* X-, Y- and Z-axis new data available.  */
		struct Zyxda
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t NO_DATA = 0b0; // a new set of data is not yet available
			static const uint8_t DATA = 0b1; // a new set of data is available
		};
		/* Bits zda: */
		/* Z-axis new data available.  */
		struct zda
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t NO_DATA = 0b0; // a new data for the Z-axis is not yet available
			static const uint8_t DATA = 0b1; // a new data for the Z-axis is available
		};
		/* Bits yda: */
		/* Y-axis new data available.  */
		struct yda
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t NO_DATA = 0b0; // a new data for the Y-axis is not yet available
			static const uint8_t DATA = 0b1; // a new data for the Y-axis is available
		};
		/* Bits xda: */
		/* X-axis new data available.  */
		struct xda
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t NO_DATA = 0b0; // a new data for the X-axis is not yet available
			static const uint8_t DATA = 0b1; // a new data for the X-axis is available
		};
	};
	
	/* Set register STATUS_REG */
	void setSTATUS_REG(uint8_t value)
	{
		write(STATUS_REG::__address, value, 8);
	}
	
	/* Get register STATUS_REG */
	uint8_t getSTATUS_REG()
	{
		return read8(STATUS_REG::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG OUTX                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG OUTX:
	 * 8.13
	 * The data output X registers are two 8-bit registers, data output X MSB register (69h) and output X LSB register (68h).
	 * The output data represents the raw magnetic data only if OFFSET_X_REG is equal to zero, otherwise hard-iron calibration is included.
	 * The value of the magnetic field is expressed in two’s complement. This register contains the
	 * X component of the magnetic data.
	 */
	struct OUTX
	{
		static const uint16_t __address = 104;
		
		/* Bits OUTX: */
		struct OUTX_
		{
			/* Mode:r */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register OUTX */
	void setOUTX(uint16_t value)
	{
		write(OUTX::__address, value, 16);
	}
	
	/* Get register OUTX */
	uint16_t getOUTX()
	{
		return read16(OUTX::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG OUTY                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG OUTY:
	 * 8.14
	 * The data output Y registers are two 8-bit registers, data output Y MSB register (6Bh) and output Y LSB register (6Ah).
	 * The output data represents the raw magnetic data only if OFFSET_Y_REG is equal to zero, otherwise hard-iron calibration is included.
	 * The value of the magnetic field is expressed in two’s complement. This register contains the
	 * Y component of the magnetic data.
	 */
	struct OUTY
	{
		static const uint16_t __address = 106;
		
		/* Bits OUTY: */
		struct OUTY_
		{
			/* Mode:r */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register OUTY */
	void setOUTY(uint16_t value)
	{
		write(OUTY::__address, value, 16);
	}
	
	/* Get register OUTY */
	uint16_t getOUTY()
	{
		return read16(OUTY::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG OUTZ                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG OUTZ:
	 * 8.15
	 * The data output Z registers are two 8-bit registers, data output Z MSB register (6Bh) and output Z LSB register (6Ah).
	 * The output data represents the raw magnetic data only if OFFSET_Z_REG is equal to zero, otherwise hard-iron calibration is included.
	 * The value of the magnetic field is expressed in two’s complement. This register contains the
	 * Z component of the magnetic data.
	 */
	struct OUTZ
	{
		static const uint16_t __address = 108;
		
		/* Bits OUTZ: */
		struct OUTZ_
		{
			/* Mode:r */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register OUTZ */
	void setOUTZ(uint16_t value)
	{
		write(OUTZ::__address, value, 16);
	}
	
	/* Get register OUTZ */
	uint16_t getOUTZ()
	{
		return read16(OUTZ::__address, 16);
	}
	
};
