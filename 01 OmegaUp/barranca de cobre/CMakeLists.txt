CMAKE_MINIMUM_REQUIRED(VERSION 3.9)
SET(CMAKE_SYSTEM_NAME Generic)
#SET(CMAKE_SYSTEM_PROCESSOR arm)
SET(CMAKE_CROSSCOMPILING TRUE)

# force compiler settings
SET(CMAKE_C_COMPILER_WORKS TRUE)
SET(CMAKE_CXX_COMPILER_WORKS TRUE)

# force cmake compilers
SET(CMAKE_ASM_COMPILER    arm-none-eabi-gcc)
SET(CMAKE_C_COMPILER      arm-none-eabi-gcc)
SET(CMAKE_CXX_COMPILER    arm-none-eabi-g++)
SET(ELF2BIN               arm-none-eabi-objcopy)


# if the environment does not specify build type, set to Debug
IF(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug
            CACHE STRING "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel."
            FORCE)
ENDIF()