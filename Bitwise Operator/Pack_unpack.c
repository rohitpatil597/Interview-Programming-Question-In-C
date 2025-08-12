#include <stdio.h>
#include <stdint.h>

uint8_t data_pack(uint8_t mode,uint8_t status,uint8_t error_code,uin8_t id)
{
    return (((mode & 0x7 ) << 13) | \
            ((status & 1F) << 8) | \
            ((error_code & 0x0F) << 4)  | \
            ((id)& 0x0F)))
}

void data_unpack(uint16_t packed,uint16_t *mode,uint8_t *status,uint8_t *error_code,uin8_t *id)
{
   *mode = ((packed >> 13) & 0x7);
   *status=((packed >> 8) & 0x1F);
   *error_code=((packed >> 4) & 0x0F);
   *id=((packed) & 0x0F);
}
int main()
{

   return 0;
}
