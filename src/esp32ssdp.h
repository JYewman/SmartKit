#include "SmartKit.h"
#include <Arduino.h>
#include <WiFi.h>
#include <AsyncUDP.h>

#define SSDP_UUID_SIZE 37
#define SSDP_SCHEMA_URL_SIZE 64
#define SSDP_DEVICE_TYPE_SIZE 64
#define SSDP_FRIENDLY_NAME_SIZE 64
#define SSDP_SERIAL_NUMBER_SIZE 32
#define SSDP_PRESENTATION_URL_SIZE 128
#define SSDP_MODEL_NAME_SIZE 64
#define SSDP_MODEL_URL_SIZE 128
#define SSDP_MODEL_VERSION_SIZE 32
#define SSDP_MANUFACTURER_SIZE 64
#define SSDP_MANUFACTURER_URL_SIZE 128
#define SSDP_MAX_REPLY_SLOTS 5
#define SSDP_MAX_DELAY 10000

typedef enum
{
    NONE,
    SEARCH,
    NOTIFY
} ssdp_method_t;

typedef struct
{
    unsigned long _process_time;
    short _delay;
    IPAddress _respondToAddr;
    uint16_t _respondToPort;
    char _respondType[SSDP_DEVICE_TYPE_SIZE];
    char _usn_suffix[SSDP_DEVICE_TYPE_SIZE];
} ssdp_reply_slot_item_t;

class SSDPClass
{
public:
    SSDPClass();
    ~SSDPClass();

    bool begin();
    void end();

    void schema(WiFiClient client, bool sendHeaders = true) __attribute__((deprecated));
    const char *schema(bool includeheader = true) __attribute__((deprecated));
    const char *getSchema();

    void setDeviceType(const String &deviceType)
    {
        setDeviceType(deviceType.c_str());
    }
    void setDeviceType(const char *deviceType);
    void setName(const String &name)
    {
        setName(name.c_str());
    }
    void setName(const char *name);
    void setURL(const String &url)
    {
        setURL(url.c_str());
    }
    void setURL(const char *url);
    void setSchemaURL(const String &url)
    {
        setSchemaURL(url.c_str());
    }
    void setSchemaURL(const char *url);
    void setSerialNumber(const String &serialNumber)
    {
        setSerialNumber(serialNumber.c_str());
    }
    void setSerialNumber(const char *serialNumber);
    void setSerialNumber(const uint32_t serialNumber);
    void setModelName(const String &name)
    {
        setModelName(name.c_str());
    }
    void setModelName(const char *name);
    void setModelNumber(const String &num)
    {
        setModelNumber(num.c_str());
    }
    void setModelNumber(const char *num);
    void setModelURL(const String &url)
    {
        setModelURL(url.c_str());
    }
    void setModelDescription(const String &desc)
    {
        setModelDescription(desc.c_str());
    }
    void setModelDescription(const char *desc);
    void setServerName(const String &name)
    {
        setServerName(name.c_str());
    }
    void setServerName(const char *name);
    void setModelURL(const char *url);
    void setManufacturer(const String &name)
    {
        setManufacturer(name.c_str());
    }
    void setManufacturer(const char *name);
    void setManufacturerURL(const String &url)
    {
        setManufacturerURL(url.c_str());
    }
    void setManufacturerURL(const char *url);
    void setHTTPPort(uint16_t port);
    void setTTL(uint8_t ttl);
    void setInterval(uint32_t interval);
    void setUUID(const char *uuid, bool rootonly = true);
    void setServices(const char *services)
    {
        _services = services;
    }
    void setIcons(const char *icons)
    {
        _icons = icons;
    }

protected:
    void _onPacket(AsyncUDPPacket &packet);
    void _send(ssdp_method_t method);
    IPAddress localIP();
    uint16_t _port;
    uint32_t _ttl;
    uint32_t _interval;
    AsyncUDP _udp;
    ssdp_reply_slot_item_t *_replySlots[SSDP_MAX_REPLY_SLOTS];
    IPAddress _respondToAddr;
    uint16_t _respondToPort;

    bool _pending;
    bool _stmatch;
    short _delay;
    unsigned long _process_time;
    unsigned long _notify_time;

    char _respondType[SSDP_DEVICE_TYPE_SIZE];
    char _schemaURL[SSDP_SCHEMA_URL_SIZE];
    char _uuid[SSDP_UUID_SIZE];
    char _usn_suffix[SSDP_DEVICE_TYPE_SIZE];
    char _deviceType[SSDP_DEVICE_TYPE_SIZE];
    char _friendlyName[SSDP_FRIENDLY_NAME_SIZE];
    char _serialNumber[SSDP_SERIAL_NUMBER_SIZE];
    char _presentationURL[SSDP_PRESENTATION_URL_SIZE];
    char _manufacturer[SSDP_MANUFACTURER_SIZE];
    char _manufacturerURL[SSDP_MANUFACTURER_URL_SIZE];
    char _modelName[SSDP_MODEL_NAME_SIZE];
    char _modelURL[SSDP_MODEL_URL_SIZE];
    char _modelNumber[SSDP_MODEL_VERSION_SIZE];
    String _modelDescription;
    String _servername;
    char *_schema;
    String _services;
    String _icons;
};

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SSDP)
extern SSDPClass SSDP;
#endif