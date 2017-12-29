
#ifndef PLATFORM_ARTY
#error "Version mismatch - PLATFORM_ARTY not defined!"
#endif
const char* board = "arty";

#ifndef TARGET_NET
#error "Version mismatch - TARGET_NET not defined!"
#endif
const char* target = "net";

const char* git_commit = "3f2c9a133a6e232da1205b3f46cb00dbf17925d7";
const char* git_branch = "dependabot/submodules/third_party/litex-b78a47";
const char* git_describe = "v0.0.0-1889-g3f2c9a1-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

