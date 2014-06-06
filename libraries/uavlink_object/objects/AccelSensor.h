#ifndef ACCELSENSOR_H
#define ACCELSENSOR_H

#include "UAVLinkObject.h"
#include <cstring>

#define ACCELSENSOR_ID 0xCA83953A
#define ACCELSENSOR_ISSETTINGS false

namespace obj {
    class AccelSensor: public UAVLinkObject
    {
        public:
            struct Datas {
                   float x;
                   float y;
                   float z;
                   float temperature;

            };// __attribute__((packed)) Datas;
            
            // Functions
            
            static AccelSensor* instance();
            Datas get() const;
            void set(const Datas& data);
            
        protected:
            void toBytes(uint8_t *out);
            void fromBytes(const uint8_t *in);
            
        private:
            Datas datas;
            
            AccelSensor();
            void setDefaultValues();
    };
}

#endif