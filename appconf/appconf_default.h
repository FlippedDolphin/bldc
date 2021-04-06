/*
	Copyright 2016 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef APPCONF_DEFAULT_H_
#define APPCONF_DEFAULT_H_

// Default app configuration
#ifndef APPCONF_CONTROLLER_ID
#define APPCONF_CONTROLLER_ID				-1 // Controller id. -1 means it should be calculated from UUID.
#endif
#ifndef APPCONF_TIMEOUT_MSEC
#define APPCONF_TIMEOUT_MSEC				1000
#endif
#ifndef APPCONF_TIMEOUT_BRAKE_CURRENT
#define APPCONF_TIMEOUT_BRAKE_CURRENT		0.0
#endif
#ifndef APPCONF_SEND_CAN_STATUS
#define APPCONF_SEND_CAN_STATUS				CAN_STATUS_DISABLED
#endif
#ifndef APPCONF_CAN_MODE
#define APPCONF_CAN_MODE					CAN_MODE_VESC
#endif
#ifndef APPCONF_UAVCAN_ESC_INDEX
#define APPCONF_UAVCAN_ESC_INDEX			0
#endif
#ifndef APPCONF_UAVCAN_RAW_MODE
#define APPCONF_UAVCAN_RAW_MODE				UAVCAN_RAW_MODE_CURRENT
#endif
#ifndef APPCONF_SERVO_OUT_ENABLE
#define APPCONF_SERVO_OUT_ENABLE			false
#endif
#ifndef APPCONF_SEND_CAN_STATUS_RATE_HZ
#define APPCONF_SEND_CAN_STATUS_RATE_HZ		50
#endif
#ifndef APPCONF_CAN_BAUD_RATE
#define APPCONF_CAN_BAUD_RATE				CAN_BAUD_500K
#endif
#ifndef APPCONF_PAIRING_DONE
#define APPCONF_PAIRING_DONE				false
#endif
#ifndef APPCONF_PERMANENT_UART_ENABLED
#define APPCONF_PERMANENT_UART_ENABLED		true
#endif
#ifndef APPCONF_SHUTDOWN_MODE
#define APPCONF_SHUTDOWN_MODE				SHUTDOWN_MODE_OFF_AFTER_30M
#endif

// The default app is UART in case the UART port is used for
// firmware updates.
#ifndef APPCONF_APP_TO_USE
#define APPCONF_APP_TO_USE					APP_UART
#endif

// PPM app configureation
#ifndef APPCONF_PPM_CTRL_TYPE
#define APPCONF_PPM_CTRL_TYPE				PPM_CTRL_TYPE_NONE
#endif
#ifndef APPCONF_PPM_PID_MAX_ERPM
#define APPCONF_PPM_PID_MAX_ERPM			15000
#endif
#ifndef APPCONF_PPM_HYST
#define APPCONF_PPM_HYST					0.15
#endif
#ifndef APPCONF_PPM_PULSE_START
#define APPCONF_PPM_PULSE_START				1.0
#endif
#ifndef APPCONF_PPM_PULSE_END
#define APPCONF_PPM_PULSE_END				2.0
#endif
#ifndef APPCONF_PPM_PULSE_CENTER
#define APPCONF_PPM_PULSE_CENTER			1.5
#endif
#ifndef APPCONF_PPM_MEDIAN_FILTER
#define APPCONF_PPM_MEDIAN_FILTER			true
#endif
#ifndef APPCONF_PPM_SAFE_START
#define APPCONF_PPM_SAFE_START				true
#endif
#ifndef APPCONF_PPM_THROTTLE_EXP
#define APPCONF_PPM_THROTTLE_EXP			0.0
#endif
#ifndef APPCONF_PPM_THROTTLE_EXP_BRAKE
#define APPCONF_PPM_THROTTLE_EXP_BRAKE		0.0
#endif
#ifndef APPCONF_PPM_THROTTLE_EXP_MODE
#define APPCONF_PPM_THROTTLE_EXP_MODE		THR_EXP_POLY
#endif
#ifndef APPCONF_PPM_RAMP_TIME_POS
#define APPCONF_PPM_RAMP_TIME_POS			0.4
#endif
#ifndef APPCONF_PPM_RAMP_TIME_NEG
#define APPCONF_PPM_RAMP_TIME_NEG			0.2
#endif
#ifndef APPCONF_PPM_MULTI_ESC
#define APPCONF_PPM_MULTI_ESC				true
#endif
#ifndef APPCONF_PPM_TC
#define APPCONF_PPM_TC						false
#endif
#ifndef APPCONF_PPM_TC_MAX_DIFF
#define APPCONF_PPM_TC_MAX_DIFF				3000.0
#endif
#ifndef APPCONF_PPM_MAX_ERPM_FOR_DIR
#define APPCONF_PPM_MAX_ERPM_FOR_DIR		4000.0
#endif
#ifndef APPCONF_PPM_SMART_REV_MAX_DUTY
#define APPCONF_PPM_SMART_REV_MAX_DUTY		0.07
#endif
#ifndef APPCONF_PPM_SMART_REV_RAMP_TIME
#define APPCONF_PPM_SMART_REV_RAMP_TIME		3.0
#endif


// ADC app configureation
#ifndef APPCONF_ADC_CTRL_TYPE
#define APPCONF_ADC_CTRL_TYPE				ADC_CTRL_TYPE_NONE
#endif
#ifndef APPCONF_ADC_HYST
#define APPCONF_ADC_HYST					0.15
#endif
#ifndef APPCONF_ADC_VOLTAGE_START
#define APPCONF_ADC_VOLTAGE_START			0.9
#endif
#ifndef APPCONF_ADC_VOLTAGE_END
#define APPCONF_ADC_VOLTAGE_END				3.0
#endif
#ifndef APPCONF_ADC_VOLTAGE_CENTER
#define APPCONF_ADC_VOLTAGE_CENTER			2.0
#endif
#ifndef APPCONF_ADC_VOLTAGE2_START
#define APPCONF_ADC_VOLTAGE2_START			0.9
#endif
#ifndef APPCONF_ADC_VOLTAGE2_END
#define APPCONF_ADC_VOLTAGE2_END			3.0
#endif
#ifndef APPCONF_ADC_USE_FILTER
#define APPCONF_ADC_USE_FILTER				true
#endif
#ifndef APPCONF_ADC_SAFE_START
#define APPCONF_ADC_SAFE_START				true
#endif
#ifndef APPCONF_ADC_CC_BUTTON_INVERTED
#define APPCONF_ADC_CC_BUTTON_INVERTED		false
#endif
#ifndef APPCONF_ADC_REV_BUTTON_INVERTED
#define APPCONF_ADC_REV_BUTTON_INVERTED		false
#endif
#ifndef APPCONF_ADC_VOLTAGE_INVERTED
#define APPCONF_ADC_VOLTAGE_INVERTED		false
#endif
#ifndef APPCONF_ADC_VOLTAGE2_INVERTED
#define APPCONF_ADC_VOLTAGE2_INVERTED		false
#endif
#ifndef APPCONF_ADC_THROTTLE_EXP
#define APPCONF_ADC_THROTTLE_EXP			0.0
#endif
#ifndef APPCONF_ADC_THROTTLE_EXP_BRAKE
#define APPCONF_ADC_THROTTLE_EXP_BRAKE		0.0
#endif
#ifndef APPCONF_ADC_THROTTLE_EXP_MODE
#define APPCONF_ADC_THROTTLE_EXP_MODE		THR_EXP_POLY
#endif
#ifndef APPCONF_ADC_RAMP_TIME_POS
#define APPCONF_ADC_RAMP_TIME_POS			0.3
#endif
#ifndef APPCONF_ADC_RAMP_TIME_NEG
#define APPCONF_ADC_RAMP_TIME_NEG			0.1
#endif
#ifndef APPCONF_ADC_MULTI_ESC
#define APPCONF_ADC_MULTI_ESC				true
#endif
#ifndef APPCONF_ADC_TC
#define APPCONF_ADC_TC						false
#endif
#ifndef APPCONF_ADC_TC_MAX_DIFF
#define APPCONF_ADC_TC_MAX_DIFF				3000.0
#endif
#ifndef APPCONF_ADC_UPDATE_RATE_HZ
#define APPCONF_ADC_UPDATE_RATE_HZ			500
#endif

// UART app
#ifndef APPCONF_UART_BAUDRATE
#define APPCONF_UART_BAUDRATE				115200
#endif

// Nunchuk app
#ifndef APPCONF_CHUK_CTRL_TYPE
#define APPCONF_CHUK_CTRL_TYPE				CHUK_CTRL_TYPE_CURRENT
#endif
#ifndef APPCONF_CHUK_HYST
#define APPCONF_CHUK_HYST					0.15
#endif
#ifndef APPCONF_CHUK_RAMP_TIME_POS
#define APPCONF_CHUK_RAMP_TIME_POS			0.4
#endif
#ifndef APPCONF_CHUK_RAMP_TIME_NEG
#define APPCONF_CHUK_RAMP_TIME_NEG			0.2
#endif
#ifndef APPCONF_STICK_ERPM_PER_S_IN_CC
#define APPCONF_STICK_ERPM_PER_S_IN_CC		3000.0
#endif
#ifndef APPCONF_CHUK_THROTTLE_EXP
#define APPCONF_CHUK_THROTTLE_EXP			0.0
#endif
#ifndef APPCONF_CHUK_THROTTLE_EXP_BRAKE
#define APPCONF_CHUK_THROTTLE_EXP_BRAKE		0.0
#endif
#ifndef APPCONF_CHUK_THROTTLE_EXP_MODE
#define APPCONF_CHUK_THROTTLE_EXP_MODE		THR_EXP_POLY
#endif
#ifndef APPCONF_CHUK_MULTI_ESC
#define APPCONF_CHUK_MULTI_ESC				true
#endif
#ifndef APPCONF_CHUK_TC
#define APPCONF_CHUK_TC						false
#endif
#ifndef APPCONF_CHUK_TC_MAX_DIFF
#define APPCONF_CHUK_TC_MAX_DIFF			3000.0
#endif
#ifndef APPCONF_CHUK_USE_SMART_REV
#define APPCONF_CHUK_USE_SMART_REV			true
#endif
#ifndef APPCONF_CHUK_SMART_REV_MAX_DUTY
#define APPCONF_CHUK_SMART_REV_MAX_DUTY		0.07
#endif
#ifndef APPCONF_CHUK_SMART_REV_RAMP_TIME
#define APPCONF_CHUK_SMART_REV_RAMP_TIME	3.0
#endif

// NRF app
#ifndef APPCONF_NRF_SPEED
#define APPCONF_NRF_SPEED					NRF_SPEED_1M
#endif
#ifndef APPCONF_NRF_POWER
#define APPCONF_NRF_POWER					NRF_POWER_0DBM
#endif
#ifndef APPCONF_NRF_CRC
#define APPCONF_NRF_CRC						NRF_CRC_1B
#endif
#ifndef APPCONF_NRF_RETR_DELAY
#define APPCONF_NRF_RETR_DELAY				NRF_RETR_DELAY_250US
#endif
#ifndef APPCONF_NRF_RETRIES
#define APPCONF_NRF_RETRIES					3
#endif
#ifndef APPCONF_NRF_CHANNEL
#define APPCONF_NRF_CHANNEL					76
#endif
#ifndef APPCONF_NRF_ADDR_B0
#define APPCONF_NRF_ADDR_B0					0xC6
#endif
#ifndef APPCONF_NRF_ADDR_B1
#define APPCONF_NRF_ADDR_B1					0xC7
#endif
#ifndef APPCONF_NRF_ADDR_B2
#define APPCONF_NRF_ADDR_B2					0x0
#endif
#ifndef APPCONF_NRF_SEND_CRC_ACK
#define APPCONF_NRF_SEND_CRC_ACK			true
#endif

// Balance app
#ifndef APPCONF_BALANCE_KP
#define APPCONF_BALANCE_KP							0.0
#endif
#ifndef APPCONF_BALANCE_KI
#define APPCONF_BALANCE_KI							0.0
#endif
#ifndef APPCONF_BALANCE_KD
#define APPCONF_BALANCE_KD							0.0
#endif
#ifndef APPCONF_BALANCE_HERTZ
#define APPCONF_BALANCE_HERTZ 						1000
#endif
#ifndef APPCONF_BALANCE_FAULT_PITCH
#define APPCONF_BALANCE_FAULT_PITCH 				20
#endif
#ifndef APPCONF_BALANCE_FAULT_ROLL
#define APPCONF_BALANCE_FAULT_ROLL  				45
#endif
#ifndef APPCONF_BALANCE_FAULT_DUTY
#define APPCONF_BALANCE_FAULT_DUTY  				0.9
#endif
#ifndef APPCONF_BALANCE_FAULT_ADC1
#define APPCONF_BALANCE_FAULT_ADC1  				0.0
#endif
#ifndef APPCONF_BALANCE_FAULT_ADC2
#define APPCONF_BALANCE_FAULT_ADC2  				0.0
#endif
#ifndef APPCONF_BALANCE_FAULT_DELAY_PITCH
#define APPCONF_BALANCE_FAULT_DELAY_PITCH 			0
#endif
#ifndef APPCONF_BALANCE_FAULT_DELAY_ROLL
#define APPCONF_BALANCE_FAULT_DELAY_ROLL 			0
#endif
#ifndef APPCONF_BALANCE_FAULT_DELAY_DUTY
#define APPCONF_BALANCE_FAULT_DELAY_DUTY 			0
#endif
#ifndef APPCONF_BALANCE_FAULT_DELAY_SWITCH_HALF
#define APPCONF_BALANCE_FAULT_DELAY_SWITCH_HALF		0
#endif
#ifndef APPCONF_BALANCE_FAULT_DELAY_SWITCH_FULL
#define APPCONF_BALANCE_FAULT_DELAY_SWITCH_FULL 	0
#endif
#ifndef APPCONF_BALANCE_FAULT_ADC_HALF_ERPM
#define APPCONF_BALANCE_FAULT_ADC_HALF_ERPM 		1000
#endif
#ifndef APPCONF_BALANCE_TILTBACK_ANGLE
#define APPCONF_BALANCE_TILTBACK_ANGLE 				15.0
#endif
#ifndef APPCONF_BALANCE_TILTBACK_SPEED
#define APPCONF_BALANCE_TILTBACK_SPEED 				5.0
#endif
#ifndef APPCONF_BALANCE_TILTBACK_DUTY
#define APPCONF_BALANCE_TILTBACK_DUTY  				0.75
#endif
#ifndef APPCONF_BALANCE_TILTBACK_HIGH_V
#define APPCONF_BALANCE_TILTBACK_HIGH_V 			200.0
#endif
#ifndef APPCONF_BALANCE_TILTBACK_LOW_V
#define APPCONF_BALANCE_TILTBACK_LOW_V	 			0.0
#endif
#ifndef APPCONF_BALANCE_TILTBACK_CONSTANT
#define APPCONF_BALANCE_TILTBACK_CONSTANT 			0.0
#endif
#ifndef APPCONF_BALANCE_TILTBACK_CONSTANT_ERPM
#define APPCONF_BALANCE_TILTBACK_CONSTANT_ERPM 		500
#endif
#ifndef APPCONF_BALANCE_STARTUP_PITCH_TOLERANCE
#define APPCONF_BALANCE_STARTUP_PITCH_TOLERANCE 	20.0
#endif
#ifndef APPCONF_BALANCE_STARTUP_ROLL_TOLERANCE
#define APPCONF_BALANCE_STARTUP_ROLL_TOLERANCE		 8.0
#endif
#ifndef APPCONF_BALANCE_STARTUP_SPEED
#define APPCONF_BALANCE_STARTUP_SPEED 				30.0
#endif
#ifndef APPCONF_BALANCE_DEADZONE
#define APPCONF_BALANCE_DEADZONE 					0.0
#endif
#ifndef APPCONF_BALANCE_MULTI_ESC
#define APPCONF_BALANCE_MULTI_ESC  					false
#endif
#ifndef APPCONF_BALANCE_YAW_KP
#define APPCONF_BALANCE_YAW_KP	 					0.0
#endif
#ifndef APPCONF_BALANCE_YAW_KI
#define APPCONF_BALANCE_YAW_KI 						0.0
#endif
#ifndef APPCONF_BALANCE_YAW_KD
#define APPCONF_BALANCE_YAW_KD 						0.0
#endif
#ifndef APPCONF_BALANCE_ROLL_STEER_KP
#define APPCONF_BALANCE_ROLL_STEER_KP 				0.0
#endif
#ifndef APPCONF_BALANCE_ROLL_STEER_ERPM_KP
#define APPCONF_BALANCE_ROLL_STEER_ERPM_KP 			0.0
#endif
#ifndef APPCONF_BALANCE_BRAKE_CURRENT
#define APPCONF_BALANCE_BRAKE_CURRENT 				0.0
#endif
#ifndef APPCONF_BALANCE_YAW_CURRENT_CLAMP
#define APPCONF_BALANCE_YAW_CURRENT_CLAMP 			0.0
#endif
#ifndef APPCONF_BALANCE_KD_PT1_FREQUENCY
#define APPCONF_BALANCE_KD_PT1_FREQUENCY			0
#endif
#ifndef APPCONF_BALANCE_BOOSTER_ANGLE
#define APPCONF_BALANCE_BOOSTER_ANGLE				8
#endif
#ifndef APPCONF_BALANCE_BOOSTER_RAMP
#define APPCONF_BALANCE_BOOSTER_RAMP				1
#endif
#ifndef APPCONF_BALANCE_BOOSTER_CURRENT
#define APPCONF_BALANCE_BOOSTER_CURRENT				0
#endif
#ifndef APPCONF_BALANCE_TORQUETILT_START_CURRENT
#define APPCONF_BALANCE_TORQUETILT_START_CURRENT	10
#endif
#ifndef APPCONF_BALANCE_TORQUETILT_ANGLE_LIMIT
#define APPCONF_BALANCE_TORQUETILT_ANGLE_LIMIT		5
#endif
#ifndef APPCONF_BALANCE_TORQUETILT_SPEED
#define APPCONF_BALANCE_TORQUETILT_SPEED			5
#endif
#ifndef APPCONF_BALANCE_TORQUETILT_POWER
#define APPCONF_BALANCE_TORQUETILT_POWER			0.0
#endif
#ifndef APPCONF_BALANCE_TORQUETILT_FILTER
#define APPCONF_BALANCE_TORQUETILT_FILTER			0.95
#endif
#ifndef APPCONF_BALANCE_TURNTILT_POWER
#define APPCONF_BALANCE_TURNTILT_POWER				0
#endif
#ifndef APPCONF_BALANCE_TURNTILT_ANGLE_LIMIT
#define APPCONF_BALANCE_TURNTILT_ANGLE_LIMIT		5
#endif
#ifndef APPCONF_BALANCE_TURNTILT_ANGLE_CUT
#define APPCONF_BALANCE_TURNTILT_ANGLE_CUT			1
#endif
#ifndef APPCONF_BALANCE_TURNTILT_SPEED
#define APPCONF_BALANCE_TURNTILT_SPEED				5
#endif
#ifndef APPCONF_BALANCE_TURNTILT_ERPM_BOOST
#define APPCONF_BALANCE_TURNTILT_ERPM_BOOST			20
#endif
#ifndef APPCONF_BALANCE_TURNTILT_ERPM_BOOST_END
#define APPCONF_BALANCE_TURNTILT_ERPM_BOOST_END		20000
#endif

// PAS app
#ifndef APPCONF_PAS_CTRL_TYPE
#define APPCONF_PAS_CTRL_TYPE				PAS_CTRL_TYPE_NONE
#endif
#ifndef APPCONF_PAS_SENSOR_TYPE
#define APPCONF_PAS_SENSOR_TYPE				PAS_SENSOR_TYPE_QUADRATURE
#endif
#ifndef APPCONF_PAS_PEDAL_RPM_START
#define APPCONF_PAS_PEDAL_RPM_START			10.0
#endif
#ifndef APPCONF_PAS_PEDAL_RPM_END
#define APPCONF_PAS_PEDAL_RPM_END			180.0
#endif
#ifndef APPCONF_PAS_INVERT_PEDAL_DIRECTION
#define APPCONF_PAS_INVERT_PEDAL_DIRECTION	false
#endif
#ifndef APPCONF_PAS_MAGNETS
#define APPCONF_PAS_MAGNETS					24
#endif
#ifndef APPCONF_PAS_USE_FILTER
#define APPCONF_PAS_USE_FILTER				true
#endif
#ifndef APPCONF_PAS_SAFE_START
#define APPCONF_PAS_SAFE_START				true
#endif
#ifndef APPCONF_PAS_CURRENT_SCALING
#define APPCONF_PAS_CURRENT_SCALING			0.1
#endif
#ifndef APPCONF_PAS_RAMP_TIME_POS
#define APPCONF_PAS_RAMP_TIME_POS			0.6
#endif
#ifndef APPCONF_PAS_RAMP_TIME_NEG
#define APPCONF_PAS_RAMP_TIME_NEG			0.3
#endif
#ifndef APPCONF_PAS_UPDATE_RATE_HZ
#define APPCONF_PAS_UPDATE_RATE_HZ			500
#endif

// IMU
#ifndef APPCONF_IMU_TYPE
#define APPCONF_IMU_TYPE					IMU_TYPE_INTERNAL
#endif
#ifndef APPCONF_IMU_AHRS_MODE
#define APPCONF_IMU_AHRS_MODE				AHRS_MODE_MADGWICK
#endif
#ifndef APPCONF_IMU_SAMPLE_RATE_HZ
#define APPCONF_IMU_SAMPLE_RATE_HZ			200
#endif
#ifndef APPCONF_IMU_ACCEL_CONFIDENCE_DECAY
#define APPCONF_IMU_ACCEL_CONFIDENCE_DECAY	1.0
#endif
#ifndef APPCONF_IMU_MAHONY_KP
#define APPCONF_IMU_MAHONY_KP				0.3
#endif
#ifndef APPCONF_IMU_MAHONY_KI
#define APPCONF_IMU_MAHONY_KI				0.0
#endif
#ifndef APPCONF_IMU_MADGWICK_BETA
#define APPCONF_IMU_MADGWICK_BETA			0.1
#endif
#ifndef APPCONF_IMU_ROT_ROLL
#define APPCONF_IMU_ROT_ROLL				0.0
#endif
#ifndef APPCONF_IMU_ROT_PITCH
#define APPCONF_IMU_ROT_PITCH				0.0
#endif
#ifndef APPCONF_IMU_ROT_YAW
#define APPCONF_IMU_ROT_YAW					0.0
#endif
#ifndef APPCONF_IMU_A_OFFSET_0
#define APPCONF_IMU_A_OFFSET_0				0.0
#endif
#ifndef APPCONF_IMU_A_OFFSET_1
#define APPCONF_IMU_A_OFFSET_1				0.0
#endif
#ifndef APPCONF_IMU_A_OFFSET_2
#define APPCONF_IMU_A_OFFSET_2				0.0
#endif
#ifndef APPCONF_IMU_G_OFFSET_0
#define APPCONF_IMU_G_OFFSET_0				0.0
#endif
#ifndef APPCONF_IMU_G_OFFSET_1
#define APPCONF_IMU_G_OFFSET_1				0.0
#endif
#ifndef APPCONF_IMU_G_OFFSET_2
#define APPCONF_IMU_G_OFFSET_2				0.0
#endif
#ifndef APPCONF_IMU_G_OFFSET_COMP_FACT_0
#define APPCONF_IMU_G_OFFSET_COMP_FACT_0	0.0
#endif
#ifndef APPCONF_IMU_G_OFFSET_COMP_FACT_1
#define APPCONF_IMU_G_OFFSET_COMP_FACT_1	0.0
#endif
#ifndef APPCONF_IMU_G_OFFSET_COMP_FACT_2
#define APPCONF_IMU_G_OFFSET_COMP_FACT_2	0.0
#endif
#ifndef APPCONF_IMU_G_OFFSET_COMP_CLAMP
#define APPCONF_IMU_G_OFFSET_COMP_CLAMP		5.0
#endif

#endif /* APPCONF_DEFAULT_H_ */
