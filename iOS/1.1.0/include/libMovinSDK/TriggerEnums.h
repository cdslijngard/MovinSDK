
//
//  TriggerEnums.h
//  MovinSDK
//
//  Created by Movin Software on 12/05/15.
//  Copyright (c) 2015 Movin. All rights reserved.
//

#ifndef MovinSDK_TriggerEnums_h
#define MovinSDK_TriggerEnums_h


#endif


typedef enum {
    kHigh = 200,
    kNormal = 100
} BeaconPriorityLevel; // As percentage

typedef enum {
    kTurnByTurn,
    kInRange
} MovinTriggerPreset;

typedef enum {
    kOnlyIncludeFilteredBeacons,
    kExcludeAllFilteredBeacons
} BeaconFilterType;
