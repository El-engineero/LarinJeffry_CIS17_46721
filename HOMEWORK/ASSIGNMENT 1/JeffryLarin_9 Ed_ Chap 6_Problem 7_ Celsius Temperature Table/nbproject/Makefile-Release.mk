#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/JeffryLarin_9\ Ed_\ Chap\ 6_Problem\ 7_\ Celsius\ Temperature\ Table.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/jeffrylarin_9_ed__chap_6_problem_7__celsius_temperature_table.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/jeffrylarin_9_ed__chap_6_problem_7__celsius_temperature_table.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/jeffrylarin_9_ed__chap_6_problem_7__celsius_temperature_table ${OBJECTFILES} ${LDLIBSOPTIONS}

.NO_PARALLEL:${OBJECTDIR}/JeffryLarin_9\ Ed_\ Chap\ 6_Problem\ 7_\ Celsius\ Temperature\ Table.o
${OBJECTDIR}/JeffryLarin_9\ Ed_\ Chap\ 6_Problem\ 7_\ Celsius\ Temperature\ Table.o: JeffryLarin_9\ Ed_\ Chap\ 6_Problem\ 7_\ Celsius\ Temperature\ Table.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/JeffryLarin_9\ Ed_\ Chap\ 6_Problem\ 7_\ Celsius\ Temperature\ Table.o JeffryLarin_9\ Ed_\ Chap\ 6_Problem\ 7_\ Celsius\ Temperature\ Table.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
