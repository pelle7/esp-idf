//Do not edit this file because it is autogenerated by gen_esp_err_to_name.py

#include <string.h>
#if __has_include("soc/soc.h")
#include "soc/soc.h"
#endif
#if __has_include("esp32/ulp.h")
#include "esp32/ulp.h"
#endif
#if __has_include("esp_err.h")
#include "esp_err.h"
#endif
#if __has_include("esp_http_client.h")
#include "esp_http_client.h"
#endif
#if __has_include("esp_image_format.h")
#include "esp_image_format.h"
#endif
#if __has_include("esp_mesh.h")
#include "esp_mesh.h"
#endif
#if __has_include("esp_now.h")
#include "esp_now.h"
#endif
#if __has_include("esp_ota_ops.h")
#include "esp_ota_ops.h"
#endif
#if __has_include("esp_ping.h")
#include "esp_ping.h"
#endif
#if __has_include("esp_spi_flash.h")
#include "esp_spi_flash.h"
#endif
#if __has_include("esp_wifi.h")
#include "esp_wifi.h"
#endif
#if __has_include("esp_wps.h")
#include "esp_wps.h"
#endif
#if __has_include("nvs.h")
#include "nvs.h"
#endif
#if __has_include("tcpip_adapter.h")
#include "tcpip_adapter.h"
#endif

#ifdef CONFIG_ESP_ERR_TO_NAME_LOOKUP
#define ERR_TBL_IT(err)    {err, #err}

typedef struct {
    esp_err_t code;
    const char *msg;
} esp_err_msg_t;

static const esp_err_msg_t esp_err_msg_table[] = {
    // components/esp32/include/esp_err.h
#   ifdef      ESP_FAIL
    ERR_TBL_IT(ESP_FAIL),                                   /*    -1 Generic esp_err_t code indicating failure */
#   endif
#   ifdef      ESP_OK
    ERR_TBL_IT(ESP_OK),                                     /*     0 esp_err_t value indicating success (no error) */
#   endif
#   ifdef      ESP_ERR_NO_MEM
    ERR_TBL_IT(ESP_ERR_NO_MEM),                             /*   257 0x101 Out of memory */
#   endif
#   ifdef      ESP_ERR_INVALID_ARG
    ERR_TBL_IT(ESP_ERR_INVALID_ARG),                        /*   258 0x102 Invalid argument */
#   endif
#   ifdef      ESP_ERR_INVALID_STATE
    ERR_TBL_IT(ESP_ERR_INVALID_STATE),                      /*   259 0x103 Invalid state */
#   endif
#   ifdef      ESP_ERR_INVALID_SIZE
    ERR_TBL_IT(ESP_ERR_INVALID_SIZE),                       /*   260 0x104 Invalid size */
#   endif
#   ifdef      ESP_ERR_NOT_FOUND
    ERR_TBL_IT(ESP_ERR_NOT_FOUND),                          /*   261 0x105 Requested resource not found */
#   endif
#   ifdef      ESP_ERR_NOT_SUPPORTED
    ERR_TBL_IT(ESP_ERR_NOT_SUPPORTED),                      /*   262 0x106 Operation or feature not supported */
#   endif
#   ifdef      ESP_ERR_TIMEOUT
    ERR_TBL_IT(ESP_ERR_TIMEOUT),                            /*   263 0x107 Operation timed out */
#   endif
#   ifdef      ESP_ERR_INVALID_RESPONSE
    ERR_TBL_IT(ESP_ERR_INVALID_RESPONSE),                   /*   264 0x108 Received response was invalid */
#   endif
#   ifdef      ESP_ERR_INVALID_CRC
    ERR_TBL_IT(ESP_ERR_INVALID_CRC),                        /*   265 0x109 CRC or checksum was invalid */
#   endif
#   ifdef      ESP_ERR_INVALID_VERSION
    ERR_TBL_IT(ESP_ERR_INVALID_VERSION),                    /*   266 0x10a Version was invalid */
#   endif
#   ifdef      ESP_ERR_INVALID_MAC
    ERR_TBL_IT(ESP_ERR_INVALID_MAC),                        /*   267 0x10b MAC address was invalid */
#   endif
    // components/nvs_flash/include/nvs.h
#   ifdef      ESP_ERR_NVS_BASE
    ERR_TBL_IT(ESP_ERR_NVS_BASE),                           /*  4352 0x1100 Starting number of error codes */
#   endif
#   ifdef      ESP_ERR_NVS_NOT_INITIALIZED
    ERR_TBL_IT(ESP_ERR_NVS_NOT_INITIALIZED),                /*  4353 0x1101 The storage driver is not initialized */
#   endif
#   ifdef      ESP_ERR_NVS_NOT_FOUND
    ERR_TBL_IT(ESP_ERR_NVS_NOT_FOUND),                      /*  4354 0x1102 Id namespace doesn’t exist yet and mode is
                                                                            NVS_READONLY */
#   endif
#   ifdef      ESP_ERR_NVS_TYPE_MISMATCH
    ERR_TBL_IT(ESP_ERR_NVS_TYPE_MISMATCH),                  /*  4355 0x1103 The type of set or get operation doesn't
                                                                            match the type of value stored in NVS */
#   endif
#   ifdef      ESP_ERR_NVS_READ_ONLY
    ERR_TBL_IT(ESP_ERR_NVS_READ_ONLY),                      /*  4356 0x1104 Storage handle was opened as read only */
#   endif
#   ifdef      ESP_ERR_NVS_NOT_ENOUGH_SPACE
    ERR_TBL_IT(ESP_ERR_NVS_NOT_ENOUGH_SPACE),               /*  4357 0x1105 There is not enough space in the underlying
                                                                            storage to save the value */
#   endif
#   ifdef      ESP_ERR_NVS_INVALID_NAME
    ERR_TBL_IT(ESP_ERR_NVS_INVALID_NAME),                   /*  4358 0x1106 Namespace name doesn’t satisfy constraints */
#   endif
#   ifdef      ESP_ERR_NVS_INVALID_HANDLE
    ERR_TBL_IT(ESP_ERR_NVS_INVALID_HANDLE),                 /*  4359 0x1107 Handle has been closed or is NULL */
#   endif
#   ifdef      ESP_ERR_NVS_REMOVE_FAILED
    ERR_TBL_IT(ESP_ERR_NVS_REMOVE_FAILED),                  /*  4360 0x1108 The value wasn’t updated because flash
                                                                            write operation has failed. The value was
                                                                            written however, and update will be finished
                                                                            after re-initialization of nvs, provided
                                                                            that flash operation doesn’t fail again. */
#   endif
#   ifdef      ESP_ERR_NVS_KEY_TOO_LONG
    ERR_TBL_IT(ESP_ERR_NVS_KEY_TOO_LONG),                   /*  4361 0x1109 Key name is too long */
#   endif
#   ifdef      ESP_ERR_NVS_PAGE_FULL
    ERR_TBL_IT(ESP_ERR_NVS_PAGE_FULL),                      /*  4362 0x110a Internal error; never returned by nvs API
                                                                            functions */
#   endif
#   ifdef      ESP_ERR_NVS_INVALID_STATE
    ERR_TBL_IT(ESP_ERR_NVS_INVALID_STATE),                  /*  4363 0x110b NVS is in an inconsistent state due to a
                                                                            previous error. Call nvs_flash_init and
                                                                            nvs_open again, then retry. */
#   endif
#   ifdef      ESP_ERR_NVS_INVALID_LENGTH
    ERR_TBL_IT(ESP_ERR_NVS_INVALID_LENGTH),                 /*  4364 0x110c String or blob length is not sufficient to
                                                                            store data */
#   endif
#   ifdef      ESP_ERR_NVS_NO_FREE_PAGES
    ERR_TBL_IT(ESP_ERR_NVS_NO_FREE_PAGES),                  /*  4365 0x110d NVS partition doesn't contain any empty
                                                                            pages. This may happen if NVS partition was
                                                                            truncated. Erase the whole partition and
                                                                            call nvs_flash_init again. */
#   endif
#   ifdef      ESP_ERR_NVS_VALUE_TOO_LONG
    ERR_TBL_IT(ESP_ERR_NVS_VALUE_TOO_LONG),                 /*  4366 0x110e String or blob length is longer than
                                                                            supported by the implementation */
#   endif
#   ifdef      ESP_ERR_NVS_PART_NOT_FOUND
    ERR_TBL_IT(ESP_ERR_NVS_PART_NOT_FOUND),                 /*  4367 0x110f Partition with specified name is not found
                                                                            in the partition table */
#   endif
#   ifdef      ESP_ERR_NVS_NEW_VERSION_FOUND
    ERR_TBL_IT(ESP_ERR_NVS_NEW_VERSION_FOUND),              /*  4368 0x1110 NVS partition contains data in new format
                                                                            and cannot be recognized by this version of
                                                                            code */
#   endif
    // components/ulp/include/esp32/ulp.h
#   ifdef      ESP_ERR_ULP_BASE
    ERR_TBL_IT(ESP_ERR_ULP_BASE),                           /*  4608 0x1200 Offset for ULP-related error codes */
#   endif
#   ifdef      ESP_ERR_ULP_SIZE_TOO_BIG
    ERR_TBL_IT(ESP_ERR_ULP_SIZE_TOO_BIG),                   /*  4609 0x1201 Program doesn't fit into RTC memory reserved
                                                                            for the ULP */
#   endif
#   ifdef      ESP_ERR_ULP_INVALID_LOAD_ADDR
    ERR_TBL_IT(ESP_ERR_ULP_INVALID_LOAD_ADDR),              /*  4610 0x1202 Load address is outside of RTC memory
                                                                            reserved for the ULP */
#   endif
#   ifdef      ESP_ERR_ULP_DUPLICATE_LABEL
    ERR_TBL_IT(ESP_ERR_ULP_DUPLICATE_LABEL),                /*  4611 0x1203 More than one label with the same number was
                                                                            defined */
#   endif
#   ifdef      ESP_ERR_ULP_UNDEFINED_LABEL
    ERR_TBL_IT(ESP_ERR_ULP_UNDEFINED_LABEL),                /*  4612 0x1204 Branch instructions references an undefined label */
#   endif
#   ifdef      ESP_ERR_ULP_BRANCH_OUT_OF_RANGE
    ERR_TBL_IT(ESP_ERR_ULP_BRANCH_OUT_OF_RANGE),            /*  4613 0x1205 Branch target is out of range of B
                                                                            instruction (try replacing with BX) */
#   endif
    // components/app_update/include/esp_ota_ops.h
#   ifdef      ESP_ERR_OTA_BASE
    ERR_TBL_IT(ESP_ERR_OTA_BASE),                           /*  5376 0x1500 Base error code for ota_ops api */
#   endif
#   ifdef      ESP_ERR_OTA_PARTITION_CONFLICT
    ERR_TBL_IT(ESP_ERR_OTA_PARTITION_CONFLICT),             /*  5377 0x1501 Error if request was to write or erase the
                                                                            current running partition */
#   endif
#   ifdef      ESP_ERR_OTA_SELECT_INFO_INVALID
    ERR_TBL_IT(ESP_ERR_OTA_SELECT_INFO_INVALID),            /*  5378 0x1502 Error if OTA data partition contains invalid
                                                                            content */
#   endif
#   ifdef      ESP_ERR_OTA_VALIDATE_FAILED
    ERR_TBL_IT(ESP_ERR_OTA_VALIDATE_FAILED),                /*  5379 0x1503 Error if OTA app image is invalid */
#   endif
    // components/bootloader_support/include/esp_image_format.h
#   ifdef      ESP_ERR_IMAGE_BASE
    ERR_TBL_IT(ESP_ERR_IMAGE_BASE),                         /*  8192 0x2000 */
#   endif
#   ifdef      ESP_ERR_IMAGE_FLASH_FAIL
    ERR_TBL_IT(ESP_ERR_IMAGE_FLASH_FAIL),                   /*  8193 0x2001 */
#   endif
#   ifdef      ESP_ERR_IMAGE_INVALID
    ERR_TBL_IT(ESP_ERR_IMAGE_INVALID),                      /*  8194 0x2002 */
#   endif
    // components/esp32/include/esp_err.h
#   ifdef      ESP_ERR_WIFI_BASE
    ERR_TBL_IT(ESP_ERR_WIFI_BASE),                          /* 12288 0x3000 Starting number of WiFi error codes */
#   endif
    // components/esp32/include/esp_wifi.h
#   ifdef      ESP_ERR_WIFI_NOT_INIT
    ERR_TBL_IT(ESP_ERR_WIFI_NOT_INIT),                      /* 12289 0x3001 WiFi driver was not installed by esp_wifi_init */
#   endif
#   ifdef      ESP_ERR_WIFI_NOT_STARTED
    ERR_TBL_IT(ESP_ERR_WIFI_NOT_STARTED),                   /* 12290 0x3002 WiFi driver was not started by esp_wifi_start */
#   endif
#   ifdef      ESP_ERR_WIFI_NOT_STOPPED
    ERR_TBL_IT(ESP_ERR_WIFI_NOT_STOPPED),                   /* 12291 0x3003 WiFi driver was not stopped by esp_wifi_stop */
#   endif
#   ifdef      ESP_ERR_WIFI_IF
    ERR_TBL_IT(ESP_ERR_WIFI_IF),                            /* 12292 0x3004 WiFi interface error */
#   endif
#   ifdef      ESP_ERR_WIFI_MODE
    ERR_TBL_IT(ESP_ERR_WIFI_MODE),                          /* 12293 0x3005 WiFi mode error */
#   endif
#   ifdef      ESP_ERR_WIFI_STATE
    ERR_TBL_IT(ESP_ERR_WIFI_STATE),                         /* 12294 0x3006 WiFi internal state error */
#   endif
#   ifdef      ESP_ERR_WIFI_CONN
    ERR_TBL_IT(ESP_ERR_WIFI_CONN),                          /* 12295 0x3007 WiFi internal control block of station or
                                                                            soft-AP error */
#   endif
#   ifdef      ESP_ERR_WIFI_NVS
    ERR_TBL_IT(ESP_ERR_WIFI_NVS),                           /* 12296 0x3008 WiFi internal NVS module error */
#   endif
#   ifdef      ESP_ERR_WIFI_MAC
    ERR_TBL_IT(ESP_ERR_WIFI_MAC),                           /* 12297 0x3009 MAC address is invalid */
#   endif
#   ifdef      ESP_ERR_WIFI_SSID
    ERR_TBL_IT(ESP_ERR_WIFI_SSID),                          /* 12298 0x300a SSID is invalid */
#   endif
#   ifdef      ESP_ERR_WIFI_PASSWORD
    ERR_TBL_IT(ESP_ERR_WIFI_PASSWORD),                      /* 12299 0x300b Password is invalid */
#   endif
#   ifdef      ESP_ERR_WIFI_TIMEOUT
    ERR_TBL_IT(ESP_ERR_WIFI_TIMEOUT),                       /* 12300 0x300c Timeout error */
#   endif
#   ifdef      ESP_ERR_WIFI_WAKE_FAIL
    ERR_TBL_IT(ESP_ERR_WIFI_WAKE_FAIL),                     /* 12301 0x300d WiFi is in sleep state(RF closed) and wakeup fail */
#   endif
#   ifdef      ESP_ERR_WIFI_WOULD_BLOCK
    ERR_TBL_IT(ESP_ERR_WIFI_WOULD_BLOCK),                   /* 12302 0x300e The caller would block */
#   endif
#   ifdef      ESP_ERR_WIFI_NOT_CONNECT
    ERR_TBL_IT(ESP_ERR_WIFI_NOT_CONNECT),                   /* 12303 0x300f Station still in disconnect status */
#   endif
    // components/esp32/include/esp_wps.h
#   ifdef      ESP_ERR_WIFI_REGISTRAR
    ERR_TBL_IT(ESP_ERR_WIFI_REGISTRAR),                     /* 12339 0x3033 WPS registrar is not supported */
#   endif
#   ifdef      ESP_ERR_WIFI_WPS_TYPE
    ERR_TBL_IT(ESP_ERR_WIFI_WPS_TYPE),                      /* 12340 0x3034 WPS type error */
#   endif
#   ifdef      ESP_ERR_WIFI_WPS_SM
    ERR_TBL_IT(ESP_ERR_WIFI_WPS_SM),                        /* 12341 0x3035 WPS state machine is not initialized */
#   endif
    // components/esp32/include/esp_now.h
#   ifdef      ESP_ERR_ESPNOW_BASE
    ERR_TBL_IT(ESP_ERR_ESPNOW_BASE),                        /* 12388 0x3064 ESPNOW error number base. */
#   endif
#   ifdef      ESP_ERR_ESPNOW_NOT_INIT
    ERR_TBL_IT(ESP_ERR_ESPNOW_NOT_INIT),                    /* 12389 0x3065 ESPNOW is not initialized. */
#   endif
#   ifdef      ESP_ERR_ESPNOW_ARG
    ERR_TBL_IT(ESP_ERR_ESPNOW_ARG),                         /* 12390 0x3066 Invalid argument */
#   endif
#   ifdef      ESP_ERR_ESPNOW_NO_MEM
    ERR_TBL_IT(ESP_ERR_ESPNOW_NO_MEM),                      /* 12391 0x3067 Out of memory */
#   endif
#   ifdef      ESP_ERR_ESPNOW_FULL
    ERR_TBL_IT(ESP_ERR_ESPNOW_FULL),                        /* 12392 0x3068 ESPNOW peer list is full */
#   endif
#   ifdef      ESP_ERR_ESPNOW_NOT_FOUND
    ERR_TBL_IT(ESP_ERR_ESPNOW_NOT_FOUND),                   /* 12393 0x3069 ESPNOW peer is not found */
#   endif
#   ifdef      ESP_ERR_ESPNOW_INTERNAL
    ERR_TBL_IT(ESP_ERR_ESPNOW_INTERNAL),                    /* 12394 0x306a Internal error */
#   endif
#   ifdef      ESP_ERR_ESPNOW_EXIST
    ERR_TBL_IT(ESP_ERR_ESPNOW_EXIST),                       /* 12395 0x306b ESPNOW peer has existed */
#   endif
#   ifdef      ESP_ERR_ESPNOW_IF
    ERR_TBL_IT(ESP_ERR_ESPNOW_IF),                          /* 12396 0x306c Interface error */
#   endif
    // components/esp32/include/esp_err.h
#   ifdef      ESP_ERR_MESH_BASE
    ERR_TBL_IT(ESP_ERR_MESH_BASE),                          /* 16384 0x4000 Starting number of MESH error codes */
#   endif
    // components/esp32/include/esp_mesh.h
#   ifdef      ESP_ERR_MESH_WIFI_NOT_START
    ERR_TBL_IT(ESP_ERR_MESH_WIFI_NOT_START),                /* 16385 0x4001 */
#   endif
#   ifdef      ESP_ERR_MESH_NOT_INIT
    ERR_TBL_IT(ESP_ERR_MESH_NOT_INIT),                      /* 16386 0x4002 */
#   endif
#   ifdef      ESP_ERR_MESH_NOT_CONFIG
    ERR_TBL_IT(ESP_ERR_MESH_NOT_CONFIG),                    /* 16387 0x4003 */
#   endif
#   ifdef      ESP_ERR_MESH_NOT_START
    ERR_TBL_IT(ESP_ERR_MESH_NOT_START),                     /* 16388 0x4004 */
#   endif
#   ifdef      ESP_ERR_MESH_NOT_SUPPORT
    ERR_TBL_IT(ESP_ERR_MESH_NOT_SUPPORT),                   /* 16389 0x4005 */
#   endif
#   ifdef      ESP_ERR_MESH_NOT_ALLOWED
    ERR_TBL_IT(ESP_ERR_MESH_NOT_ALLOWED),                   /* 16390 0x4006 */
#   endif
#   ifdef      ESP_ERR_MESH_NO_MEMORY
    ERR_TBL_IT(ESP_ERR_MESH_NO_MEMORY),                     /* 16391 0x4007 */
#   endif
#   ifdef      ESP_ERR_MESH_ARGUMENT
    ERR_TBL_IT(ESP_ERR_MESH_ARGUMENT),                      /* 16392 0x4008 */
#   endif
#   ifdef      ESP_ERR_MESH_EXCEED_MTU
    ERR_TBL_IT(ESP_ERR_MESH_EXCEED_MTU),                    /* 16393 0x4009 */
#   endif
#   ifdef      ESP_ERR_MESH_TIMEOUT
    ERR_TBL_IT(ESP_ERR_MESH_TIMEOUT),                       /* 16394 0x400a */
#   endif
#   ifdef      ESP_ERR_MESH_DISCONNECTED
    ERR_TBL_IT(ESP_ERR_MESH_DISCONNECTED),                  /* 16395 0x400b */
#   endif
#   ifdef      ESP_ERR_MESH_QUEUE_FAIL
    ERR_TBL_IT(ESP_ERR_MESH_QUEUE_FAIL),                    /* 16396 0x400c */
#   endif
#   ifdef      ESP_ERR_MESH_QUEUE_FULL
    ERR_TBL_IT(ESP_ERR_MESH_QUEUE_FULL),                    /* 16397 0x400d */
#   endif
#   ifdef      ESP_ERR_MESH_NO_PARENT_FOUND
    ERR_TBL_IT(ESP_ERR_MESH_NO_PARENT_FOUND),               /* 16398 0x400e */
#   endif
#   ifdef      ESP_ERR_MESH_NO_ROUTE_FOUND
    ERR_TBL_IT(ESP_ERR_MESH_NO_ROUTE_FOUND),                /* 16399 0x400f */
#   endif
#   ifdef      ESP_ERR_MESH_OPTION_NULL
    ERR_TBL_IT(ESP_ERR_MESH_OPTION_NULL),                   /* 16400 0x4010 */
#   endif
#   ifdef      ESP_ERR_MESH_OPTION_UNKNOWN
    ERR_TBL_IT(ESP_ERR_MESH_OPTION_UNKNOWN),                /* 16401 0x4011 */
#   endif
#   ifdef      ESP_ERR_MESH_XON_NO_WINDOW
    ERR_TBL_IT(ESP_ERR_MESH_XON_NO_WINDOW),                 /* 16402 0x4012 */
#   endif
#   ifdef      ESP_ERR_MESH_INTERFACE
    ERR_TBL_IT(ESP_ERR_MESH_INTERFACE),                     /* 16403 0x4013 */
#   endif
#   ifdef      ESP_ERR_MESH_DISCARD_DUPLICATE
    ERR_TBL_IT(ESP_ERR_MESH_DISCARD_DUPLICATE),             /* 16404 0x4014 */
#   endif
#   ifdef      ESP_ERR_MESH_DISCARD
    ERR_TBL_IT(ESP_ERR_MESH_DISCARD),                       /* 16405 0x4015 */
#   endif
#   ifdef      ESP_ERR_MESH_VOTING
    ERR_TBL_IT(ESP_ERR_MESH_VOTING),                        /* 16406 0x4016 */
#   endif
    // components/tcpip_adapter/include/tcpip_adapter.h
#   ifdef      ESP_ERR_TCPIP_ADAPTER_BASE
    ERR_TBL_IT(ESP_ERR_TCPIP_ADAPTER_BASE),                 /* 20480 0x5000 */
#   endif
#   ifdef      ESP_ERR_TCPIP_ADAPTER_INVALID_PARAMS
    ERR_TBL_IT(ESP_ERR_TCPIP_ADAPTER_INVALID_PARAMS),       /* 20481 0x5001 */
#   endif
#   ifdef      ESP_ERR_TCPIP_ADAPTER_IF_NOT_READY
    ERR_TBL_IT(ESP_ERR_TCPIP_ADAPTER_IF_NOT_READY),         /* 20482 0x5002 */
#   endif
#   ifdef      ESP_ERR_TCPIP_ADAPTER_DHCPC_START_FAILED
    ERR_TBL_IT(ESP_ERR_TCPIP_ADAPTER_DHCPC_START_FAILED),   /* 20483 0x5003 */
#   endif
#   ifdef      ESP_ERR_TCPIP_ADAPTER_DHCP_ALREADY_STARTED
    ERR_TBL_IT(ESP_ERR_TCPIP_ADAPTER_DHCP_ALREADY_STARTED), /* 20484 0x5004 */
#   endif
#   ifdef      ESP_ERR_TCPIP_ADAPTER_DHCP_ALREADY_STOPPED
    ERR_TBL_IT(ESP_ERR_TCPIP_ADAPTER_DHCP_ALREADY_STOPPED), /* 20485 0x5005 */
#   endif
#   ifdef      ESP_ERR_TCPIP_ADAPTER_NO_MEM
    ERR_TBL_IT(ESP_ERR_TCPIP_ADAPTER_NO_MEM),               /* 20486 0x5006 */
#   endif
#   ifdef      ESP_ERR_TCPIP_ADAPTER_DHCP_NOT_STOPPED
    ERR_TBL_IT(ESP_ERR_TCPIP_ADAPTER_DHCP_NOT_STOPPED),     /* 20487 0x5007 */
#   endif
    // components/lwip/apps/ping/esp_ping.h
#   ifdef      ESP_ERR_PING_BASE
    ERR_TBL_IT(ESP_ERR_PING_BASE),                          /* 24576 0x6000 */
#   endif
#   ifdef      ESP_ERR_PING_INVALID_PARAMS
    ERR_TBL_IT(ESP_ERR_PING_INVALID_PARAMS),                /* 24577 0x6001 */
#   endif
#   ifdef      ESP_ERR_PING_NO_MEM
    ERR_TBL_IT(ESP_ERR_PING_NO_MEM),                        /* 24578 0x6002 */
#   endif
    // components/esp_http_client/include/esp_http_client.h
#   ifdef      ESP_ERR_HTTP_BASE
    ERR_TBL_IT(ESP_ERR_HTTP_BASE),                          /* 28672 0x7000 Starting number of HTTP error codes */
#   endif
#   ifdef      ESP_ERR_HTTP_MAX_REDIRECT
    ERR_TBL_IT(ESP_ERR_HTTP_MAX_REDIRECT),                  /* 28673 0x7001 The error exceeds the number of HTTP redirects */
#   endif
#   ifdef      ESP_ERR_HTTP_CONNECT
    ERR_TBL_IT(ESP_ERR_HTTP_CONNECT),                       /* 28674 0x7002 Error open the HTTP connection */
#   endif
#   ifdef      ESP_ERR_HTTP_WRITE_DATA
    ERR_TBL_IT(ESP_ERR_HTTP_WRITE_DATA),                    /* 28675 0x7003 Error write HTTP data */
#   endif
#   ifdef      ESP_ERR_HTTP_FETCH_HEADER
    ERR_TBL_IT(ESP_ERR_HTTP_FETCH_HEADER),                  /* 28676 0x7004 Error read HTTP header from server */
#   endif
#   ifdef      ESP_ERR_HTTP_INVALID_TRANSPORT
    ERR_TBL_IT(ESP_ERR_HTTP_INVALID_TRANSPORT),             /* 28677 0x7005 There are no transport support for the input
                                                                            scheme */
#   endif
    // components/spi_flash/include/esp_spi_flash.h
#   ifdef      ESP_ERR_FLASH_BASE
    ERR_TBL_IT(ESP_ERR_FLASH_BASE),                         /* 65552 0x10010 */
#   endif
#   ifdef      ESP_ERR_FLASH_OP_FAIL
    ERR_TBL_IT(ESP_ERR_FLASH_OP_FAIL),                      /* 65553 0x10011 */
#   endif
#   ifdef      ESP_ERR_FLASH_OP_TIMEOUT
    ERR_TBL_IT(ESP_ERR_FLASH_OP_TIMEOUT),                   /* 65554 0x10012 */
#   endif
};
#endif //CONFIG_ESP_ERR_TO_NAME_LOOKUP

static const char esp_unknown_msg[] =
#ifdef CONFIG_ESP_ERR_TO_NAME_LOOKUP
    "ERROR";
#else
    "UNKNOWN ERROR";
#endif //CONFIG_ESP_ERR_TO_NAME_LOOKUP

const char *esp_err_to_name(esp_err_t code)
{
#ifdef CONFIG_ESP_ERR_TO_NAME_LOOKUP
    int i;

    for (i = 0; i < sizeof(esp_err_msg_table)/sizeof(esp_err_msg_table[0]); ++i) {
        if (esp_err_msg_table[i].code == code) {
            return esp_err_msg_table[i].msg;
        }
    }
#endif //CONFIG_ESP_ERR_TO_NAME_LOOKUP

    return esp_unknown_msg;
}

const char *esp_err_to_name_r(esp_err_t code, char *buf, size_t buflen)
{
#ifdef CONFIG_ESP_ERR_TO_NAME_LOOKUP
    int i;

    for (i = 0; i < sizeof(esp_err_msg_table)/sizeof(esp_err_msg_table[0]); ++i) {
        if (esp_err_msg_table[i].code == code) {
            strlcpy(buf, esp_err_msg_table[i].msg, buflen);
            return buf;
        }
    }
#endif //CONFIG_ESP_ERR_TO_NAME_LOOKUP

    if (strerror_r(code, buf, buflen) == 0) {
        return buf;
    }

    snprintf(buf, buflen, "%s 0x%x(%d)", esp_unknown_msg, code, code);

    return buf;
}
