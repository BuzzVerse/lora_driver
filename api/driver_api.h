#ifndef SPI_API_H
#define SPI_API_H

#include <stdint.h>

/**
 * @brief Enum for the status of the SPI operations.
 *
 * @details The status codes returned by the SPI operations in the driver.
 */
typedef enum
{
    API_OK,                     /**< The operation was successful. */
    API_FAILED_SPI_SET_PIN,     /**< The pin has failed to have been set */
    API_FAILED_SPI_SET_LEVEL,   /**< The spi level failed to be set for a pin */
    API_FAILED_SPI_CHIP_SELECT, /**< The SPI chip select operation failed. */
    API_FAILED_SPI_ADD_DEVICE,  /**< The spi device failed to be added */
    API_FAILED_SPI_INIT,        /**< The SPI initialization failed. */
    API_FAILED_SPI_READ,        /**< The SPI read operation failed. */
    API_FAILED_SPI_READ_BUF,    /**< The SPI read buffer operation failed. */
    API_FAILED_SPI_WRITE,       /**< The SPI write operation failed. */
    API_FAILED_SPI_WRITE_BUF,   /**< The SPI write buffer operation failed. */
    API_NULL_POINTER_ERROR,     /**< The pointer is NULL. */
    API_SPI_ERROR               /**< The SPI operation encountered an error. */
} api_status_t;

/**
 * @brief Initialize the SPI interface.
 *
 * @details This function initializes the SPI interface for communication.
 *
 * @return api_status_t Result of the initialization.
 *         - API_OK: The initialization was successful.
 *         - API_SPI_ERROR: There was an error during initialization.
 */
api_status_t spi_init(void);

/**
 * @brief Write a value to an SPI register.
 *
 * @details This function writes a single byte value to the specified SPI register.
 *
 * @param reg The register to write to.
 * @param val The value to write to the register.
 *
 * @return api_status_t Result of the write operation.
 *         - API_OK: The write operation was successful.
 *         - API_SPI_ERROR: There was an error during the write operation.
 */
api_status_t spi_write(uint8_t reg, uint8_t val);

/**
 * @brief Write a buffer to an SPI register.
 *
 * @details This function writes a buffer of data to the specified SPI register.
 *
 * @param reg The register to write to.
 * @param val Pointer to the buffer containing the data to write.
 * @param len The length of the data buffer.
 *
 * @return api_status_t Result of the write operation.
 *         - API_OK: The write operation was successful.
 *         - API_SPI_ERROR: There was an error during the write operation.
 */
api_status_t spi_write_buf(uint8_t reg, uint8_t *val, uint16_t len);

/**
 * @brief Read a value from an SPI register.
 *
 * @details This function reads a single byte value from the specified SPI register.
 *
 * @param reg The register to read from.
 * @param val Pointer to the variable to store the read value.
 *
 * @return api_status_t Result of the read operation.
 *         - API_OK: The read operation was successful.
 *         - API_SPI_ERROR: There was an error during the read operation.
 */
api_status_t spi_read(uint8_t reg, uint8_t *val);

/**
 * @brief Read a buffer from an SPI register.
 *
 * @details This function reads a buffer of data from the specified SPI register.
 *
 * @param reg The register to read from.
 * @param val Pointer to the buffer to store the read data.
 * @param len The length of the data to read.
 *
 * @return api_status_t Result of the read operation.
 *         - API_OK: The read operation was successful.
 *         - API_SPI_ERROR: There was an error during the read operation.
 */
api_status_t spi_read_buf(uint8_t reg, uint8_t *val, uint16_t len);

/**
 * @brief Delay execution for a specified number of ms.
 *
 * @details This function introduces a delay in execution for a given number of ms.
 *
 * @param ms The number of ms to delay.
 */
void lora_delay(uint32_t ms);

/**
 * @brief Reset the LoRa module.
 *
 * @details This function resets the LoRa module by toggling the reset pin.
 *
 * @return api_status_t Result of the reset operation.
 */
api_status_t lora_reset(void);

#endif // SPI_API_H
