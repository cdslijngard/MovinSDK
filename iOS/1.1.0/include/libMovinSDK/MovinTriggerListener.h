//
//  MovinTriggerListener.h
//  MovinSDK
//
//  Created by Movin Software on 12/05/15.
//  Copyright (c) 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MovinTriggerListener <NSObject>

-(void) beaconScannedWithUUID: (NSUUID *) uuid andMajor: (unsigned int) major andMinor: (unsigned int) minor;

@end
