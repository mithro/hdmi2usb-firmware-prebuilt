
#ifndef PLATFORM_OPSIS
#error "Version mismatch - PLATFORM_OPSIS not defined!"
#endif
const char* board = "opsis";

#ifndef TARGET_HDMI2USB
#error "Version mismatch - TARGET_HDMI2USB not defined!"
#endif
const char* target = "hdmi2usb";

const char* git_commit = "2dbf29033e19d950044e61a939953eff9cbd37fa";
const char* git_branch = "fixing-unstable-link";
const char* git_describe = "v0.0.0-1884-g2dbf290-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

