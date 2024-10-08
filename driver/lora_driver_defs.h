#ifndef _LORA_DRIVER_DEFS_H_
#define _LORA_DRIVER_DEFS_H_

/**
 * @brief Enum for the status of the LoRa module.
 *
 * @details The status of the LoRa module is returned by the functions in the LoRa driver.
 *
 * The following status codes are available:
 *
 */
typedef enum
{
    LORA_OK,                     /**< The operation was successful. */
    LORA_FAIL,                   /**< The operation failed. */
    LORA_FAILED_INIT,            /**< The initialization of the LoRa module failed. */
    LORA_FAILED_SPI_WRITE,       /**< The SPI write operation failed. */
    LORA_FAILED_SPI_WRITE_BUF,   /**< The SPI write buffer operation failed. */
    LORA_FAILED_SPI_READ,        /**< The SPI read operation failed. */
    LORA_FAILED_SPI_READ_BUF,    /**< The SPI read buffer operation failed. */
    LORA_FAILED_SEND_PACKET,     /**< The packet sending operation failed. */
    LORA_FAILED_RECEIVE_PACKET,  /**< The packet receiving operation failed. */
    LORA_DELAY_FAIL,             /**< The delay operation failed. */
    LORA_CRC_ERROR,              /**< The CRC check failed. */
} lora_status_t;

/*
 * Register definitions
 */
#define REG_FIFO 0x00
#define REG_OP_MODE 0x01
#define REG_FRF_MSB 0x06
#define REG_FRF_MID 0x07
#define REG_FRF_LSB 0x08
#define REG_PA_CONFIG 0x09
#define REG_LNA 0x0c
#define REG_FIFO_ADDR_PTR 0x0d
#define REG_FIFO_TX_BASE_ADDR 0x0e
#define REG_FIFO_RX_BASE_ADDR 0x0f
#define REG_FIFO_RX_CURRENT_ADDR 0x10
#define REG_IRQ_FLAGS 0x12
#define REG_RX_NB_BYTES 0x13
#define REG_PKT_SNR_VALUE 0x19
#define REG_PKT_RSSI_VALUE 0x1a
#define REG_MODEM_CONFIG_1 0x1d
#define REG_MODEM_CONFIG_2 0x1e
#define REG_PREAMBLE_MSB 0x20
#define REG_PREAMBLE_LSB 0x21
#define REG_PAYLOAD_LENGTH 0x22
#define REG_MODEM_CONFIG_3 0x26
#define REG_RSSI_WIDEBAND 0x2c
#define REG_DETECTION_OPTIMIZE 0x31
#define REG_DETECTION_THRESHOLD 0x37
#define REG_SYNC_WORD 0x39
#define REG_REG_IRQ_FLAGS_2 0x3F
#define REG_DIO_MAPPING_1 0x40
#define REG_DIO_MAPPING_2 0x41
#define REG_VERSION 0x42

/*
 * Transceiver modes
 */
#define MODE_LONG_RANGE_MODE 0x80
#define MODE_SLEEP 0x00
#define MODE_STDBY 0x01
#define MODE_TX 0x03
#define MODE_RX_CONTINUOUS 0x05
#define MODE_RX_SINGLE 0x06

/*
 * PA configuration
 */
#define PA_BOOST 0x80

/*
 * IRQ masks
 */
#define IRQ_TX_DONE_MASK 0x08
#define IRQ_PAYLOAD_CRC_ERROR_MASK 0x20
#define IRQ_RX_DONE_MASK 0x40
#define IRQ_PAYLOAD_CRC_ERROR 0x20
#define PA_OUTPUT_RFO_PIN 0
#define PA_OUTPUT_PA_BOOST_PIN 1

/*
 * Lora delays
 */
#define LORA_DELAY_10MS 10
#define LORA_DELAY_20MS 20

#define TIMEOUT_RESET 100

#define LORA_TAG "LORA_DRIVER"

#endif // _LORA_DRIVER_DEFS_H_