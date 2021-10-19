
#ifndef _RTC_RV3032_H_
#define _RTC_RV3032_H_

#include <stdint.h>

/* Registers of the RV-3032-C7 */
#define R_RV3032_100TH_SECONDS	0x00
#define R_RV3032_SECONDS		0x01
#define R_RV3032_MINUTES		0x02
#define R_RV3032_HOURS			0x03
#define R_RV3032_WEEKDAY		0x04
#define R_RV3032_DATE			0x05
#define R_RV3032_MONTH			0x06
#define R_RV3032_YEAR			0x07
#define R_RV3032_MIN_ALARM		0x08
#define R_RV3032_MIN_ALARM_AE_M		0x80
#define R_RV3032_HOUR_ALARM		0x09
#define R_RV3032_HOUR_ALARM_AE_H	0x80
#define R_RV3032_DATE_ALARM		0x0A
#define R_RV3032_DATE_ALARM_AE_D	0x80
#define R_RV3032_TIMER_VALUE_0	0x0B
#define R_RV3032_TIMER_VALUE_1	0x0C
#define R_RV3032_STATUS			0x0D
#define R_RV3032_STATUS_THX			0x80
#define R_RV3032_STATUS_TLF			0x40
#define R_RV3032_STATUS_UF			0x20
#define R_RV3032_STATUS_TF			0x10
#define R_RV3032_STATUS_AF			0x08
#define R_RV3032_STATUS_EVF			0x04
#define R_RV3032_STATUS_PORF		0x02
#define R_RV3032_STATUS_VLF			0x01
#define R_RV3032_TEMPERATURE_L	0x0E
#define R_RV3032_TEMPERATURE_L_EEF		0x08
#define R_RV3032_TEMPERATURE_L_EEBUSY	0x04
#define R_RV3032_TEMPERATURE_L_CLKF		0x02
#define R_RV3032_TEMPERATURE_L_BSF		0x01
#define R_RV3032_TEMPERATURE_H	0x0F
#define R_RV3032_CONTROL_1		0x10
#define R_RV3032_CONTROL_1_x		0x20
#define R_RV3032_CONTROL_1_USEL		0x10
#define R_RV3032_CONTROL_1_TE		0x08
#define R_RV3032_CONTROL_1_EERD		0x04
#define R_RV3032_CONTROL_1_TD1		0x02
#define R_RV3032_CONTROL_1_TD0		0x01
#define R_RV3032_CONTROL_2		0x11
#define R_RV3032_CONTROL_2_CLKIE	0x40
#define R_RV3032_CONTROL_2_UIE		0x20
#define R_RV3032_CONTROL_2_TIE		0x10
#define R_RV3032_CONTROL_2_AIE		0x08
#define R_RV3032_CONTROL_2_EIE		0x04
#define R_RV3032_CONTROL_2_X		0x02
#define R_RV3032_CONTROL_2_STOP		0x01
#define R_RV3032_CONTROL_3		0x12
#define R_RV3032_CONTROL_3_BSIE		0x10
#define R_RV3032_CONTROL_3_THE		0x08
#define R_RV3032_CONTROL_3_TLE		0x04
#define R_RV3032_CONTROL_3_THIE		0x02
#define R_RV3032_CONTROL_3_TLIE		0x01
#define R_RV3032_TIMESTAMP_CTRL	0x13
#define R_RV3032_TIMESTAMP_CTRL_EVR		0x20
#define R_RV3032_TIMESTAMP_CTRL_THR		0x10
#define R_RV3032_TIMESTAMP_CTRL_TLR		0x08
#define R_RV3032_TIMESTAMP_CTRL_EVOW	0x04
#define R_RV3032_TIMESTAMP_CTRL_THOW	0x02
#define R_RV3032_TIMESTAMP_CTRL_TLIE	0x01
#define R_RV3032_COCK_INT_MASK	0x14
#define R_RV3032_COCK_INT_MASK_CLKD		0x80
#define R_RV3032_COCK_INT_MASK_INTDE	0x40
#define R_RV3032_COCK_INT_MASK_CEIE		0x20
#define R_RV3032_COCK_INT_MASK_CAIE		0x10
#define R_RV3032_COCK_INT_MASK_CTIE		0x08
#define R_RV3032_COCK_INT_MASK_CUIE		0x04
#define R_RV3032_COCK_INT_MASK_CTHIE	0x02
#define R_RV3032_COCK_INT_MASK_CTLIE	0x01
#define R_RV3032_EVI_CONTROL	0x15
#define R_RV3032_EVI_CONTROL_CLKDE		0x80
#define R_RV3032_EVI_CONTROL_EHL		0x40
#define R_RV3032_EVI_CONTROL_ET1		0x20
#define R_RV3032_EVI_CONTROL_ET0		0x10
#define R_RV3032_EVI_CONTROL_ESYN		0x01
#define R_RV3032_TLOW_THRESHLD	0x16
#define R_RV3032_THIGH_THRESHLD	0x17
#define R_RV3032_TS_TLOW_COUNT	0x18
#define R_RV3032_TS_TLOW_SEC	0x19
#define R_RV3032_TS_TLOW_MIN	0x1A
#define R_RV3032_TS_TLOW_HOUR	0x1B
#define R_RV3032_TS_TLOW_DATE	0x1C
#define R_RV3032_TS_TLOW_MONTH	0x1D
#define R_RV3032_TS_TLOW_YEAR	0x1E
#define R_RV3032_TS_THIGH_COUNT	0x1F
#define R_RV3032_TS_THIGH_SEC	0x20
#define R_RV3032_TS_THIGH_MIN	0x21
#define R_RV3032_TS_THIGH_HOUR	0x22
#define R_RV3032_TS_THIGH_DATE	0x23
#define R_RV3032_TS_THIGH_MONTH	0x24
#define R_RV3032_TS_THIGH_YEAR	0x25
#define R_RV3032_TS_EVI_COUNT	0x26
#define R_RV3032_TS_EVI_100THS	0x27
#define R_RV3032_TS_EVI_SEC		0x28
#define R_RV3032_TS_EVI_MIN		0x29
#define R_RV3032_TS_EVI_HOUR	0x2A
#define R_RV3032_TS_EVI_DATE	0x2B
#define R_RV3032_TS_EVI_MONTH	0x2C
#define R_RV3032_TS_EVI_YEAR	0x2D
#define R_RV3032_PASSWORD_0		0x39
#define R_RV3032_PASSWORD_1		0x3A
#define R_RV3032_PASSWORD_2		0x3B
#define R_RV3032_PASSWORD_3		0x3C
#define R_RV3032_EE_ADDRESS		0x3D
#define R_RV3032_EE_DATA		0x3E
#define R_RV3032_EE_COMMAND		0x3F
#define R_RV3032_USER_RAM_START	0x40
#define R_RV3032_USER_RAM_END	0x4F

enum RV3032_ERROR{
	RV3032_NO_ERRORS	= 0,
	RV3032_IOERRORS		= 1
};

typedef struct {
	enum RV3032_ERROR errors;
	void *ioInterface;					// InterfacePointer of the IO/Interface Library
	uint8_t (*startTransaction)(void*);	// Prepare the IO/Peripheral Interface for a transaction
	uint8_t (*sendBytes)(void*,			// Send data to the interface: InterfacePointer
						uint8_t,		// I2C Address of the PWM chip (8-Bit format!)
						uint8_t*,		// Pointer to the buffer to send
						uint16_t);		// length of the buffer
	uint8_t (*getBytes)(void*,			// Get data from the interface: InterfacePointer
						uint8_t,		// I2C Address of the PWM chip (8-Bit format!)
						uint8_t*,		// Pointer to the buffer to receive
						uint16_t);		// length of the buffer
	uint8_t (*endTransaction)(void*);	// Finish the transaction & release the IO / Peripheral
}RV3032_t;

typedef struct {
	uint8_t hSeconds;	// 100th seconds - 0 to 99
	uint8_t seconds;
	uint8_t minutes;
	uint8_t hours;
	uint8_t weekday;
	uint8_t date;
	uint8_t month;
	uint8_t year;
}RV3032_TIME_t;

enum RV3032_EEPROM_OPTION{
	RV3032_EEPROM_SAFE_SETTINGS,
	RV3032_NO_EEPROM_SAVING,
	RV3032_NO_EEPROM_DISABLE_REFRESH
};

enum RV3032_CLKOUT{
	RV3032_DISABLE_CLKOUT,
	RV3032_XTAL_32KHZ_OUT,
	RV3032_XTAL_1024HZ_OUT,
	RV3032_XTAL_64HZ_OUT,
	RV3032_XTAL_1HZ_OUT,
	RV3032_HF_MODE
};

uint8_t rv3032_init(RV3032_t *rtc, uint8_t (*startTrans)(void*), uint8_t (*sendBytes)(void*,uint8_t,uint8_t*,uint16_t),uint8_t (*getBytes)(void*,uint8_t,uint8_t*,uint16_t),uint8_t (*endTrans)(void*));

void rv3032_writeReg(RV3032_t *rtc, uint8_t reg_addr, uint8_t reg_val);

uint8_t rv3032_readReg(RV3032_t *rtc, uint8_t reg_addr);

enum RV3032_ERROR rv3032_setTime(RV3032_t *rtc, RV3032_TIME_t *time);

enum RV3032_ERROR rv3032_getTime(RV3032_t *rtc, RV3032_TIME_t *time);

float rv3032_getTemperature(RV3032_t *rtc);

void rv3032_configureClockOut(RV3032_t *rtc, enum RV3032_CLKOUT clockOut, uint16_t hfClock_steps, enum RV3032_EEPROM_OPTION eeOption);

/* _RTC_RV3032_H_ */
#endif