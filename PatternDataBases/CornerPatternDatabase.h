//
// Created by Keerthan Kumar on 23-05-2024.
//

#ifndef PROJECT1_CORNERPATTERNDATABASE_H
#define PROJECT1_CORNERPATTERNDATABASE_H

#include "C:\Users\Keerthan Kumar\CLionProjects\project1\model\RubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef RubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const RubiksCube& cube) const;

};


#endif //PROJECT1_CORNERPATTERNDATABASE_H
