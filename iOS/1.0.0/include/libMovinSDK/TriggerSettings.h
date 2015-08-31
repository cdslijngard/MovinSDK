//
//  TriggerSettings.h
//  MovinSDK
//
//  Created by Movin Software on 12/05/15.
//  Copyright (c) 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TriggerEnums.h"

@interface TriggerSettings : NSObject

// Constructing
-(id) initWithTriggerDistance:(float) triggerDistance andCooldownDistance:(float) cooldownDistance andCooldownDelay:(float) cooldownDelay;

-(TriggerSettings *) addTriggerParametersWithTriggerDistance:(float) triggerDistance andTriggerDelta:(float) triggerDelta andTriggerHistoryCount:(int) triggerHistoryCount;
-(TriggerSettings *) addCooldownParametersWithTriggerDistance:(float) cooldownDistance andCooldownDelta:(float) cooldownDelta andCooldownHistoryCount:(int) cooldownHistoryCount;

// Getters
-(int) getMaxHistoryCount;
-(float) getTriggerDistance;
-(float) getCooldownDelay;
-(float) getCooldownDistance;

-(int) getTriggerHistoryForDistance:(float) distance;
-(int) getCooldownHistoryForDistance:(float) distance;
-(float) getTriggerDeltaForDistance:(float) distance;
-(float) getCooldownDeltaForDistance:(float) distance;

// Presets
+(TriggerSettings *) fromPreset:(MovinTriggerPreset) preset andCooldownDelay:(float) delay;
+(TriggerSettings *) fromServerWithDefaultPreset:(MovinTriggerPreset) preset andDefaultCooldownDelay:(float) delay;

@end
