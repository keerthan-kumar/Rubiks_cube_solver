cmake_minimum_required(VERSION 3.28)
project(project1)

set(CMAKE_CXX_STANDARD 17)

add_executable(project1 main.cpp
        model/RubiksCube.cpp
        model/RubiksCube.h
        model/RubiksCube1dArray.cpp
        model/RubiksCube3dArray.cpp
        model/RubiksCubeBitboard.cpp
        "model/pattern database/PatternDatabase.h"
        Solver/BFSSolver.h
        Solver/DFSSolver.h
        Solver/IDAstarSolver.h
        Solver/IDDFSSolver.h
        PatternDataBases/CornerDBMaker.cpp
        PatternDataBases/CornerDBMaker.h
        PatternDataBases/CornerPatternDatabase.cpp
        PatternDataBases/CornerPatternDatabase.h
        PatternDataBases/math.cpp
        PatternDataBases/math.h
        PatternDataBases/NibbleArray.cpp
        PatternDataBases/NibbleArray.h
        PatternDataBases/PatternDatabase.cpp
        PatternDataBases/PatternDatabase.h
        PatternDataBases/PermutationIndexer.h
)
