
#ifndef PLATFORM_NEXYS_VIDEO
#error "Version mismatch - PLATFORM_NEXYS_VIDEO not defined!"
#endif
const char* board = "nexys_video";

#ifndef TARGET_VIDEO
#error "Version mismatch - TARGET_VIDEO not defined!"
#endif
const char* target = "video";

const char* git_commit = "2dbf29033e19d950044e61a939953eff9cbd37fa";
const char* git_branch = "master";
const char* git_describe = "v0.0.0-1884-g2dbf290-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

