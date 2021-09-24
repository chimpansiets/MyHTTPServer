#include <iostream>
#include "models/flag_model.cpp"

int main(int argc, char **argv) {
    Flags flags;

    flags.parse_flags(argc, argv);
    return (0);
}