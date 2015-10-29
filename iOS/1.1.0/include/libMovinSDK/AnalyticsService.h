//
//  AnalyticsService.h
//  MovinSDK
//
//  Created by Movin Software on 16/10/15.
//  Copyright © 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinPositioning.h"

@protocol GetAnalyticsIdCallback;

@interface AnalyticsService : NSObject

// Returns the shared instance of the analyitcs serivce, or null if the state is false
+(AnalyticsService *) instance;

// (Re-)initializes the analytics service
+(void) initialize_;

// Sets the state, only the movinSDK should do this
+(void) setState:(BOOL) state;

// Provides the AnalyticsID through the given callback.
// When the AnalyticsService is still busy with initializing, the callback is called once it is finished, otherwise its called immediatly
-(void) getAnalyticsIdWithCallback:(id<GetAnalyticsIdCallback>) callback;

// Hooks the analytics service to the given positioning engine
-(void) hookToEngine:(MovinPositioningEngine*) engine;

@end


// Callback delegate
@protocol GetAnalyticsIdCallback <NSObject>

-(void)analyticsId:(NSString *) analyticsId error: (NSError *) error;

@end
