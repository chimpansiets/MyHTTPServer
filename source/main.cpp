#include <iostream>
#include "models/flag_model.h"
#include "models/config_model.h"
#include "setup.cpp"

int main(int argc, char **argv) {
    Flags flags;
    MainConfig mainConfig;

    flags.parse_flags(argc, argv);
    mainConfig.parse_config(flags.c_file);
    setup(flags, mainConfig);
    return (0);
}