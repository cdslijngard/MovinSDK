//
//  MovinPositioningEngine.h
//  MovinPositioningSDK
//
//  Created by Movin Software on 16/03/15.
//  Copyright (c) 2015 Movin Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>

@class FloorPosition;

@protocol MovinPositioningListener;

@interface MovinPositioningEngine : NSObject

// Initialize
-(id)init;
-(void)initialize;

// Start & stop
-(void)start;
-(void)stop;

// Heading
-(double) getHeading;

// Delegate
-(void)addPositioningListener:(id<MovinPositioningListener>) delegate;
-(void)removePositioningListener:(id<MovinPositioningListener>) delegate;

@end

// Callback delegate
@protocol MovinPositioningListener <NSObject>

-(void)initialized:(BOOL) success error: (NSError *) error;
-(void)updatedPosition:(FloorPosition *) position;
-(void)lostConnection;
-(void)unknownLocation;

@end
