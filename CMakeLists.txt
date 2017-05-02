cmake_minimum_required(VERSION 2.8)
project(ARoboCoreProject NONE)

include(${HFRAMEWORK_PATH}/hFramework.cmake)
enable_module(hCloudClient)

add_hexecutable(myproject main.cpp blinkm.cpp cardreader.cpp dac_mcp4728.cpp digipot_mcp4451.cpp endstops.cpp main.cpp Marlin_main.cpp MarlinSerial.cpp planner.cpp planner_bezier.cpp printcounter.cpp qr_solve.cpp Sd2Card.cpp SdBaseFile.cpp SdFatUtil.cpp SdFile.cpp SdVolume.cpp servo.cpp stepper.cpp stepper_dac.cpp stopwatch.cpp temperature.cpp twibus.cpp ultralcd.cpp utility.cpp vector_3.cpp watchdog.cpp)
