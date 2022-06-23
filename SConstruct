#!/usr/bin/python3

from SCons.Script import (
    AddOption,
    Environment,
    Export,
    GetOption,
    SConscript,
)

from os.path import dirname
from yaml import load, Loader

env = Environment()

# add option to choose target
AddOption("--target", dest="target", type="string", action="store")
# add option to not generate the compilation database
AddOption("--nocompiledb", dest="nocompiledb", action="store_true")
# add option to make build verbose
AddOption("--verbose", dest="verbose", action="store_true")
# add option to log output to file
AddOption("--savelog", dest="savelog", action="store_true")
# add option for clean build
AddOption("--cleanbuild", dest="cleanbuild", action="store_true")
# add option to build without debug info
AddOption("--release", dest="release", action="store_true")
# add option to build without debug info
AddOption("--device", dest="device", type="string", action="store")
# add option to halt upon openocd / gdb entry
AddOption("--halt", dest="halt", action="store_true")

Export("env")

with open("site_scons/components.yml") as components_file:
    components = load(components_file, Loader=Loader)

target = GetOption("target")
if not target:
    print("No targets specified!")
else:
    targets_arr = target.split(",")
    targets = [
        f"{components[target]['path']}/SConscript"
        for target in targets_arr
        if target in components
    ]
    if len(targets) != len(targets_arr):
        print("Warning: Some of the specified targets do not exist")
    SConscript(targets)
