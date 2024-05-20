#ifndef SPI_API_H
#define SPI_API_H

#include <stdint.h>

typedef enum
{
    API_OK,
    API_SPI_ERROR
} api_status_t;

api_status_t spi_init(void);

api_status_t spi_write(uint8_t reg, uint8_t val);

api_status_t spi_write_buf(uint8_t reg, uint8_t *val, uint16_t len);

api_status_t spi_read(uint8_t reg, uint8_t *val);

api_status_t spi_read_buf(uint8_t reg, uint8_t *val, uint16_t len);

void lora_delay(uint32_t ticks);

#endif // SPI_API_H