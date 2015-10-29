//
//  MovinTriggerEngine.h
//  MovinSDK
//
//  Created by Movin Software on 12/05/15.
//  Copyright (c) 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinTriggerListener.h"
#import "TriggerEnums.h"
#import "TriggerSettings.h"

@interface MovinTriggerEngine : NSObject

// Trigger settings
@property (strong, nonatomic) TriggerSettings* triggerSettings;

// Start and Stop
-(BOOL) start;
-(void) stop;

// Priority levels
-(void) setPriorityLevelForUUID:(NSUUID *) uuid andMajor:(unsigned int) major andMinor: (unsigned int) minor andPriorityLevel: (BeaconPriorityLevel) level andResetAfterNextBeaconScan: (BOOL) reset;

// Filters
-(void) addFilterWithUUID:(NSUUID *) uuid andMajor: (unsigned int) major andMinor: (unsigned int) minor;
-(void) removeFilterWithUUID:(NSUUID *) uuid andMajor: (unsigned int) major andMinor: (unsigned int) minor;
-(BOOL) getUsesFilterValue;
-(void) setUseFilterWithBool:(BOOL) value;

// State
-(BOOL) isScanning;
-(BOOL) isBeaconHotWithUUID:(NSUUID *) uuid andMajor: (unsigned int) major andMinor: (unsigned int) minor;

// UUID
-(void) addUUIDWithUUID:(NSUUID*) uuid;
-(void) removeUUIDWithUUID:(NSUUID*) uuid;

// Event listeners
-(void) addTriggerListener:(id <MovinTriggerListener>) listener;
-(void) removeTriggerListener:(id <MovinTriggerListener>) listener;

// Reset hot beacons
-(void) resetCooldown;


@end
