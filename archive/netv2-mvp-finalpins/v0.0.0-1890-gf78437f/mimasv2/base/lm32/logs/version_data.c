
#ifndef PLATFORM_MIMASV2
#error "Version mismatch - PLATFORM_MIMASV2 not defined!"
#endif
const char* board = "mimasv2";

#ifndef TARGET_BASE
#error "Version mismatch - TARGET_BASE not defined!"
#endif
const char* target = "base";

const char* git_commit = "f78437f32e767d12f63a9a138c67f8489b58c1db";
const char* git_branch = "netv2-mvp-finalpins";
const char* git_describe = "v0.0.0-1890-gf78437f-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

